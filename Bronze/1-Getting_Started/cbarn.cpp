#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("cbarn.in");
    ofstream cout("cbarn.out");
    int n, tot=0;
    cin>>n;

    vector<int> cow(n);
    for(int i=0; i<n; i++){
        cin>>cow[i];
        tot+= cow[i];
    }

    vector<int> pass(n,0);
    for(int i=0; i<n; i++){
        pass[0]+= cow[i]*i;
    }

    int ans= pass[0];

    for(int i=1; i<n; i++){
        pass[i] = pass[i-1]-(tot-cow[i-1]) + cow[i-1]*(n-1);
        ans = min(ans, pass[i]);
    }

    cout<<ans<<"\n";
}