#include <bits/stdc++.h>
using namespace std;

int solve(int s, int a, int b, int c){
    if(s >= a+b+c){
        return 1;
    }
    if(s >= a+b){
        return 2;
    }
    if(s >= b+c){
        return 2;
    }
    return 3;

}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int s,a,b,c;
        cin >> s >> a >> b >> c;
        cout << solve(s, a, b, c) << endl;
    }
}