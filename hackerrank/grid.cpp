#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main(){
    LL r, c;
    cin>>r>>c;
    r--; c--;
    if(r%2 == 0){
        cout << 5*r + 2*c << endl;
    }
    else{
        r--;
        cout << 5*r + 2*c + 1 << endl;
    }
}