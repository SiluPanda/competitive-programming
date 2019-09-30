#include <bits/stdc++.h>
using namespace std;

bool is_palin(string s){
    int len = s.length();
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    // int tt;
    // cin>>tt;
    // while(tt--){
    //     string s;
    //     cin>>s;
    //     int n = s.length();
    //     int maxLen = 0;
    //     string ans = "";
    //     for(int pos = 0; pos <= n-1; pos++){
    //         for(int size = 1; size <= n; size++){
    //             string subString = s.substr(pos, size);
    //             //cout << subString << endl;
    //             if(maxLen < size){
    //                 if(is_palin(subString)){
    //                     cout << subString << " --ok and the size is " << size << endl; 
    //                     maxLen = size;
    //                     ans = subString;
    //                 }
    //             }

    //         }
    //     }
    //     //if(ans.length() == 1) cout << s[0] << endl;
    //     cout << ans << endl;

    // }

    string word = "silupanda"
    for(int pos = 0; pos <= n-1; pos++){
        for(int size = 1;)
    }
}