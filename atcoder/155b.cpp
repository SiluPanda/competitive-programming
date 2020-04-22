#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    bool good = 1;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0 && (arr[i]%3 != 0 && arr[i]%5 != 0)){
            good = 0;
            break;
        }
    }
    if(good) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
}