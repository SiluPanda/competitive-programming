#include <bits/stdc++.h>

using namespace std;


long long int bikeRacers(vector<vector<int>> bikers, vector<vector<int>> bikes, int k) {
    vector <long long int> d;
    for(int i = 0; i < bikers.size(); i++){
        long long int min_val = INT_MAX;
        for(int j = 0; j < bikes.size(); j++){
            long long int dist = (pow(bikers[i][0]-bikes[j][0], 2) + pow(bikers[i][1]- bikes[i][1] , 2));
            if(dist < min_val) min_val = dist;
        }
        d.push_back(min_val);
    }

    sort(d.begin(), d.end());
    for(int i = 0; i < d.size(); i++){
        cout<<d[i]<<endl;
    }
    long long int optimal = 0;
    for(int i = 0; i < k; i++){
        if(optimal < d[i]) optimal = d[i];
    }

    return optimal;
    


}

int main()
{
    
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> bikers;
    vector<vector<int>> bikes;
    for(int i = 0; i < n; i++){
        int x,y;
        cin>>x>>y;
        vector <int> row;
        row.push_back(x); row.push_back(y);
        bikers.push_back(row);
    }

    for(int i = 0; i < m; i++){
        int x,y;
        cin>>x>>y;
        vector <int> row;
        row.push_back(x); row.push_back(y);
        bikes.push_back(row);
    }

    cout<<bikeRacers(bikers, bikes, k)<<"\n";
}
