#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, m;
        cin>>n>>m;
        if(m == 0){
            cout << 0 << endl;
        }
        else{
            int num1 = 1;
            for(int i = n+1; i <= n+m-1; i++){
                num1 = (num1*i)%mod;
            }
            int num2 = 1;
            if(m > 1){
                for(int i = 1; i <= m-1; i++){
                    num2 = (num2*i)%mod;
                }
            }
            cout << num1/num2 << endl;
        }
    }
}