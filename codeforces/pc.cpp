#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long int

int main(){
    fastio
    int n, q;
    cin >> n >> q;
    vector <map <int, int> > F(3);
    while(q--){
        int r,c;
        cin >> r >> c;
        if(F[r].find(c) != F[r].end()){
            F[r].erase(c);
        }
        else F[r][c] = 1;

        bool flag = false;
        for(auto it = F[1].begin(); it != F[1].end(); it++){
            int curr = it->first;
            if(F[2].find(curr) != F[2].end()
             || F[2].find(curr+1) != F[2].end()
             || F[2].find(curr-1) != F[2].end()){
                cout << "No" << endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout << "Yes" << endl;
    }
}