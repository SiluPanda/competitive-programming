#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool canReach(vector<int>& arr, int start) {
    int n = arr.size();
    vector < vector <int > > graph(n);
    for(int i = 0; i < n; i++){
        int range = arr[i];
        if((i + range) < n && (i + range) >= 0) graph[i].push_back(i + range);
        if((i - range) >= 0 && (i - range) >= 0) graph[i].push_back(i - range);
    }
    int d = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            d = i;
            break;
        }
    }
    if(start == d) return true;
    vector <bool> visited(n, false);
    queue <int> Q;
    Q.push(start);
    visited[start] = true;
    while(!Q.empty()){
        int curr = Q.front();
        Q.pop();
        for(int i = 0; i < graph[curr].size(); i++){
            if(graph[curr][i] == d) return true;
            if(visited[graph[curr][i]] == false){
                visited[graph[curr][i]] = true;
                Q.push(graph[curr][i]);
            }
    
        }
        
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int start;
    cin >> start;
    cout << canReach(arr, start) << endl;
}