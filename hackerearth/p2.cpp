#include <bits/stdc++.h>
using namespace std;

int main(){
    long T;
    cin >> T;
    long ans = 0;
    while(T--){
        double w,h;
        cin >> w >> h;
        if(w<h) swap(w,h);
        double ratio = w/h;
        
        ans += ((ratio >= 1.6) && (ratio <= 1.7));   
    }
    cout << ans << "\n";
}