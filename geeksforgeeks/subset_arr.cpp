#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool a[100001] = {0};
bool b[100001] = {0};

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        int n, m;
        bool a[100001] = {0};
        bool b[100001] = {0};
        cin>>n>>m;
        for(int i = 0; i < n; i++){
            int num;
            cin>>num;
            a[num] = 1;
        }
        for(int i = 0; i < m; i++){
            int num;
            cin>>num;
            b[num] = 1;
        }
        
        bool f = true;
        for(int i = 0; i < 100001; i++){
            if(b[i] == 1){
                if(a[i] == 0){
                    cout << "No" << el;
                    //cout << i << el;
                    f = false;
                    break;
                }
            }
        }
        if(f) cout << "Yes" << el;
    }
}