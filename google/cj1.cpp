#include <bits/stdc++.h>
using namespace std;

#define int long long

bool dup(vector <int> v){
    set <int> st(v.begin(), v.end());
    return st.size() != v.size();
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ca;
    cin >> ca;
    for(int t = 0; t < ca; t++){
        int n;
        cin >> n;
        vector < vector <int> > mat(n, vector <int> (n));
        int trace = 0;
        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
                if(i == j){
                    trace += mat[i][j];
                }
            }
        }
        int r = 0, c = 0;
        for(int i = 0; i < n; i++){
            r += dup(mat[i]);
        }
        for(int j = 0; j < n; j++){
            vector <int> col;
            for(int i = 0; i < n; i++){
                col.push_back(mat[i][j]);
            }
            c += dup(col);
        }
        cout << "Case #" << t+1 << ": " << trace << " " << r << " " << c << endl;

    }
}