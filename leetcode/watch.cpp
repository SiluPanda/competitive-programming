#include <bits/stdc++.h>
using namespace std;

vector <int> getfriends(vector < vector <int> > friends, int id, int level){
    vector <int> fri = friends[id];
    while(level > 1){
        vector <int> ret;
        for(int i = 0; i < fri.size(); i++){
            for(int j = 0; j < friends[fri[i]].size(); j++){
                ret.push_back(friends[fri[i]][j]);
            }
        }
        fri = ret;
        level -= 1;
    }
    set <int> st(fri.begin(), fri.end());
    vector <int> finalans;
    for(auto it = st.begin(); it != st.end(); it++){
        finalans.push_back(*it);
    }
    return finalans;

}
bool comp(pair <string, int> A, pair <string, int> B){
    if(A.second == B.second){
        return A.first < B.first;
    }
    return A.second < B.second;
}

vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, 
vector<vector<int>>& friends, int id, int level) {
    vector <int> indices = getfriends(friends, id, level);
    unordered_map <string, int> F;
    for(auto x : indices){
        if(x != id){
            for(auto y : watchedVideos[x]){
                F[y]++;
            }
        }

    }
    vector <pair <string, int>> arr;
    for(auto it = F.begin(); it != F.end(); it++){
        arr.push_back(make_pair(it->first, it->second));
    }
    sort(arr.begin(), arr.end(), comp);
    vector <string> pp;
    for(auto x : arr){
        pp.push_back(x.first);
    }
    return pp;

}

int main(){
    int n;
    cin >> n;
    vector <vector <int>> friends;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        friends.push_back({a, b});
    }
    vector <vector <string> > watchedVideos = {{"A","B"},{"C"},{"B","C"},{"D"}};
    vector <string> ans = watchedVideosByFriends(watchedVideos, friends, 0, 2);
    for(auto x : ans){
        cout << x << " ";
    }
    cout << endl;
}