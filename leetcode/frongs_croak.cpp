#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int N = croakOfFrogs.length();
        int curr_seen = 0, max_seen = 0;
        vector <int> F(5, 0);
        for(int i = 0; i < N; i++){
            if(croakOfFrogs[i] == 'c'){
                curr_seen++;
                max_seen = max(curr_seen, max_seen);
                F[0]++;
            }
            else if(croakOfFrogs[i] == 'r'){
                F[1]++;
                if(F[1] > F[0]){
                    return -1;
                }
            }
            else if(croakOfFrogs[i] == 'o'){
                F[2]++;
                if(F[2] > F[0] || F[2] > F[1]){
                    return -1;
                }
            }
            else if(croakOfFrogs[i] == 'a'){
                F[3]++;
                if(F[3] > F[2] || F[3] > F[1] || F[3] > F[0]){
                    return -1;
                }
            }
            else if(croakOfFrogs[i] == 'k'){
                F[4]++;
                curr_seen--;
                if(F[4] > F[3] || F[4] > F[2] || F[4] > F[1] || F[4] > F[0]){
                    return -1;
                }
            }

        }
        set <int> st(F.begin(), F.end());
        if(st.size() != 1){
            return -1;
        }
        return max_seen;
    }
};

int main(){
    Solution sol;
    string sound;
    cin >> sound;
    cout << sol.minNumberOfFrogs(sound) << endl;
}