#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

ull bin[10001];

ull db(ull n){
    string ans = "";
    while(n>0){
        ans += to_string(n%2);
        n/=2;
    }
    ull out = 0;
    ull mul = 1;
    for(int i = 0; i < ans.length(); i++){
        out += (ans[i]-'0')*mul;
        mul*=10;
    }
    return out;
    
}

void populate(){
    for(ull i = 0; i <= 10000; i++){
        bin[i] = db(i);
    }
}

int main(){
    populate();
    int tt;
    cin>>tt;
    while(tt--){
        ull n;
        cin>>n;
        for(ull i = 1; i < 10001; i++){
            if((bin[i]*9)%n == 0){
                cout << bin[i]*9 << endl;
                break;
            }
        }
    }
}


