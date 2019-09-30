#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int na, nb;
        cin>>na>>nb;
        int a[na], b[1001] = {0}, suma = 0, sumb = 0;
        for(int i = 0; i < na; i++){
            cin>>a[i];
            suma += a[i];
        }
        for(int i = 0; i < nb; i++){
            int num;
            cin>>num;
            b[num] = 1;
            sumb += num;
        }
        int diff = suma-sumb;
        bool ok = 0;
        if(diff%2 == 0){
            for(int i = 0; i < na; i++){
                if((a[i]-diff/2)>0 && b[a[i]-diff/2]){
                    ok = 1;
                    break;
                }
            }
        }
        if(ok) cout << 1;
        else cout << -1;
        cout << endl;
    
    }

    
}