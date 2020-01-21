#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool isam(int a[], int n){
    unordered_map <int, int> F;
    int maxi = a[0];
    for(int i = 0; i < n; i++) F[a[i]] = 1, maxi = max(maxi, a[i]);
    for(auto i = F.begin(); i != F.end(); i++) if(i->second >= 3) return 1;
    for(int i = 0; i < n; i++){
        int diff = 1;
        while(2*diff+a[i] <= maxi){
            if(F[diff+a[i]] && F[2*diff+a[i]]) return 1;
            diff++;
        }
        
    }
    return 0;

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