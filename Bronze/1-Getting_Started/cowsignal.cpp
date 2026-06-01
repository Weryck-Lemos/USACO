#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("cowsignal.in");
    ofstream cout("cowsignal.out");

    int m,n,k;
    cin>>m>>n>>k;

    char mat[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0; i<m*k; i++){
        for(int j=0; j<n*k; j++){
            cout<<mat[i/k][j/k];
        }
        cout<<"\n";
    }
}