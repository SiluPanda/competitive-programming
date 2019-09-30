#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

//Boyer Moore Voting Algorithm
int majorty(int a[], int n){
    int curr = a[0];
    int count = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == curr){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            curr = a[i];
            count = 1;
        }
    }
    return curr;
}
int validate(int a[], int n, int curr){
    int c = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == curr){
            c++;
        }
    }
    if(c > n/2){
        return curr;
    }
    return -1;
}

int main(){
    fastio
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        int a[n];
        for(int i = 0;i < n; i++){
            cin>>a[i];
        }
        cout << validate(a, n, majorty(a, n)) << el;
        
        //unordered_map <int, int> mp;
        // for(int i = 0; i < n; i++){
        //     int num;
        //     cin>>num;
        //     mp[num]++;
        // }

    //     bool found = 0;
    //     for(auto it = mp.begin(); it != mp.end(); it++){
    //         if(it->second > (n/2)){
    //             cout << it->first << el;
    //             found = 1;
    //             break;
    //         }
    //     }
    //     if(!found) cout << -1 << el;
    }
}

