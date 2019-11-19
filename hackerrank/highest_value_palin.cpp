#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector <char> a(n);
    bool flag = true;
    if(n%2 != 0) a[n/2] = s[n/2];
    for(int i = (n-1)/2; i >= 0; i--){
        if(s[i] != s[n-1-i]){
            if(k == 0){
                flag = false;
                break;
            }
            else if(k >= 2*(i+1)){
                a[i] = '9';
                a[n-1-i] = '9';
                k-=2;
            }
            else{
                int maxi = max(s[i]-'0', s[n-i-1]-'0');
                a[i] = maxi+'0';
                a[n-1-i] = maxi+'0';
                k--;
            }
        }
        else{
            a[i] = s[i];
            a[n-i-1] = s[i];
        }
    }
    if(flag == false){
        cout << -1;
    }
    else{
        string ret = "";
        for(auto x : a) ret += x;
        cout << ret;

    }
    cout << endl;

}