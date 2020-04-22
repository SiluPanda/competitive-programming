#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, k, p;

int solve(vector <vector <int>> mat, vector <vector <int>> dp, int curr_stack, int k){
    
}

int main(){
    int tt;
    cin >> tt;
    for(int cas = 0; cas < tt; cas++){
        cin >> n >> k >> p;
        vector < vector <int> > mat(n, vector <int> (k, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                int num;
                cin >> num;
                if(i > 0) mat[i][j] += mat[i-1][j] + num;
                else mat[i][j] = num;
            }
        }
        vector < <vector <int> > dp(n, vector <int> (k, -1));
        int count = solve(mat, dp n, 0, k);
        cout << "Case #" << cas+1 << ": " << count << endl;
        
    }
}