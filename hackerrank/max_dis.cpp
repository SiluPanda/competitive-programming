#include <bits/stdc++.h>
using namespace std;

double solve(vector<vector<int>> coordinates) {
    vector <int> xaxis, yaxis;
    for(int i = 0; i < coordinates.size(); i++){
        if(coordinates[i][0] == 0){
            yaxis.push_back(coordinates[i][1]);
        }
        else xaxis.push_back(coordinates[i][0]);
    }
    double x1 = xaxis[0], x2 = xaxis[0], y1 = yaxis[0], y2 = yaxis[0]
    for(int i = 0; i < xaxis.size(); i++){
        x1 = max(x1, (double) xaxis[i]);
        x2 = min(x2, (double) xaxis[i]);
    }
    for(int i = 0; i < yaxis.size(); i++){
        y1 = max(y1, (double) yaxis[i]);
        y2 = min(y2, (double) yaxis[i]);
    }
    //double x1 = xaxis.front(), x2 = xaxis.back(), y1 = yaxis.front(), y2 = yaxis.back();
    double d1 = abs(x1-x2);
    double d2 = abs(y1-y2);
    double d3 = max(abs(sqrt(pow(x1, 2)+pow(y1,2))) , abs(sqrt(pow(x1, 2)+pow(y2, 2))));
    double d4 = max(abs(sqrt(pow(x2, 2)+pow(y1,2))) , abs(sqrt(pow(x2, 2)+pow(y2, 2))));
    //cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl;
    return max(d1, max(d2, max(d3, d4)));

}

int main(){
    int n;
    cin >> n;
    vector < vector <int> > v;
    for(int i = 0; i < n; i++){
        vector <int> tmp(2);
        cin >> tmp[0] >> tmp[1];
        v.push_back(tmp);
    }
    cout << fixed << setprecision(6) << solve(v) << endl;
}