#include <bits/stdc++.h>
using namespace std;


int main(){
    int i = 7;
    int ans = 0;
    while(i <= 95){
        ans += i*(i+4);
        i+=4;
    }
    cout << ans << endl;
}