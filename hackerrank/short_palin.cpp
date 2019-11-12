#include <bits/stdc++.h>
using namespace std;
#define MOD 1e9+7
#define LL long long int

int main(){
    string s;
    cin >> s;
    int n = s.length();
    unordered_map <char, int> freq;
    for(int i = 0; i < n; i++){
        freq[s[i]]++;
    }
    LL ans = 0;
    for(auto i = freq.begin(); i != freq.end(); i++){
        LL num = i->second;
        num = (num*(num-1))/2;
        if(num != 0){
            for(auto j = i+1; j != freq.end(); j++){
                LL num2 = j->second;
                num2 = (num2*(num2-1))/2;
                ans = (ans + num*num2)%MOD;
            }
        }
    }
    cout << ans << endl;
}