#include <bits/stdc++.h>
using namespace std;

bool isit(int a[], int n, int k){
    if(n%2 != 0) return false;
    map <int, int> freq;
    bool ok = 0;
    for(int i = 0; i < n; i++){
        a[i] = a[i]%k;
        if(a[i]!=0) ok = 1;
        freq[a[i]]++;
    }
    if(ok == 0){
        return true;
    }
    for(auto it = freq.begin(); it != freq.end(); it++){
        int rem = it->first;
        if(freq.find(k-rem) == freq.end()){
            return false;
        }
        if(freq[rem] != freq[k-rem]){
            return false;
        }

    }
    return true;


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
        int target;
        cin>>target;

        if(isit(a, n, target)){
            cout << "True" << endl;

        }
        else{
            cout << "False" << endl;
        }

    }
}