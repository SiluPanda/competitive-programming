#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    vector <double> pre(n);
    pre[0] = a[0];
    for(int i = 1; i < n; i++) pre[i] = (pre[i-1]*i + a[i])/ double (i+1);
    int Q;
    cin >> Q;
    while(Q--){
        double k;
        cin >> k;
        vector <double>::iterator it = lower_bound(pre.begin(), pre.end(), k);
        cout << it-pre.begin() << el;
    }

}