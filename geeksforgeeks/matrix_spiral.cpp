#include <bits/stdc++.h>
using namespace std;

void to_right(vector <vector <int> > v, int s, int e, int row){
    for(int i = s; i <= e; i++){
        cout << v[row][i] << " ";
    }
}

void to_left(vector <vector <int> > v, int s, int e, int row){
    for(int i = e; i >= s; i--){
        cout << v[row][i] << " ";
    }
}

void to_up(vector <vector <int> > v, int s, int e, int col){
    for(int i = e; i >= s; i--){
        cout << v[i][col] << " ";
    }
}

void to_down(vector < vector <int> > v, int s, int e, int col){
    for(int i = s; i <= e; i++){
        cout << v[i][col] << " ";
    }
}

int main(){
    int tt; cin>>tt;
    while(tt--){
        int n, m;
        cin>>n>>m;
        vector <vector <int> > v(n);
        for(int i = 0; i < n; i++){
            vector <int> tmp(m);
            for(int j = 0; j < m; j++){
                cin>>tmp[j];
            }
            v[i] = tmp;
        }


    }
}