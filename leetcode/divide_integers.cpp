#include <bits/stdc++.h>
using namespace std;
#define ll long long long long
#define ull unsigned long long long long
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"


long long divide(long long dividend, long long divisor){
    long long sign = -1;
    if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)){
        sign = 1;
    }
    dividend = abs(dividend);
    divisor = abs(divisor);
    long long ret = 0, add = divisor;
    while(divisor <= dividend){
        divisor += add;
        ret++;
    }
    return ret * sign;
    
}

int main(){
    long long dividend, divisor;
    cin >> dividend >> divisor;
    cout << divide(dividend, divisor) << el;
}