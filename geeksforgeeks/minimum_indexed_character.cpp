#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        string a, b;
        cin>>a>>b;
        set <char> st;
        for(int i = 0; i < b.length(); i++){
            st.insert(b[i]);
        }
        bool f = 0;
        for(int i = 0; i < a.length(); i++){
            if(st.find(a[i]) != st.end()){
                cout << a[i] << el;
                f = 1;
                break;
            }
        }
        if(!f) cout << '$'   << el;
    }
}