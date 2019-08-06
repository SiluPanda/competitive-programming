#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int get_gcd(int a[], int n){
    int g = a[0];
    for(int i = 0; i < n; i++){
        g = __gcd(g, a[i]);

    }
    return g;
}

int fun(int n){
    if(n == 1){
        return -1;
    }
    for(int i = 2; i <= sqrt(n);i++){
        if((n%i) == 0){
            return i;
        }
    }
    return n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int g = get_gcd(a, n);
       // cout << "gcd is" << g << endl;
        cout << fun(g) << endl;
        //cout << fun(get_gcd(a, n)) << endl;

    }
}