#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string binary(int num, int N){
        string ret = "";
        while(num > 0){
            ret += (num%2) + '0';
            num /= 2;
        }
        int curr_len = ret.length();
        for(int i = 0; i < N-curr_len; i++){
            ret += '0';
        }
        return ret;
    }

    bool is_incr(vector <int> arr){
        if(arr.size() <= 1){
            return false;
        }
        for(int i = 0; i < arr.size()-1; i++){
            if(arr[i+1] < arr[i]){
                return false;
            }
        }
        return true;
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector <int> new_nums;
        set <int> F;
        for(auto x : nums){
            if(F.find(x) == F.end()){
                new_nums.push_back(x);
                F.insert(x);
            }
        }
        int N = new_nums.size();
        vector <vector<int>> ret;
        for(int i = 0; i < (1<<(N)); i++){
            string bin = binary(i, N);
            vector <int> curr;
            for(int i = 0; i < N; i++){
                if(bin[i] == '1'){
                    curr.push_back(new_nums[i]);
                }
            }
            if(is_incr(curr)){
                ret.push_back(curr);
            }
        }
        return ret;

    }
};

int main(){
    int N;
    cin >> N;
    vector <int> nums(N);
    for(int i = 0; i < N; i++){
        cin >> nums[i];
    }
    Solution sol;
    vector <vector <int>> ans = sol.findSubsequences(nums);
    for(auto x : ans){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
}