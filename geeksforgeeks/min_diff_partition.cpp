#include <bits/stdc++.h>
using namespace std;

int diff(int a[], int n){
    if(n == 1) return a[0];
    if(n == 2) return abs(a[1]-a[0]);
    sort(a, a+n);
    int sum1 = 0, sum2 = 0;
    int itr = 0;
    if(n%2 == 0){
        while(itr <= (n/2)-1){
            if(itr%2 == 0){
                sum1 += (a[itr] + a[n-1-itr]);
            }
            else sum2 += (a[itr] + a[n-1-itr]);
            itr++;
        }
        return abs(sum1-sum2);
    }
    else{
        while(itr <= (n-2)/2){
            if(itr%2 == 0) sum1 += (a[itr]+a[n-1-itr]);
            else sum2 += (a[itr] + a[n-itr-1]);
            itr++;

        }
        if(sum1 <= sum2) sum1 += a[n/2];
        else sum2 += a[n/2];
        return abs(sum1-sum2);
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        cout << diff(a, n) << endl;
    

    }
}

