#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int nearest(vector <int>& arr, int target){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector <int> prefix(n + 1, 0);
    prefix[0] = 0;
    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + arr[i-1];
    }
    int num = min(target/n, (int) arr.front()-1);
    int mini = INT_MAX;
    int ans = 0;
    while(num <= arr.back()){
        int ind = upper_bound(arr.begin(), arr.end(), num)-arr.begin();
        int sum = prefix[ind] + (n-ind) * num;
        if(abs(sum - target) < mini){
            mini = abs(sum - target);
            ans = num;
        }
        num++;
    }
    return ans;
}

int main(){
    int n; cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target; cin >> target;
    cout << nearest(arr, target) << endl;
}