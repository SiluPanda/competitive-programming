#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x, k;
    cin >> x >> k;
    cout << min(x%k, abs(x%k - k)) << endl;
}