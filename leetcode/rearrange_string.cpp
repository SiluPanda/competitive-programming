#include <bits/stdc++.h>
using namespace std;

#define ll long long int

class solution{
    public:
    string reorganizeString(string S){
        map <char, int> F;
        for(auto x : S){
            F[x]++;
        }
        vector <pair <int, char> > all;
        for(auto it = F.rbegin(); it != F.rend(); it++){
            all.push_back(make_pair(it->second, it->first));
        }
        priority_queue <pair <int, char> > Q;
        for(auto x : all){
            Q.push(x);
        }
        string ret = "";
        while(!Q.empty()){
            if(Q.size() == 1){
                if(Q.top().first > 1){
                    return "";
                }
                else{
                    ret += Q.top().second;
                    return ret;
                }
            }
            pair <int, char> fir = Q.top();
            Q.pop();
            pair <int, char> sec = Q.top();
            Q.pop();
            for(int i = 0; i < sec.first; i++){
                ret += fir.second;
                ret += sec.second;
            }
            fir.first -= sec.first;
            if(fir.first > 0){
                Q.push(make_pair(fir.first, fir.second));
            }

        }
        return ret;
    }
};

int main(){
    solution sol;
    string S;
    cin >> S;
    cout << sol.reorganizeString(S) << endl;
}