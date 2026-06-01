#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("shuffle.in");
    ofstream cout("shuffle.out");

    int n;
    cin>>n;

    vector<int> vet(n);

    for(int i=0; i<n; i++){
        cin>>vet[i];
        vet[i]-=1;
    }

    vector<string> atual(n);
    for(int i=0; i<n; i++){
        cin>>atual[i];
    }

    for(int j=0; j<3; j++){
        vector<string> anterior(n);
        for(int i=0; i<n; i++){
            anterior[i] = atual[vet[i]];
        }

        atual = anterior;
    }

    for(int i=0; i<n; i++){
        cout<<atual[i]<<"\n";
    }
}