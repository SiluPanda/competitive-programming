#include <bits/stdc++.h>
using namespace std;

int left(int a[], int n, int pos){
    int ans = 0;
    int i = pos-1;
    int x = a[pos];
    while(i >= 0){
        if(a[i] >= x){
            ans++;
        }
        else break;
        i--;
    }
    return ans;
}

int right(int a[], int n, int pos){
    int ans = 0;
    int i = pos+1;
    int x = a[pos];
    while(i < n){
        if(a[i] >= x){
            ans++;
        }
        else break;
        i++;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    int ma = INT_MIN;
    for(int i = 0; i < n; i++){
        //cout << "left is: " << left(a, n, i) << " right is: " << right(a, n, i) << endl;
        ma = max(ma, (left(a, n, i)+1)*a[i]);
        ma = max(ma, (right(a, n, i)+1)*a[i]);
    }
    cout << ma << endl;

    
    
}