#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool isPossibleDivide(vector<int>& nums, int k) {
    map <int, int> F;
    for(auto x : nums) F[x]++;
    
    for(auto i = F.begin(); i != F.end(); i++){
        int start = i->first;
        int freq = i->second;
        //cout << start << " " << freq << endl;
        F[start] = 0;
        //cout << "check" << endl;
        if(freq > 0){
            for(int j = start+1; j <= start + k-1; j++){
                if(F.find(j) != F.end()){
                    if(F[j] >= freq) F[j] -= freq;
                    else return false;
                }
                else return false;
            }
        }
    }
    //cout << "ok" << endl;
    for(auto i = F.begin(); i != F.end(); i++){
        if(i->second != 0) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    vector <int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int k;
    cin >> k;
    cout << "got input" << endl;
    cout << isPossibleDivide(nums, k) << endl;
}