#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,m,x;
        cin >> n >> m >> x;
        int a[n], b[m];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int j= 0; j < m; j++) cin >> b[j];
        int sum = 0;
        int cnt = 0;
        int i = 0;
        while(i < n && sum+a[i] <= x){
            sum += a[i];
            i++;
        }
        cnt = i;
        int j = 0;
        while(j < m && i >= 0){
            sum += b[j];
            while(sum > x && i > 0){
                i--;
                sum-=a[i];
                
            }
            j++;
            if(sum >= x)cnt = max(cnt, i+j);
        }
        cout << cnt << endl;
    }
}