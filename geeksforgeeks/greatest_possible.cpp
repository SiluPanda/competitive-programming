#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

vector <string> ans;

void all_per(string s, int left, int right){
    
    if(left == right){
        
        ans.push_back(s);
    }
    else{
        for(int i = left; i <= right; i++){
            swap(s[left], s[i]);
            all_per(s, left+1, right);
            swap(s[left], s[i]);
        }
    }
    

}


int main(){
    

    int tc;
    cin>>tc;
    while(tc--){
        string num;
        cin>>num;
        string dup = num;
        all_per(num, 0, num.length()-1);
        sort(ans.begin(), ans.end());
        bool found = 0;
        //for(int i = 0; i < ans.size(); i++) cout << ans[i] << el;

        for(int i = 0; i < ans.size(); i++){
            if(ans[i] > dup){
                cout << ans[i] << el;
                found = 1;
                break;
            }
        }
        if(!found) cout << "not possible" << el;
        ans.clear();
    }
}