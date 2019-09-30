#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

ll a[1000001] = {0};
int main(){
    a[0] = 0;
    a[1] = 1;
    for(ll i = 2; i < 1000001; i++){
        ll m = INT_MIN; ll ind = 0;
        for(ll j = sqrt(i); j > 0; j-- ){
            if(i%j == 0){
               if(m < a[j]){
                   m = a[j];
                   ind = i;
               }
               if(m < a[i/j]){
                   m = a[i/j];
                   ind = i;
               }
            }

        }
        a[i] = (i/ind)*m + 1;
    }
    for(ll i = 0; i < 10; i++){
        cout << a[i] << el;
    }
}