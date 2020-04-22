#include <bits/stdc++.h>
using namespace std;

#define int long long

bool can_sort(int arr[], int n){
    vector <int> a, b;
    for(int i = 0; i < n; i++){
        a.push_back(arr[i]);
    }
    b = a;
    if(n <= 3){
        return true;
    }
    sort(b.begin(), b.end());
    vector <int> d(b.rbegin(), b.rend());
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            vector <int> c = a;
            reverse(c.begin()+i, c.begin()+j+1);
            if(c == b || c == d){
                return true;
            }
        }
    }
    return false;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        if(can_sort(arr, n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}