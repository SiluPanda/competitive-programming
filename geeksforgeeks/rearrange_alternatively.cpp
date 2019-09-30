#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long n;
        cin>>n;
        long a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        long head = 0, tail = n-1;
        bool sig = 0;
        while(head <= tail){
            if(sig == 0){
                cout << a[tail] << " ";
                tail--;
                sig = 1;
            }
            else{
                cout << a[head] << " ";
                head++;
                sig = 0;
            }
        }
        cout << endl;
    }
}