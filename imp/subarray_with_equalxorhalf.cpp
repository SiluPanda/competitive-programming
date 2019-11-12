#include <bits/stdc++.h>
using namespace std;

//contigious subsrrays whose one half xor is equal rto other half
//main idea: whole xor of subarray be 0.
int num_sub_array(int a[], int n){
    int prefix[n+1];
    prefix[0] = 0;
    for(int i = 0; i < n; i++){
        prefix[i+1] = a[i]^prefix[i];
    }
    unordered_map <int, int> M;
    for(int i = 0; i < n+1; i++){
        M[prefix[i]]++;
    }
    int ret = 0;
    for(auto i = M.begin(); i != M.end(); i++){
        ret += (i->second * (i->second-1))/2;
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << num_sub_array(a, n) << endl;
}