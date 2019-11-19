#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

struct cord{
    int x, y;
};

int flips(vector <string> A, vector <string> B, int n, int m, cord diff){
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int idx = i+diff.x;
            int idy = j+diff.y;
            if(idx >= n || idy >= m || idx < 0 || idy < 0){
                if(A[i][j] == '1') ans++;
            }
            else{
                //cout << "hello4" << el;
                ans += (A[i][j] != B[idx][idy]);
            }
        }
    }
    return ans;
}

int main(){
    //cout << "hello1" << el;
    fastio
    int tt;
    cin >> tt;
    while(tt--){
        
        int n, m;
        cin >> n >> m;
        //cout << "hello2" << el;
        vector <string> A(n), B(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        for(int i = 0; i < n; i++) cin >> B[i];
        vector <cord> a, b;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(A[i][j] == '1'){
                    cord p;
                    p.x = i;
                    p.y = j;
                    a.push_back(p);
                }
                if(B[i][j] == '1'){
                    cord p;
                    p.x = i;
                    p.y = j;
                    b.push_back(p);
                }
            }
        }
        
        int mini = INT_MAX;
        int diffx = 0, diffy = 0;
        for(int i = 0; i < a.size(); i++){
            for(int j = 0; j < b.size(); j++){
                cord diff;
                diff.x = (a[i].x-b[j].x) * -1;
                diff.y = (a[i].y-b[j].y) * -1;
                
                int pp = flips(A, B, n, m, diff);
                if(mini > pp){
                    mini = pp;
                    diffx = diff.x;
                    diffy = diff.y;
                
            }
        }
        //cout << "Diff is " << diffx << " " << diffy << el;
        cout << mini << el;
    }

}