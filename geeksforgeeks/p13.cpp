#include <bits/stdc++.h>
using namespace std;

int fun(string s, int n, int k, char target){
    int len = s.length();
    int rep = n/len;
    int rem = n%len;
    int freq[26] = {0};
    for(int i = 0; i < len; i++){
        freq[s[i]-'A']++;
    }
    for(int i = 0; i < 26; i++){
        freq[i]*=rep;
    }
    for(int i = 0; i < rem; i++){
        freq[s[i]-'A']++;
    }
    return freq[target-'A'];
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int k, n;
        cin>>k>>n;
        char target;
        cin>>target;
        cout << fun(s, n, k, target) << endl;
    }
}