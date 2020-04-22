#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        stack <pair <char, int>> F;
        vector <int> indexes;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '*'){
                indexes.push_back(i);
            }
            else{
                if(F.empty()){
                    F.push(make_pair(s[i], i));
                }
                else{
                    if(s[i] == '('){
                        F.push(make_pair(s[i], i));
                    }
                    else{
                        if(F.top().first == '('){
                            F.pop();
                        }
                        else{
                            F.push(make_pair(s[i], ')'));
                        }
                    }
                }
            }
        }
        while(!F.empty()){
            pair <char, int> curr = F.top();
            F.pop();
            bool found = false;
            if(curr.first == ')'){
                for(int i = indexes.size()-1; i >= 0; i--){
                    if(curr.second > indexes[i] && indexes[i] != -1){
                        found = true;
                        indexes[i] = -1;
                        break;
                    }
                }
            }
            else{
                for(int i = 0; i < indexes.size(); i++){
                    if(curr.second < indexes[i] && indexes[i] != -1){
                        found = true;
                        indexes[i] = -1;
                        break;
                    }
                }
            }
            if(!found){
                return false;
            }
        }
        return true;
    }
};

int main(){
    string s;
    cin >> s;
    Solution sol;
    cout << sol.checkValidString(s) << endl;
}