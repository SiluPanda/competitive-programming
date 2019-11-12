#include <bits/stdc++.h>
using namespace std;

vector <long> helper(long n){
    vector <long> ret;
    while(n>0){
        ret.push_back(n%2);
        n/=2;
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long low, high;
        cin >> low >> high;
        long low_len = log2(low), high_len = log2(high);
        if(low_len == high_len){
              vector <long> v1 = helper(low), v2 = helper(high);
              long i = 0, ans = 0;
            //   for(long i = 0; i <= low_len; i++) cout << v1[i] << " ";
            //   cout << endl;
            //   for(long i = 0; i <= low_len; i++) cout << v2[i] << " ";
            //   cout << endl;
              while(v1[i] == v2[i]) ans+=v1[i]*(1L<<(low_len-i)), i++;
              cout << ans << endl;
        }
        else cout << 0 << endl;
    }
}