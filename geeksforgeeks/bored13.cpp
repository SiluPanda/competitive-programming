#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool helper(vector <int> a, vector <int> b){
    if(a.size() != b.size()) return 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

bool isequal(unordered_map <char, vector <int> > A, unordered_map <char, vector <int> > B){
    if(A.size() != B.size()) return 0;
    for(auto ita = A.begin(); ita != A.end(); ita++){
        vector <int> curr = ita->second;
        bool found = false;
        for(auto itb = B.begin(); itb != B.end(); itb++){
            if(helper(itb->second, curr)){
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

vector <string> findMatchedWords(vector<string> dict, string pattern){
    unordered_map <char, vector <int> > A;
    for(int i = 0; i < pattern.size(); i++){
        A[pattern[i]].push_back(i);
    }
    vector <string> ret;
    for(int i = 0; i < dict.size(); i++){
        unordered_map <char, vector <int> > B;
        for(int j = 0; j < dict[i].size(); j++){
            B[dict[i][j]].push_back(j);
        }
        if(isequal(A, B)) ret.push_back(dict[i]);
        
    }
    return ret;

}                     

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector <string> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        string pattern;
        cin >> pattern;
        vector <string> ans = findMatchedWords(v, pattern);
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << el;
    }
}