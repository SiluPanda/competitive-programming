#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        map <int, int> F;
        int N = arr.size();
        if (N == 0){
            return 0;
        }
        F[arr[0]] = 1;
        int ret = 1;
        for(int i = 1; i < N; i++){
            if(F.count(arr[i]-difference)){
                F[arr[i]] = max(F[arr[i]], F[arr[i]-difference] + 1);
                ret = max(ret, F[arr[i]]);
            }
            else{
                F[arr[i]] = 1;
            }
        }
        return ret;
    }
};

int main(){
    Solution sol;
    int N, diff;
    cin >> N >> diff;
    vector <int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    cout << sol.longestSubsequence(arr, diff) << endl;
}