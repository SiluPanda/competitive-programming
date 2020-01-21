#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tt;
    cin >> tt;
    int pos = 0, neg = 0;
    while(tt--){
        string s;
        cin >> s;
        
        if(s.find('-') != string::npos){
            neg++;
        }
        else pos++;

    }
    cout << pos-neg << el;

}