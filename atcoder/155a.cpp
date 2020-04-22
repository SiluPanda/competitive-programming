#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector <int> nums(3);
    for(int i = 0; i < 3; i++) cin >> nums[i];
    sort(nums.begin(), nums.end());
    if(nums[0] == nums[1] && nums[1] != nums[2] || nums[2] == nums[1] && nums[1] != nums[0]){
        cout << "Yes";
    }
    else cout << "No";
    cout << endl;

}