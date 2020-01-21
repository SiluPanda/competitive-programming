#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int, int> penal, verd;
    int n, m;
    cin >> n >> m;
    while(m--){
        int p; cin >> p;
        string verdict;
        cin >> verdict;
        if(verdict == "WA"){
            if(!verd[p]){
                penal[p]++;
            }
        }
        else verd[p] = 1;
    }
    int score = 0, penalty = 0;
    for(auto it = penal.begin(); it != penal.end(); it++) if(verd[it->first]) penalty += it->second;
    for(auto it = verd.begin(); it != verd.end(); it++) score += it->second;
    cout << score << " " << penalty << endl;

}