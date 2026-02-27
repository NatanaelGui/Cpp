#include<iostream>
using namespace std;

inline void getVet(int vet[], const int SIZE_VET){

    for(int i = 0; i < SIZE_VET; ++i)
        cout << vet[i] << " ";
    
    
    cout << endl;
}

int* mergeVet(const int* vetA, const int* vetB, const int SIZE_VET_A, const int SIZE_VET_B){

    int mergeSize = SIZE_VET_A + SIZE_VET_B;
    int* merge = new int[mergeSize];

    int i = 0;
    for(; i < SIZE_VET_A; ++i)
        merge[i] = vetA[i];
        
    for(; i < mergeSize; ++i)
        merge[i] = vetB[i - SIZE_VET_A];

        
        return merge;
    }
    
    int main()
    {
        const int MAX_SIZE_VET = 4;
        int vetA[MAX_SIZE_VET], vetB[MAX_SIZE_VET];
        int* ptrMerge;
        
        cout << "Vetor A: ";
        for (int i = 0; i < MAX_SIZE_VET; ++i)                    
            cin >> vetA[i];
                
        cout << "Vetor B: ";
        for (int i = 0; i < MAX_SIZE_VET; ++i)
            cin >> vetB[i];
        
        ptrMerge = mergeVet(vetA, vetB, MAX_SIZE_VET, MAX_SIZE_VET);
        
        cout << "Uniao: ";
        getVet(ptrMerge, MAX_SIZE_VET * 2);

        delete[] ptrMerge;
        ptrMerge = nullptr;
        
        return 0;
}
