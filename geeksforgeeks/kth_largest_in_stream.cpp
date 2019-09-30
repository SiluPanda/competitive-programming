#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tt; cin>>tt;
    while(tt--){
        int k, n;
        cin>>k>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        priority_queue <int> p;
        for(int i = 0; i < k-1; i++){
            cout << -1 << " ";
            p.push(a[i]);
        }
        p.push(a[k-1]);
        cout << p.top() << " ";
        for(int i = k; i < n; i++){
            if(p.top() < a[i]){
                p.push(a[i]);
                p.pop();
            }
            cout << p.top() << " ";
        }
        cout << endl;
    }
}