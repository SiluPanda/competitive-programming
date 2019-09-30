#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n; cin>>n;
        n = 2*n+2;
        map <int, int> freq;
        for(int i = 0; i < n; i++){
            int num;
            cin>>num;
            freq[num]++;
        }
        for(auto it = freq.begin(); it != freq.end(); it++){
            if(it->second == 1) cout << it->first << " ";
        }
        cout << el;
    }
}