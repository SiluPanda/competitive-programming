#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int sum = 0;
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        int ret = 0;
        for(int i = 0; i < n; i++){
            ret += (arr[i]+k > sum-arr[i]);
        }
        cout << ret << endl;
        
    }
}