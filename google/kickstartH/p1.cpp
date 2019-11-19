#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio;
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        priority_queue <int, vector <int>, greater <int> > F;
        cout << "Case #" << t << ": ";
        for(int i = 0; i < n; i++){
            F.push(a[i]);
            while(true){
                if(F.size() > F.top()){
                    F.pop();
                }
                else break;
            }
            cout << F.size() << " ";
        }
        cout << el;
    }
}