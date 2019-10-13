#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        map <int, vector <int> > pos;
        int ma = INT_MIN;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            ma = max(a[i], ma);
            pos[a[i]].push_back(i);
        }
        int ans = 0;
        for(int i = 1; i < n; i++){
            int div = a[i];
            int tmp = 0;
            while(div <= ma+1){
                if(pos[div].size() != 0){
                    vector <int> v = pos[div];
                    int size = v.size();
                    int idx = 0;
                    while(idx < size){
                        if(v[idx] < i){
                            tmp++;
                        }
                        
                        idx++;
                    }
                }
                div += a[i];
            }
            ans = max(tmp, ans);
        }
        cout << ans << el;
    }
}