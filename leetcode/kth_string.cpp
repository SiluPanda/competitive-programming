#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getHappyString(int n, int k) {
        queue <string> Q;
        Q.push("a");
        Q.push("b");
        Q.push("c");
        while(true){
            string curr = Q.front();
            int N = curr.length();
            if(N < n){
                Q.pop();
                if(curr[N-1] == 'a'){
                    Q.push(curr + 'b');
                    Q.push(curr + 'c');
                }
                else if(curr[N-1] == 'b'){
                    Q.push(curr + 'a');
                    Q.push(curr + 'c');
                }
                else{
                    Q.push(curr + 'b');
                    Q.push(curr + 'a');
                }
                

            }
            else{
                break;
            }
        }
        vector <string> all;
        while(!Q.empty()){
            string curr = Q.front();
            Q.pop();
            all.push_back(curr);
        }
        sort(all.begin(), all.end());
        for(auto x : all) cout << x << " ";
        cout << endl;
        if(all.size() < k) return "";
        return all[k-1];
    }
};

int main(){
    int n, k;
    cin >> n >> k;
    Solution sol;
    cout << sol.getHappyString(n, k) << endl;
}