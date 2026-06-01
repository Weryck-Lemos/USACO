#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("speeding.in");
    ofstream cout("speeding.out");
 
    int n,m;

    cin>>n>>m;

    vector<int> lim(101), bet(101);
    int aux=0;
    for(int i=0; i<n; i++){
        int s, d;
        cin>>d>>s;

        for(int i=aux; i<aux+d; i++){
            lim[i]= s;
        }
        aux += d;
    }

    aux=0;
    for(int i=0; i<m; i++){
        int s, d;
        cin>>d>>s;

        for(int i=aux; i<aux+d; i++){
            bet[i]= s;
        }
        aux += d;
    }

    int ans=0;

    for(int i=0; i<100; i++){
        int comp = bet[i]-lim[i];
        ans = max(ans, comp);
    }

    cout<<ans<<"\n";
}