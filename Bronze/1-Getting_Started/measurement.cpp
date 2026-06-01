#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("measurement.in");
    ofstream cout("measurement.out");

    int n;
    cin>>n;

    vector<int> mildred(1000,7), elsie(1000,7), bessie(1000,7);
    vector<tuple<int, string, int>>  tp(n);
    for(int i=0; i<n; i++){
        int day, op;
        string name;

        cin>>day>>name>>op;

        tp[i] = {day,name, op};
    }

    sort(tp.begin(), tp.end());

    for(auto& x : tp){
        int op = get<2>(x) ;


        for(int i = get<0>(x) ;i<= get<0>(tp[n-1]); i++){
            if(get<1>(x) == "Mildred"){
                mildred[i] += op;
            }
            else if(get<1>(x) == "Elsie"){
                elsie[i] +=op;
            }

            else{
                bessie[i] +=op;
            }
        }
        
        

    }

    string display_pass = "BME";
    int ans=0, maior;
    for(int j=1; j<=get<0>(tp[n-1]); j++){
        //cout<<"indice:"<<j<<"  |"<<mildred[j]<<" "<<elsie[j]<<" "<<bessie[j]<<"\n";
        string display_hoje="";

        maior = max(mildred[j], max(elsie[j], bessie[j]));

        if(maior == bessie[j]) display_hoje +="B";
        if(maior == mildred[j]) display_hoje +="M";
        if( maior == elsie[j]) display_hoje += "E";

        if(display_hoje != display_pass){
            ans++;
            display_pass= display_hoje;
        }
        
    }
    cout<<ans<<"\n";
}