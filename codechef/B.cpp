#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tt;
    cin >> tt;
    while(tt--){
        long long a, b;
        cin >> a >> b;
        a--;
        b--;
        long long diff = abs(a-b);
        set <long long> F;
        for(long long i = 1; i <= sqrt(diff); i++){
            if(diff%i == 0){
                F.insert(i);
                F.insert(diff/i);
            }
        }
        cout << F.size() << endl;
    }
}