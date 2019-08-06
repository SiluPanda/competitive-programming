#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int fun(int l, int b){
    int area = l*b;
    for(int i = (int) sqrt(area) + 1; i>=1; i--){
        int ca = pow(i,2);
        if(((area%ca) == 0) && ((l%i) == 0) && ((b%i) == 0) ) return area/ca;
    }
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        int l, b;
        cin>>l>>b;
        cout << fun(l, b) << endl;
    }
}