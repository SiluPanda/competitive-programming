#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    int s = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }
    sort(a.begin(), a.end(), greater <int>());
    int c = 0;
    int curr = 0;
    for(int i = 0; i < n; i++){
        curr += a[i];
        c++;
        if(curr > s-curr) break;
    }
    cout << c << el;
}