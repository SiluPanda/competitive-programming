#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        mp[a[i]]++;
    }
    if(n%2 != 0){
        int p = 0;
        map <int, int>::iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            p+=(it->second);
            //cout << p << endl;
            if(p>(n/2)){
                cout << it->first << endl;
                break;
            }
        }
        
    }
    else{
        int p = 0;
        int num1, num2 = 0;
        map <int, int>::iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            p += (it->second);
            
            if(p >= (n/2)){
                num1 = it->first;
                if(p > (n/2)){
                    num2 = it->first;
                }
                else{
                    it++;
                    num2 = it->first;
                }
                break;
            }
        }
        
        cout << (num1+num2)/(double) 2 << endl;
    }
}