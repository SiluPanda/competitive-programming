#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll special(string s, ll n){
    vector <ll> same;
    int i = 1;
    ll curr = 1;
    ll ret = 0;
    while(true){
        if(s[i] == s[i-1]){
            curr++;
        }
        else if(s[i] != s[i-1] ){
            same.push_back(curr);
            curr = 1;
        }
        if(i == n-1){
            same.push_back(curr);
            break;
        }
        i+=1;
        
    }
    //part1
    for(ll i = 0; i < same.size(); i++){
        ret += (same[i]*(same[i]+1))/2;
    }
   
    //part2
    ll mid = 1;
    while(mid < n-1){
        if(s[mid-1] != s[mid] && s[mid-1] == s[mid+1]){
            ll i = mid-1, j = mid+1;
            while(s[i] == s[j] && s[i] == s[mid-1] && i >= 0 && j < n){
                ret++;
                i--;
                j++;
            }
            
            
        }
        mid++;
    }
    return ret;
}

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    cout << special(s, n) << endl;
}