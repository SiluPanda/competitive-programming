#include <bits/stdc++.h>
using namespace std;

bool isthere(vector <string> grid, vector <string> pat){
    int n = grid.size();
    int m = grid[0].length();
    int p = pat.size();
    int q = pat[0].length();
    //cout << n << " " << m << "\n" << p << " " << q << "\n";
    for(int i = 0; i <= n-p; i++){
        for(int start = 0; start <= m-q; start++){
            
            if(grid[i].substr(start, q) == pat[0]){
                //cout << "checking..." << grid[i].substr(start, q) << " " << pat[0] << endl;
                int j = i;
                bool ok = 1;
                while(j < i+p){
                    if(grid[j].substr(start, q) != pat[j-i]){
                        ok = 0;
                        break;
                    }
                    j++;
                }
                if(ok){
                   // cout << start << " " << i << endl;
                    return 1;
                }
            }
            
        }
    }
    return 0;

}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >> m;
        vector <string> grid(n);
        for(int i = 0; i < n; i++){
            cin >> grid[i];
        }
        int p, q;
        cin >> p >> q;
        vector <string> pat(p);
        for(int i = 0; i < p; i++){
            cin >> pat[i];
        }
        if(isthere(grid, pat)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

