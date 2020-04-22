#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map <int, int> F;
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        F[arr[i]]++;
    }
    int sum = 0;
    for(auto it = F.begin(); it != F.end(); it++){
        sum += ((it->second)*(it->second-1))/2;
    }
    for(int i = 0; i < n; i++){
        int x = F[arr[i]];
        cout << sum-(x*(x-1))/2 + ((x-1)*(x-2))/2 << endl;
    }
}