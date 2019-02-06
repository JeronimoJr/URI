#include <iostream>
#include <vector>

using namespace std;

int particiona(vector<int> &vetor, int inicio, int fim){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = vetor[inicio];
    while(esq < dir){
        while(vetor[esq] <= pivo)
            esq++;
        while(vetor[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;
        }
    }
    vetor[inicio] = vetor[dir];
    vetor[dir] = pivo;
    return dir;
}

void QuickSort(vector<int> &vetor, int inicio, int fim){
    int pivo;
    if(fim > inicio){
        pivo = particiona(vetor, inicio, fim);
        QuickSort(vetor, inicio, pivo-1);
        QuickSort(vetor, pivo+1, fim);
    }
}

/*void imprimir(vector<int> &vetor, int size){
    for(int i = 0; i < size; i++)
        cout << vetor[i] << " ";
    cout << "\n";
}*/
int main(void){
    int n, size, elem, cont = 0;
    vector<int> vetor;
    vector<int> vetor2;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> size;
        for(int j = 0; j < size; j++){
            cin >> elem;
            vetor.push_back(elem);
            vetor2.push_back(elem);
        }
        QuickSort(vetor, 0, size-1);
        
        for(int j = 0; j < size; j++){
            if(vetor[size-1-j] == vetor2[j])
                cont++;
        }
        //imprimir(vetor, size);
        //imprimir(vetor2, size);
        cout << cont << endl;
        cont = 0;
        vetor2.clear();
        vetor.clear();
    }
    return 0;
}