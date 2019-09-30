#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

vector <int> find3Numbers(vector <int> a, int n){
    vector <int> ans;
    if(n < 3){
        return ans;
    }
    int minLeft = a[0];
    int maxRight = INT_MIN;
    for(int i = 2; i < n; i++){
        maxRight = max(maxRight, a[i]);
    }
    int i = 1;
    while(i < n-1){
        if(a[i] > minLeft && a[i] < maxRight){
            ans.push_back(minLeft);
            ans.push_back(a[i]);
            ans.push_back(maxRight);
            break;
        }
        else{
            i++;
            if(a[i-1] < minLeft){
                minLeft = a[i];
            }
            if(a[i] == maxRight){
                for(int i = i+1; i < n; i++){
                    maxRight = max(maxRight, a[i]);
                }
            }

        }
    }
    return ans;

}

int main(){
    fastio
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n; 
        vector <int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];
        vector <int> ans = find3Numbers(v, n);
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << el;
    }
}

