#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll get_atoi(string s){
    string ans = "";
    int i = 0, N = s.length();
    while(i < N){
        if(s[i] == ' '){
            i++;
        }
        else if(s[i] == '+' || s[i] == '-' || isdigit(s[i])){
            ans += s[i];
            i++;
        }
        else{
            break;
        }
    }
    cout << ans << endl;
    vector <int> count(2, 0);
    for(int i = 0; i < ans.length(); i++){
        if(ans[i] == '+') count[0]++;
        else count[1]++;
    }
    int sign = 1;
    if(count[0] == 0){
        if(count[1]&1) sign = -1;
    }
    if(count[1] && count[0] && (count[0]*count[1])&1) sign = -1;
    cout << sign << endl;
    int itr = 0;
    while(itr < ans.length() && (ans[itr] == '+' || ans[itr] == '-')){
        itr++;
    }
    cout << itr << endl;
    if(itr != count[1]+count[0]) {
        return 0;
    }
    string ori = "";
    for(; itr < ans.length(); itr++) ori += ans[itr];
    ll num = 0;
    reverse(ori.begin(), ori.end());
    cout << ori << endl;
    for(int i = 0; i < ori.length(); i++){
        num += (ori[i]-'0')*pow(10, i);
        if(num > INT_MAX) return sign*INT_MAX;
    }
    return sign*num;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    cout << get_atoi(s) << endl;
}