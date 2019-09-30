#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int na, nb, nc;
        cin>>na>>nb>>nc;
        int a[na], b[nb], c[nc];
        for(int i = 0; i < na; i++){
            cin>>a[i];
        }
        for(int i = 0; i < nb; i++){
            cin>>b[i];
        }
        for(int i = 0; i < nc; i++){
            cin>>c[i];
        }
        int i = 0, j = 0, k = 0;
        bool ok = 0;
        map <int, bool> mp;
        while(i < na && j < nb && k < nc){
            if(a[i] > b[j]){
                j++;
            }
            else if(b[j] > c[k]){
                k++;
            }
            else if(c[k] > a[i]){
                i++;
            }
            else{
                if(mp.find(a[i]) == mp.end()){
                    cout << a[i] << " ";
                }
                mp[a[i]] = 1;
                i++; j++; k++;
                ok = 1;
            }
        }
        if(!ok) cout << -1;
        cout << endl;
    }
}