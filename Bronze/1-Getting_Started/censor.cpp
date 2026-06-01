#include <bits/stdc++.h>
using namespace std;

bool checar(string &sub, string &ans){
    size_t i=ans.size() - sub.size();
    
    for(size_t j=0; i<ans.size(); i++, j++){
        if(sub[j] != ans[i])return false;
    }
    return true;
    
}

int main(){
    ifstream cin("censor.in");
    ofstream cout("censor.out");

    string txt, sub, ans="";
    cin>>txt>>sub;


    for(char& c : txt){
        ans +=c;

        if(ans.size() >= sub.size() && checar(sub, ans)){
            ans.resize(ans.size() - sub.size());

        }
    }

    cout<<ans<<"\n";
}