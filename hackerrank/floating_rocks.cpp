#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long a = abs(x1-x2);
        long b = abs(y1-y2);
        
        cout << __gcd(a, b)-1 << endl;
    }
}