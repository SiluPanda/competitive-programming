#include <bits/stdc++.h>
using namespace std;

int main(){
    int b[10001];
    int n;
    cin >> n;
    int a[n];
    memset(b, 0, sizeof(b));
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        b[num] = 1;
    }
    vector <int> ans;
    for(int i = 0; i <= 100; i++){
        bool isthere = true;
        for(int j = 0; j < n; j++){
            if(!b[a[j] + i]){
                isthere = false;
            }
        }
        if(isthere) ans.push_back(i);
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}