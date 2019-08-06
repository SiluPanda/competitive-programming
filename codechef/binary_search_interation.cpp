#include <bits/stdc++.h>
using namespace std;

int bin_itr(int a[], int low, int high, int x){
    while(low <= high){
        int mid = low + (high-low)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] < x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        
    }
    return -1;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout << bin_itr(a, 0, n-1, 5) << endl;
}