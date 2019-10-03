#include <bits/stdc++.h>
using namespace std;

bool comp(pair <string, int> a, pair <string, int> b){
    if(a.second == b.second){
        return a.first > b.first;
    }
    return a.second > b.second;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector < pair <string, int> > v;
        for(int i = 0; i < n; i++){
            pair <string, int> p;
            cin>>p.first>>p.second;
            v.push_back(p);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            cout << v[i].first << " " << v[i].second << " ";
        }
        cout << endl;

    }
}