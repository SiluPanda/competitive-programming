#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        int x;
        cin >> x;
        int i = 0, j = m-1;
        int count = 0;
        while(i < n && j>=0){
            int sum = a[i]+b[j];
            if(sum == x){
                count++;
                i++;
            }
            else if(sum < x) i++;
            else j--;
        }
        cout << count << endl;
    }
}