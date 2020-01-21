#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int maxi = INT_MIN, mini = INT_MAX;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(a[i], maxi);
        mini = min(a[i], mini);
    }
    int maxind = 0, minind = 0;
    for(int i = 0; i < n; i++){
        if(maxi == a[i]){
            maxind = i;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(mini == a[i]){
            minind = i;
        }
    }
    //cout << maxind << " " << minind << endl;
    if(n == 1) cout << 0 << endl;
    else if(maxind < minind) cout << maxind+(n-minind-1)<< endl;
    else cout << maxind+(n-minind-1)-1 << endl;
}