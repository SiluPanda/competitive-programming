#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    ll tt;
    cin>>tt;
    while(tt--){
        ll n, m, q;
        cin>>n>>m>>q;
        ll row[n] = {0}, col[m] = {0};
        while(q--){
            ll x, y;
            cin>>x>>y;
            row[x-1]++;
            col[y-1]++;
        }
        ll odd_row = 0, even_row = 0, odd_col = 0, even_col = 0;
        for(ll i = 0; i < n; i++){
            if(row[i]%2 != 0) odd_row++;
            else even_row++;
        }
        for(ll i = 0; i < m; i++){
            if(col[i]%2 != 0) odd_col++;
            else even_col++;
        }

        cout << odd_col*even_row + even_col*odd_row << endl;
    }
}