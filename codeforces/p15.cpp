#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int n;
    cin >> n;
    vector <int> sum(3,0);
    while(n--){
        for(int i = 0; i < 3; i++){
            int num;
            cin >> num;
            sum[i]+=num;
        }
    }
    bool flag = false;
    for(auto x : sum) {
        if(x != 0){
            cout << "NO";
            flag = true;
            break;
        }
    }
    if(!flag) cout << "YES";
    cout << el;
    
}