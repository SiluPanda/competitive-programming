#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m;
    cin >> n >> k >> m;
    int sum = 0;
    for(int i = 0; i < n-1; i++) {
        int num;
        cin >> num;
        sum += num;
    }
    int req = m*n-sum;
    if(req <= 0){
        cout << 0 << endl;
    }
    else{
        if(req > k) cout << -1 << endl;
        else{
            cout << req << endl;
        }
    }
}