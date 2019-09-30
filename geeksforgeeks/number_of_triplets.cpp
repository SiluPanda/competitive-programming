#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tt; cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
            a[i] = pow(a[i], 2);
        }
        sort(a, a+n, greater <int>());
        bool found = false;
        for(int i = 0; i < n-2; i++){
            int csum = a[i];
            int head = i+1, tail = n-1;
            while(head < tail){
                int sum = a[head]+a[tail];
                if(csum == sum){
                    cout << "Yes" << el;
                    found = true;
                    break;
                }
                else if(csum > sum){
                    tail--;
                }
                else head++;
            }
        }
        if(!found){
            cout << "No" << el;
        }
        
    }
}