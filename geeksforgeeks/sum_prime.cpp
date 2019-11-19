#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool prime[1000001];

void precompute(){
    memset(prime, 1, sizeof(prime));
    prime[1] = 0;
    for(int p = 2; p*p <= 1000000; p++){
        if(prime[p]){
            for(int i = p*p; i <= 1000000; i+=p){
                prime[i] = 0;
            }
        }
    }
}

int main(){
    precompute();
    fastio
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        bool f = 0;
        for(int i = 2; i <= (n/2); i++){
            if(prime[i] && prime[n-i]){
                cout << i << " " << n-i << endl;
                f = 1;
                break;
            }
        }
        if(!f) cout << -1 << endl;
    }
}