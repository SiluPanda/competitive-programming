#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    stack <pair <int, int> > s;
    s.push(make_pair(0,a[0]));
    unordered_map <int, int> M;
    for(int i = 1; i < n; i++){
        if(s.empty()){
            s.push(make_pair(i, a[i]));
        }
        while(s.empty() == false && s.top().second > a[i]){
            M[s.top().first] = a[i];
            s.pop();
        }
        s.push(make_pair(i, a[i]));

    }
    while(!s.empty()){
        M[s.top().first] = -1;
        s.pop();
    }
    for(int i = 0; i < n; i++){
        cout << M[i] << endl;
    }

}