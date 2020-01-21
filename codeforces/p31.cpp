#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define el "\n"

int main(){
    int a, b;
    cin >> a >> b;
    int c = 0;
    while(true){
        if(a > b){
            cout << c << el;
            break;
        }
        else{
            a*=3;
            b*=2;
            c++;
        }
    }
}