#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("blocks.in");
    ofstream cout("blocks.out");

    int n;
    cin>>n;

    map<char, int> mp;

    for(int i=0; i<n; i++){
        string x, y;
        cin>>x>>y;

        map<char, int> repetidas;

        for(char& c : x){
            mp[c]++;
            repetidas[c]++;
        }

        for(char &c : y){
            if(repetidas[c]){
                repetidas[c]--;
                continue;
            }

            mp[c]++;
        }
    }

    for(char i='a' ; i<='z'; i++){
        cout<<mp[i]<<"\n";
    }
}