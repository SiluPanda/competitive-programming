#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        
        string a; cin>>a;
        int n = a.length();
        bool f = 0;
        for(int i = n-1; i >= 0; i--){
            if(a[i] == '1'){
                cout << i << endl;
                f = 1;
                break;
            }
        }
        if(!f) cout << -1 << endl;
    }
}