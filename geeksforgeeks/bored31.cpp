#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

long helper(int n){
    return (n*(n-1))/2;
}

long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{   
    for(int i = 0; i < n; i++) if(arr[i] == 0) arr[i] = -1;
    int pre[n+1];
    pre[0] = 0;
    for(int i = 1; i <= n; i++) pre[i] = pre[i-1]+arr[i-1];
    unordered_map <int, int> F;
    for(int i = 0; i <= n; i++) F[pre[i]]++;
    long long int ans = 0;
    for(auto i = F.begin(); i != F.end(); i++){
        ans += helper(i->second);
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
        cout << countSubarrWithEqualZeroAndOne(a, n) << el;
    }
}