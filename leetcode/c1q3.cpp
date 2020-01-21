#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
    unordered_map <string, int> F;
    int n = s.length();
    for(int i = 0; i < n; i++){
        unordered_map <char, int> P;
        for(int j = i; j < i+minSize-1; j++) P[s[i]]++;
        for(int j = i + minSize - 1; j <= i + maxSize - 1; j++){
            P[s[i]]++;
            if(P.size() <= maxLetters){
                F[s.substr(i, j - i + 1)]++;
            }
        }
    }
    int ret = 0;
    for(auto i = F.begin(); i != F.end(); i++){
        cout << i->first << " " << i->second << endl;
        ret = max(ret, i->second);
    }
    return ret;

}

int main(){
    string s;
    cin >> s;
    int maxLetters, minSize, maxSize;
    cin >> maxLetters >> minSize >> maxSize;
    cout << maxFreq(s, maxLetters, minSize, maxSize) << endl;
}