#include <bits/stdc++.h>
using namespace std;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, target;
        cin>>n>>target;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        
        sort(a, a+n);
        
        set <pair < pair <int, int>, pair <int, int> > > st;
        for(int i = 0; i <= n-4; i++){
            for(int j = i+1; j <= n-3; j++){
                int csum = a[i]+a[j];
                csum = target-csum;
                int head = j+1, tail = n-1;
                
                while(tail > head){
                    int sum = a[tail]+a[head];
                    if(sum == csum){
                        pair < pair <int, int>, pair <int, int> > tmp;
                        tmp.first.first = a[i];
                        tmp.first.second = a[j];
                        tmp.second.first = a[head];
                        tmp.second.second = a[tail];
                        st.insert(tmp);
                        
                        
                        
                        tail--;
                        head++;
                    }
                    else if(sum > csum){
                        tail--;
                    }          
                    else{
                        head++;
                    }     
                }
            }
        }
        vector <pair <pair <int, int> , pair <int, int> > > ans(st.begin(), st.end());
        if(ans.size() == 0){
            cout << -1;
        }
        else{
            for(int i = 0; i < ans.size(); i++){
                cout << ans[i].first.first << " " << ans[i].first.second << " " << ans[i].second.first << " " << ans[i].second.second << " $";
            }
        }
        cout << endl;
        
    }
}