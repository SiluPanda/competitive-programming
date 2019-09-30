#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        map <char, bool> unique;
        int i = 0;
        int maxLen = INT_MIN;
        int currLen = 0;
        while(true){
            if(i == s.length()){
                maxLen = max(currLen, maxLen);
                break;
            }
            if(unique.find(s[i]) == unique.end()){
                currLen++;
                unique[s[i]] = true;
                i++;
            }
            else{
                maxLen = max(maxLen, currLen);
                currLen = 0;
                unique.clear();
            }
           
        }
        cout << maxLen << endl;
    }
}