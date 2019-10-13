#include <bits/stdc++.h>
using namespace std;



int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        string patt;
        cin>>patt;
        bool found = false;
        for(int i = 0; i < n; i++){
            string tmp = "";
            for(int j = 0; j < a[i].length(); j++){
                if(isupper(a[i][j])){
                    tmp += a[i][j];
                }

            }
            b[i] = tmp;
        }
    }
}