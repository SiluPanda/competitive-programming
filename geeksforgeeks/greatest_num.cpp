#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b){
    return (a+b) > (b+a);

}

int main(){
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        vector <string> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end(), comp);
        string ans = "";
        for(int i = 0; i < n; i++){
            ans += v[i];
        }
        cout << ans << endl;

    }
}