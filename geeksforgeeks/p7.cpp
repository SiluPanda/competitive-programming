#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        vector <string> v;
        int i = 0;
        string tmp = "";
        while(true){
            if(i == s.length()){
                v.push_back(tmp);
                break;
            }
            if(s[i] == '.'){
                i++;
                v.push_back(tmp);
                tmp = "";
            }
            else{
                tmp += s[i];
                i++;
            }
        }
        for(int i = v.size()-1; i >= 0; i--){
            if(i != 0) cout << v[i] << ".";
            else cout << v[i] << endl;
        }
        

    }
}