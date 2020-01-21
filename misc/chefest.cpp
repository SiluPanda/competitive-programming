#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long long n, m, k;
        cin >> n >> m >> k;
        if(n > m){
            swap(n, m);
        }
        long long maxsum = (k*(k+1))/2;
        if(maxsum <= n){
            cout << n+m-2*maxsum << endl;
        }
        else{
            cout << m-n << endl;
        }
    }
}