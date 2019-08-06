#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <vector <char>> a;
        //bool ans[n][n];
        for(int i = 0; i < n; i++){
            string s; cin>>s;
            vector <char> row;
            for(int j = 0; j < n; j++){
                row.push_back(s[j]);
                //ans[i][j] = 0;
            }
            a.push_back(row);
        }
        bool right[n][n], top[n][n];
        for(int i = 0; i < n; i++){
            int j = n-1;
            bool notfound = true;
            while(j >= 0){
                if(a[i][j] == '#'){
                    right[i][j] = 0;
                    notfound = false;
                }
                if(notfound){
                    right[i][j] = 1;
                }
                else{
                    right[i][j] = 0;
                }
                j--;
            }
        }
        
        for(int j = 0; j < n; j++){
            int i = n-1;
            bool notfound = true;
            while(i >= 0){
                if(a[i][j] == '#'){
                    top[i][j] = 0;
					notfound = 0;
                }
                if(notfound){
                    top[i][j] = 1;
                }
                else{
                    top[i][j] = 0;
                }
                i--;
            

            }
        }

        
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(top[i][j] && right[i][j]){
                    ans++;
                }
                
            }
            
        }

        
        cout << ans << endl;

    }
}
