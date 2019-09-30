#include <bits/stdc++.h>
using namespace std;

int get_max(int a[], int start, int end){
    int ans = INT_MIN;
    for(int i = start; i <= end; i++) ans = max(ans, a[i]);
    return ans;
}

int fun(int a[], int n){
    if(n <= 2) return 0;
    int max_left = a[0];
    int max_right = INT_MIN;
    for(int i = 2; i < n; i++) max_right = max(max_right, a[i]);
    int itr = 1;

    int ans = 0;
    while(itr < n-1){
        int wall = min(max_left, max_left);
        if(wall > a[itr]) ans+=(wall-a[itr]);
        if(a[itr] > max_left) max_left = a[itr];
        if(a[itr+1] == max_right) max_right = get_max(a, itr+2, n-1);
        itr++;
    }
    return ans;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        cout << fun(a, n) << endl;
    }
}