#include <bits/stdc++.h>
using namespace std;

bool isit(string a, string b){
    bool c = 1, ac = 1;
    int alen = a.length();
    int blen = b.length();
    if(alen != blen){
        return 0;
    }
    
    for(int i = 0; i < alen; i++){
        if(a[(i+2)%alen] != b[i]){
            
            c = 0;
            break;
        }
    }
    for(int i = 0; i < blen; i++){
        if(b[(i+2)%blen] != a[i]){
            ac = 0;
            break;
        }
    }
    //cout << c << ac << endl;
    return c || ac;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string a,b;
        cin>>a>>b;
        cout << isit(a, b) << endl;
    }
}