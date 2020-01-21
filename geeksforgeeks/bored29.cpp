#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool isam(int a[], int n){
    if(n <= 2) return 1;
    sort(a, a+n);
    int i = 0, j = 1, k = 2;
    while(k < n){
        if(a[i]-a[j] != a[j]-a[k]) return 0;
        i++; j++; k++;
    }
    return 1;

}


int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        if(isam(a, n)) cout << "YES";
        else cout << "NO";
        cout << el;
    }
}