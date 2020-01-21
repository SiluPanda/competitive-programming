#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int getit(int a[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        int j = i;
        set <int> F;
        while(j < n && F.find(a[j]) == F.end()){
            F.insert(a[j]);
            j++;
        }
        ans += ((j-i)*(j-i+1))/2;
    }
    return ans;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << getit(a, n) << el;
    }
}