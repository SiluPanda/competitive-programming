#include <bits/stdc++.h>
using namespace std;

int max_sum(vector <int> nums){
    int N = nums.size();
    if(N == 0){
        return 0;
    }
    int sum = 0;
    vector <int> ones, twos;
    for(auto x : nums){
        sum += x;
        if(x%3 == 1) ones.push_back(x);
        if(x%3 == 2) twos.push_back(x);
    }
    sort(ones.begin(), ones.end());
    sort(twos.begin(), twos.end());
    if(sum % 3 == 0){
        return sum;
    }
    else{
        if(sum%3 == 1){
            int case1 = 0, case2 = 1000000;
            case1 = ones.front();
            if(twos.size() >= 2){
                case2 = twos[0]+twos[1];
            }
            sum -= min(case1, case2);
        }
        else{
            int case1 = 0, case2 = 1000000;
            case1 = twos.front();
            if(ones.size() >= 2){
                case2 = ones[0]+ones[1];
            }
            sum -= min(case1, case2);
        }
        
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector <int> nums(N);
    for(int i = 0; i < N; i++) cin >> nums[i];
    cout << max_sum(nums) << endl;

}