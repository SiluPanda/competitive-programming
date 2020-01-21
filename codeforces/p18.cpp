#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    vector <int> a = {4,7,47,74,44,77,444,474,477,744,747,777,447,774};
    int n;
    cin >> n;
    bool flag = 0;
    for(int i = 0; i < a.size(); i++){
        if(n%a[i] == 0){
            cout << "YES";
            flag = 1;
            break;
        }
    }
    if(!flag){
        cout << "NO";
    }
    cout << el;

}