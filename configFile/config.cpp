#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
  // Abrindo o arquivo de configuração
  ifstream arquivoConfig("configuracao.ini");
  if (!arquivoConfig.is_open()) {
    cout << "Não foi possível abrir o arquivo de configuração." << endl;
    return 1;
  }

  // Vetor para armazenar os dados
  vector<string> dados;

  // Percorrendo o arquivo linha por linha
  string linha;
  while (getline(arquivoConfig, linha)) {
    // Verificando se a linha representa uma seção de configuração
    if (linha.front() == '[' && linha.back() == ']') {
      // Ignorando a seção de configuração
      continue;
    } else {
      // Verificando se a linha contém o sinal "="
      size_t pos = linha.find("=");
      if (pos != string::npos) {
        // Adicionando os dados entre o sinal "=" e a quebra de linha ao vetor
        dados.push_back(linha.substr(pos + 1));
      }
    }
  }

  // Fechando o arquivo de configuração
  arquivoConfig.close();

  if (dados[1] == "false" && dados[3] == "false" && dados[2] == "false")
  {
    dados[0] = "";
  }
  
  if (dados[1] == "true" && dados[3] == "false" && dados[2] == "false")
  {
    dados[0] = "1310";
  }

  if (dados[1] == "false" && dados[3] == "true" && dados[2] == "false")
  {
    dados[0] = "1550";
  }

    if (dados[1] == "false" && dados[3] == "false" && dados[2] == "true")
  {
    dados[0] = "1625";
  }

  // Criando um arquivo de texto para escrever os dados
  ofstream arquivoTexto("dados.txt");
  if (!arquivoTexto.is_open()) {
    cout << "Não foi possível criar o arquivo de texto." << endl;
    return 1;
  }

  // Escrevendo os dados no arquivo de texto  
    arquivoTexto << "limiarFimFibra:" << "1" << "#" << endl;
    arquivoTexto << "limiarSplitter:" << "5" << "#" << endl;
    arquivoTexto << "limiarEvento:" << "2" << "#" << endl;
    arquivoTexto << "backScatter1310:" << "5" << "#" << endl;
    arquivoTexto << "backScatter1550:" << "7" << "#" << endl;
    arquivoTexto << "backScatter16xx:" << "8" << "#" << endl;
    arquivoTexto << "qteSplitter:" << "1" << "#" << endl;
    arquivoTexto << "compOnda:" << dados[0] << "#" << endl;
    arquivoTexto << "ior:" << "1.467" << "#" << endl;
    arquivoTexto << "confRange:" << "1550" << "#" << endl;
    arquivoTexto << "larguraPulso:" << dados[7] << "#" << endl;
    arquivoTexto << "avgTimeLaser:" << "30" << "#" << endl;
    arquivoTexto << "confPrecisao:" << "0" << "#" << endl;
    arquivoTexto << "tempoMonitor:" << "0" << "#" << endl;
    arquivoTexto << "currentLaser:" << "500" << "#" << endl;
    arquivoTexto << "versao:" << "A1" << "#" << endl;
    arquivoTexto << "versaoNovo:" << "1" << "#" << endl;
    arquivoTexto << "laserState:" << "1" << "#" << endl;
    
  for (string dado : dados) {
    cout << dado << endl;
  }
  // Fechando o arquivo de texto
  arquivoTexto.close();

  return 0;
}