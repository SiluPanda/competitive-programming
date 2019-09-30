#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        int it = 0;
        bool found = false;
        while(it < n-1){
            if(a[it] < a[it+1]){
                found = true;
                cout << "(" << it << " ";
                while(a[it] < a[it+1] && it < n-1) it++;
                cout << it << ")" << " ";
                it++;
            }
            else it++;
        }
        if(!found) cout << "No Profit";
        cout << endl;
    }
}