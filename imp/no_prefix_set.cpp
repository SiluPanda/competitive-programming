#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    unordered_map <string, int> M, N;
    bool ok = 1;
    while(n--){
        string s;
        cin >> s;
        int len = s.length();
        for(int size = 1; size <= len; size++){
            string prefix = s.substr(0, size);
            N[prefix]=1;
            if(M.find(prefix)!=M.end() || N.find(s)!=N.end()){
                ok = 0;
                cout << "BAD SET\n";
                cout << s << "\n";
                break;
            }
           
        }
        if(!ok) break;
        M[s]=1;

    }
    if(ok) cout << "GOOD SET\n";
}