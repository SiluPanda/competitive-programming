#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

uint32_t reverseBits(uint32_t n){
    vector <int> bin;
    while(n > 0){
        bin.push_back(n%2);
        n/=2;
    }
    
    int len = bin.size();
    for(int i = 0; i < 32-len; i++){
        bin.push_back(0);
    }
    reverse(bin.begin(), bin.end());
    uint32_t ret = 0;
    for(int i = 0; i < bin.size(); i++){
        ret += (bin[i]*pow(2, i));
    }
    return ret;
}

int main(){
    uint32_t n;
    cin >> n;
    cout << reverseBits(n) << el;
}