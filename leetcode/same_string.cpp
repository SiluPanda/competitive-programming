#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        while(true){
            string ret = "";
            int i = 0;
            for(;i < S.length()-1; i++){
                if(S[i+1] != '#'){
                    ret += S[i];
                }
                else{
                    i++;
                }
            }
            if(i < S.length()) ret += S[i];
            if(ret.length() == S.length()){
                break;
            }
            else{
                S = ret;
            }
            
        }
        while(true){
            string ret = "";
            int i = 0;
            for(;i < T.length()-1; i++){
                if(T[i+1] != '#'){
                    ret += T[i];
                }
                else{
                    i++;
                }
            }
            if(i < T.length()) ret += T[i];
            if(ret.length() == T.length()){
                break;
            }
            else{
                T = ret;
            }
            
        }
        return S == T;
    }
    
};

int main(){
    Solution sol;
    string S, T;
    cin >> S >> T;
    cout << sol.backspaceCompare(S, T) << endl;
}