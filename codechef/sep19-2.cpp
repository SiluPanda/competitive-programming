#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int fun(int a[], int n, int k){
    if(n == k) return 1;
    map <int, int> freq;
    for(int i = 0; i < n; i++){
        freq[a[i]]++;
    }
    int nums = 0;
    map <int, int>::iterator it = freq.begin();
    while(num < k){
        num += (it->second);
        it++;
    }
    it--;
    num-=it->second;
    

}

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        
    }
}