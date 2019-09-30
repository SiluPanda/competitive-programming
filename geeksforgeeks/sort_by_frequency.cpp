#include <bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> a, pair <int, int> b){
    if(a.second == b.second){
        return a.first <= b.first;
    }
    return a.second > b.second;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        unordered_map <int, int> freq;
        for(int i = 0; i < n; i++){
            int num;
            cin>>num;
            freq[num]++;
        }
        vector <pair <int, int> > v;
        for(auto it = freq.begin(); it != freq.end(); it++){
            pair <int, int> p;
            p.first = it->first;
            p.second = it->second;
            v.push_back(p);
        }
        sort(v.begin(), v.end(), comp);
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[i].second; j++){
                cout << v[i].first << " ";
            }
        }
        cout << endl;
    }
}