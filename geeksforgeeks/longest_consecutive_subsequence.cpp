#include <bits/stdc++.h>
using namespace std;

int longest(int a[], int n){
    sort(a, a+n);
    int ans = 1;
    int i = 1;
    int curr = 1;
    while(i < n){
        if(a[i] == a[i-1]+1){
            curr++;
        }
        else{
            ans = max(ans, curr);
            curr = 1;
        }
        i++;
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
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        cout << longest(a, n) << endl;
    }
}