#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    cin.ignore();
    while(tt--){
        string s;
        getline(cin, s);
        unordered_map <char, bool> unique;
        for(int i = 0; i < s.length(); i++){
            unique[s[i]] = false;
        }
        int i = 0;
        while(i < s.length()){
            if(unique[s[i]] == false){
                cout << s[i] << "";
                unique[s[i]] = true;
            }
            i++;
        }
        cout << endl;
    }
}