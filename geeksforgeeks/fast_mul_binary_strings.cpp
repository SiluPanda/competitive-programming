#include <bits/stdc++.h>
using namespace std;

long long int bin_dec(string s){
    long long int ans = 0;
    for(long long int i = s.length()-1; i >= 0; i--){
        ans += (s[i]-'0')*pow(2,s.length()-1-i);
    }
    return ans;
}
//yet to implement karatsuba algorithm
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string a, b;
        cin>>a>>b;
        cout << bin_dec(a) * bin_dec(b) << endl;
    }
}