#include <bits/stdc++.h>
using namespace std;

#define int long long

int min_needed(int arr[], int dep[], int n){
    sort(arr, arr+n);
    sort(dep, dep+n);
    int i = 0, j = 0;
    int ret = 0, needed = 0;
    while(i < n && j < n){
        if(arr[i] < dep[j]){
            needed++;
            i++;
            ret = max(ret, needed);
        }
        else{
            needed--;
            j++;
        }
    }
    return ret;
}

bool is_overlap(pair <int, int> a, pair <int, int> b){
    return !(a.first >= b.second || a.second <= b.first);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        int arr[n], dep[n];
        pair <int, int> A[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i] >> dep[i];
            A[i].first = arr[i];
            A[i].second = dep[i];
        }
        cout << "Case #" << t << ": ";
        if(min_needed(arr, dep, n) > 2){
            cout << "IMPOSSIBLE" << endl;
        }
        else{
            vector <char> ans(n, '#');
            vector <pair <int, int>> so_far;
            for(int i = 0; i < n; i++){
                bool hasover = false;
                for(int j = 0; j < so_far.size(); j++){
                    if(is_overlap(A[i], so_far[j])){
                        hasover = true;
                        break;
                    }
                }
                if(hasover){
                    ans[i] = 'J';
                }
                else{
                    ans[i] = 'C';
                    so_far.push_back(A[i]);
                }
            }
            string ppp = "";
            for(auto x : ans){
                ppp += x;
            }
            cout << ppp << endl;

        }
    }
    
}