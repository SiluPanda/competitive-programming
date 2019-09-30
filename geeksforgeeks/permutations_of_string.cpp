#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

vector <string> ans;

void permu(string s, int left, int right){
    if(left == right) {
        ans.push_back(s);
    }
    else{
        for(int i = left; i <= right; i++){
            swap(s[left], s[i]);
            permu(s, left+1, right);
            swap(s[left], s[i]);
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        permu(s, 0, s.length()-1);
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << el;
        ans.clear();
    }
}