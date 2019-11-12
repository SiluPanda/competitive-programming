#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll partition(ll a[], ll low, ll high){
    ll pivot = a[high];
    ll i = low-1;
    for(ll j = low; j < high; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i], a[j]);
            
        }
    }
    swap(a[i+1], a[high]);
    return i+1;
}

void quick_sort(ll a[], ll low, ll high){
    if(low < high){
        ll pivot = partition(a, low, high);
        quick_sort(a, low, pivot-1);
        quick_sort(a, pivot+1, high);
    }
}

int main(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    quick_sort(a, 0, n-1);
    for(ll i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}