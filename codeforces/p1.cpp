#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool ok(int diff[], int n){
    int i = 0;
    bool f = 0;
    while(i < n){
        if(diff[i] != 0){
            if(f == 1) return 0;
            else{
                if(diff[i] <= 0) return 0;
                else{
                    int j = i;
                    int curr = diff[i];
                    while(j < n && curr == diff[j]){
                        j++;
                    }
                    i = j;
                    f = 1;
                }
            }
        }
        else i++;
    }
    return 1;
}

int main(){
    fastio
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int diff[n];
        for(int i = 0; i < n; i++) diff[i] = b[i]-a[i];
        if(ok(diff, n)) cout << "YES";
        else cout << "NO";
        cout << el;
    }
}