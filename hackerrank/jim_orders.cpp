#include <bits/stdc++.h>
using namespace std;

struct order{
    int no;
    int time;
};

bool comp(order a, order b){
    if(b.time == a.time){
        return a.no < b.no;
    }
    return a.time < b.time;
}

int main(){
    int n;
    cin >> n;
    vector <order> v(n);
    for(int i = 0; i < n; i++){
        order tmp;
        int p,q;
        cin >> p >> q;
        tmp.no = i+1;
        tmp.time = p+q;
        v[i] = tmp;
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < n; i++) cout << v[i].no << " ";
    cout << endl;
}