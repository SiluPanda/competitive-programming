#include <bits/stdc++.h>
using namespace std;

int merge(int a[], int low, int mid, int high){
    int c[high-low+1] = {0};
    int i = low, j = mid+1, k = 0;
    int count = 0;
    while(i <= mid && j <= high){
        if(a[i] < a[j]){
            c[k++] = a[i++];

        }
        else{
            c[k++] = a[j++];
            count++;
        }
    }
    while(i <= mid) c[k++] = a[i++];
    while(j <= high) c[k++] = a[j++];
    return count;
}

int fun(int a[], int low, int high){
    int ans = 0;
    if(high > low){
        int mid = (low+high)/2;
        fun(a, low, mid);
        fun(a, mid+1, high);
        ans += merge(a, low, mid, high);
    }
    return ans;
}


int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << fun(a, 0, n-1)*2 << endl;
    }
}