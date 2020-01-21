#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int maxLen(int a[], int n)
{   
    for(int i = 0; i < n; i++) if(a[i] == 0) a[i] = -1;
    int pre[n+1];
    pre[0] = 0;
    unordered_map <int, vector <int> > F;
    F[0].push_back(0);
    for(int i = 1; i <= n; i++){
        pre[i] = pre[i-1]+a[i-1];
        //cout << pre[i] << " ";
        F[pre[i]].push_back(i);
    }
    cout << endl;
    int ans = 0;
    for(auto i = F.begin(); i != F.end(); i++){
        vector <int> curr = i->second;
        if(curr.size() > 0) 
            ans = max(ans, (int) curr.back()-curr.front());
    }
    return ans;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << maxLen(a, n) << el;
    }
}