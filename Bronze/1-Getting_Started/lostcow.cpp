#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("lostcow.in");
    ofstream cout("lostcow.out");
    int n,m, cont = 0, pos = 1, mult=1, real_pos;

    cin>>n>>m;

    while(1){
        if(n<m && pos){
            real_pos = n+mult;
            if(real_pos >= m){
                cont += m-n;
                cout<<cont<<"\n";
                return 0;
            }
        }

        else if(n>m && !pos){
            real_pos = n-mult;
            real_pos = max(0, real_pos);
            if(real_pos <= m){
                cont += n-m;
                cout<<cont<<"\n";
                return 0;
            }

            
        }
        pos = !pos;
        mult*=2;
        cont+= mult;
    }
}