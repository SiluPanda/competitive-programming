#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    vector <char> a(n);
    for(int i = 0; i < s.length(); i++){
        a[i] = s[i];
    }
    for(int time = 0; time < t; time++){
        int i = 0;
        while(i < n-1){
            if(a[i] == 'B' && a[i+1] == 'G'){
                swap(a[i], a[i+1]);
                i++;
            }
            i++;
        }
    }
    string ret = "";
    for(auto x : a) ret += x;
    cout << ret << el;
}