#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll d1 = c-a-b;
        ll d2 = a-b-c;
        ll d3 = b-a-c;
        ll ans = 0;
        if(b > (a+c)) ans = d3;
        else if(a > (b+c)) ans = d2;
        else if(c > a+b) ans = d1;
        cout << ans << endl;
    }
}