#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

float getp(int n, int m){
    return n+m-1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >> m;
        cout << getp(n, m) << "\n";
    }
    

}