#include <bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> a, pair <int, int> b){
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    vector <pair <int, int> > v(n);
    for(int i = 0; i < n; i++){
        pair <int, int> t;
        cin>>t.first;
        t.second = i+1;
        v[i] = t;
    }
    sort(v.begin(), v.end(), comp);
    for(auto x: v){
        cout << x.second << " ";
    }
    cout << endl;
}