#include <bits/stdc++.h>
using namespace std;

struct job{
    int start;
    int end;
    int profit;
};

bool comp(job a, job b){
    if(a.start == b.start){
        return a.end < b.end;
    }
    else return a.start < b.start;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector <job> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].start >> v[i].end >> v[i].profit;
        }
        sort(v.begin(), v.end(), comp);
        int curr_time = 1;
        int i = 0; 
        int ans = 0;
        while(i < n){
            if(curr_time >= v[i].start && curr_time < v[i].end){
                ans += v[i].profit;
                curr_time += 1;
            }
            
            i++;
        }
        cout << ans << endl;


    }
}