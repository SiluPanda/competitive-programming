#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int numTrees(int n){
    long long int mul1 = 1, mul2 = 1;
    for(int i = n+2; i <= 2*n; i++){
        mul1*=i;
    }
    for(int i = 1; i <= n; i++){
        mul2*=i;
    }
    return (mul1/mul2);
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        cout << numTrees(n) << endl;
    }
}