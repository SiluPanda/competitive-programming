#include <bits/stdc++.h>
using namespace std;

bool equal(int x, int y){
    return abs(x) == abs(y);
}

int get_num(int n, int x, int y, vector < vector <int> > obs){
    x--;
    y = n-y;
    int size = obs.size();
    //cout << "x is: " << x << "y is: " << y << endl;
    for(int i = 0; i < size; i++){
        swap(obs[i][0], obs[i][1]);
        //cout << "Before: " << obs[i][0] << " " << obs[i][1] << endl;
        obs[i][0]--;
        obs[i][1] = n-obs[i][1];
        //cout << "Midway: " << obs[i][0] << " " << obs[i][1] << endl;
        obs[i][0]-=x;
        obs[i][1] = y-obs[i][1];
        //cout << "after: " << obs[i][0] << " " << obs[i][1] << endl;
    }
    int ans = 0;
    //case north
    int mini = y;
    for(int i = 0; i < size; i++){
        if(obs[i][0] == 0 && obs[i][1] > 0){
            mini = min(mini, obs[i][1]-1);
        }
    }
    //cout << mini << endl;
    ans += mini;
    //case south;
    mini = n-1-y;
    for(int i = 0; i < size; i++){
        if(obs[i][0] == 0 && obs[i][1] < 0){
            mini = min(0-obs[i][1]-1, mini);
        }
    }
    //cout << mini << endl;
    ans += mini;
    //case east;
    mini = x;
    for(int i = 0; i < size; i++){
        if(obs[i][1] == 0 && obs[i][0] < 0){
            mini = min(0-obs[i][0]-1, mini);
        }
    }
    ans += mini;
    //case west
    mini = n-1-x;
    for(int i = 0; i < size; i++){
        if(obs[i][1] == 0 && obs[i][0] > 0){
            mini = min(obs[i][0]-1, mini);
        }
    }
    //cout << mini << endl;
    ans += mini;
    //case north west
    mini = min(n-1-x, y);
    for(int i = 0; i < size; i++){
        if(equal(obs[i][0], obs[i][1]) && obs[i][0] > 0 && obs[i][1] > 0){
            mini = min(obs[i][0]-1, mini);
        }
    }
    //cout << mini << endl;
    ans += mini;
    //case north east
    mini = min(y, x);
    for(int i = 0; i < size; i++){
        if(equal(obs[i][0], obs[i][1]) && obs[i][0] < 0 && obs[i][1] > 0){
            mini = min(obs[i][1]-1, mini);
        }
    }
   // cout << mini << endl;
    ans += mini;
    // case south west
    mini = min(n-1-x, n-1-y);
    for(int i = 0; i < size; i++){
        if(equal(obs[i][1], obs[i][0]) && obs[i][0] > 0 && obs[i][1] < 0){
            mini = min(obs[i][0]-1, mini);
        }
    }
   // cout << mini << endl;
    ans += mini;
    // case south east
    mini = min(x, n-1-y);
    for(int i = 0; i < size; i++){
        if(equal(obs[i][0], obs[i][1]) && obs[i][0] < 0 && obs[i][1] < 0){
            mini = min(0-obs[i][0]-1, mini);
        }
    }
    //cout << mini << endl;
    ans += mini;

    return ans;

}

int main(){
    int n, k;
    cin >> n >> k;
    int x, y;
    cin >> x >> y;
    vector <vector <int> > obs(k);
    for(int i = 0; i < k; i++){
        vector <int> p;
        int x1, y1;
        cin >> x1 >> y1;
        p = {x1, y1};
        obs[i] = p;
    }
    swap(x, y);
    cout << get_num(n, x, y, obs) << endl;
}