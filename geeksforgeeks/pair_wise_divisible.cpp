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
        int n;
        cin >> n;
        int a[n];
        unordered_map <int, int> F;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int k;
        cin >> k;
        for(int i = 0; i < n; i++) F[a[i]%k]++;
        bool isok = 1;
        for(auto i = F.begin(); i!=F.end(); i++){
            if(i->first != 0 && i->second != F[k-i->first]) {
                isok = 0;
                break;
            }
            else if(i->first == 0 && i->second%2 != 0){
                isok = 0;
                break;
            }
        }
        if(isok) cout << "True";
        else cout << "False";
        cout << el;
    }
}