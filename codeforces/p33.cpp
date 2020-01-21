#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool ok(int year){
    string y = to_string(year);
    set <char> st(y.begin(), y.end());
    return st.size() == y.length();
}

int main(){
    int n;
    cin >> n;
    n++;
    while(1){
        if(ok(n++)){
            cout << n-1 << el;
            break;
        }
    }
}