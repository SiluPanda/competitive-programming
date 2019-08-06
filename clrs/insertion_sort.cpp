#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector <ll> insertion_sort(vector <ll> v){
    ll size = v.size();
    for(ll j = 1; j < size; j++){
        ll key = v[j];
        ll i = j-1;
        while(i > 0 && v[i] > key){
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = key;


    }

    return v;
}

int main(){
    cout << "Implementation of insertion sort as in clrs" << endl;
    ll n;
    cout << "Number of elements" << endl;
    cin>>n;
    cout << "elements" << endl;
    vector <ll> v(n);
    for(ll i = 0; i < n; i++){
        cin>>v[i];
    }
    vector <ll> ans = insertion_sort(v);
    for(ll i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    
}
