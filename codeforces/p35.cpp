#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int maxi(int a, int b, int c){
    int x1 = a*b*c;
    int x2 = (a+b)*c;
    int x3 = a*(b+c);
    int x4 = a+b+c;
    return max(x1, max(x2, max(x3, x4)));
    
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << maxi(a, b, c) << el;
}