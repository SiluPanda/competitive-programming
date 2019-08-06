#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define maxx 100009
map <int, int> a;

int main(){
    a[0] = 0;
    a[1] = 1;
    ll sq = 1;
    for(int i = 2; i < maxx-8; i++){
        ll p = pow(i, 2);
        if (p > sq){
            a[i] = a[i-1]+1;
            sq += p;
        }
        else{
            a[i] = a[i-1];
        }

    }
    
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        cout << a[n] << endl;
    }
}