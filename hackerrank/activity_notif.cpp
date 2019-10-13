#include <bits/stdc++.h>
using namespace std;

double get_med(map <int, int> mp, int n){
    if(n%2 != 0){
        int p = 0;
        map <int, int>::iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            p += (it->second);
            if(p > (n/2)){
                return (double) it->first;
            }
        }
    }
    else{
        int num1, num2;
        int p = 0;
        map <int, int>::iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            p += (it->second);
            if(p >= (n/2)){
                num1 = it->first;
                if(p >(n/2)){
                    num2 = it->first;
                }
                else{
                    it++;
                    num2 = it->first;
                }
                break;
            }
            
        }
        return ((num1+num2)/(double) 2);
    }
}

int main(){
    int n, days;
    cin >> n >> days;
    int exp[n];
    for(int i = 0; i < n; i++){
        cin >> exp[i];
    }
    int ans = 0;
    map <int, int> mp;
    for(int i = 0; i < days; i++){
        mp[exp[i]]++;
    }
    
    for(int i = days; i < n; i++){
        if(exp[i] >= 2*get_med(mp, days)){
           
            ans++;
        }
        mp[exp[i]]++;
        mp[exp[i-days]]--;
    }
    cout << ans << endl;
}