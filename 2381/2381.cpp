#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, s;
    string aluno;
    vector<string> alunos;

    cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> aluno;
        alunos.push_back(aluno);
    }
    std::sort(alunos.begin(), alunos.end());
    cout << alunos[s-1] << endl;

    return 0;
}