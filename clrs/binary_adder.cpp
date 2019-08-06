#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string to_bin(ll num){
    string ans = "";
    while(num >= 1){
        ans += to_string(num%2);
        num /= 2;

    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}

ll bin_to_dec(string bin){
    ll c = 0;
    ll ans = 0;
    for(ll i = bin.length()-1; i >= 0; i--){
        ans += (bin[i] - '0') * pow(2, c);
        c++;
    }
    return ans;
}

string bin_adder(string bin1, string bin2){
    return to_bin(bin_to_dec(bin1) + bin_to_dec(bin2));
}

int main(){
    string bin1, bin2;
    cin>>bin1>>bin2;
    cout << bin_adder(bin1, bin2) << endl;
}