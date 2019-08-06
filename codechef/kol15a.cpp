#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int fun(string s){
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        int asc = (int) s[i];
        if(asc < 65 || asc > 122){
            ans += s[i]-'0';
        }
    }
    return ans;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        string s;
        cin>>s;
        cout << fun(s) << endl;
    }

}