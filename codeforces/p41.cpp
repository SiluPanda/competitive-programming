#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int c = 0;
    for(int i = 0; i < n; i++){
        int pp;
        cin >> pp;
        c += (pp > h) + 1;
    }
    cout << c << endl;
}