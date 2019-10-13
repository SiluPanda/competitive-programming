#include <bits/stdc++.h>
using namespace std;

struct event{
    int s;
    int e;

};

bool comp(event a, event b){
    return a.e < b.e;
}

int findit(vector <event> v, event pp){
    for(int i = 0; i < v.size(); i++){
        if(pp.e == v[i].e && pp.s == v[i].s){
            return i+1;
        }
    }
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n; 
        cin>>n;
        vector <event> v(n);
        event pp;
        for(int i = 0; i < n; i++){
            v[i] = pp;
        }
        for(int i = 0; i < n; i++){
            cin>>v[i].s;
        }
        for(int i = 0; i < n; i++){
            cin>>v[i].e;
        }
        vector <event> dup = v;
        sort(v.begin(), v.end(), comp);
        vector <event> ans;
        ans.push_back(v[0]);
        int curr = v[0].e;
        int i = 1;
        while(i < n){
            if(curr <= v[i].s){
                ans.push_back(v[i]);
                curr = v[i].e;
            }
            i++;
        }
        for(int i = 0; i < ans.size(); i++){
            cout << findit(dup, ans[i]) << " ";
        }
        cout << endl;
        


    }
}