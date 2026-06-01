#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("blist.in");
    ofstream cout("blist.out");

    int n;
    cin>>n;

    vector<int> vet(1001,0);

    while(n--){
        int x,y,z;
        cin>>x>>y>>z;

        for(int i=x; i<=y; i++){
            vet[i]+=z;
        }
    }

    int ans=0;
    for(int i=0; i<=1000; i++){
        ans = max(vet[i], ans); 
    }

    cout<<ans<<"\n";
}