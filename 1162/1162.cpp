#include <iostream>
#include <vector>

using namespace std;

void Swap(vector<int> &vetor, int pos1, int pos2){
    int x;
    x = vetor[pos1];
    vetor[pos1] = vetor[pos2];
    vetor[pos2] = x;
}

int BubbleSort(vector<int> &vetor, int size){
    int i, cont = 0;

    while(size > 1){
        i = 1;
        while(i < size){
            if(vetor[i - 1] > vetor[i]){
                Swap(vetor, i-1, i);
                cont++;
            }
            i++;
        }
        size--;
    }
    return cont;
}

int main(void){
    int n, elem,size;
    vector<int> vetor;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> size;
        for(int j = 0; j < size; j++){
            cin >> elem;
            vetor.push_back(elem);
        }
        cout << "Optimal train swapping takes " << BubbleSort(vetor, size) << " swaps.\n";
        vetor.clear();
    }
    return 0;
}
