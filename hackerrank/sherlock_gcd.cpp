#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return __gcd(a, b);
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int curr_gcd = 0;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            curr_gcd = gcd(curr_gcd, num);
        }
        if(curr_gcd == 1){
            cout << "YES";
        }
        else cout << "NO";
        cout << endl;
    }
}