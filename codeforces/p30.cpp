#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
   int c = 0;
   int i = 0;
   while(i < n){
        int j = i+1;
        while(j < n && a[j-1] <= a[j]){
            j++;
        }
        //cout << j << i << el;
        c = max(j-i, c);
        i = j;
   }
   cout << c << el;
    
}
