#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void merge(ll a[], ll low, ll mid, ll high){
    ll c[high-low+1] = {0};
    ll i = low, j = mid+1, k = 0;
    while(i <= mid && j <= high){
        if(a[i] < a[j]){
            c[k++] = a[i++];
        }
        else c[k++] = a[j++];
    }
    while(i <= mid) c[k++] = a[i++];
    while(j <= high) c[k++] = a[j++];
    for(ll i = low; i <= high; i++) a[i] = c[i-low];

}

void merge_sort(ll a[], ll low, ll high){
    if(low < high){
        ll mid = (low+high)/2;
        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

int main(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    merge_sort(a, 0, n-1);
    for(ll i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}