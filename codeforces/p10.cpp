#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define el "\n"

vector <string> split(string s){
    vector <string> ret;
    string temp = "";
    int i = 0;
    while(true){
        if(i == s.length()){
            ret.push_back(temp);
            break;
        }
        if(s[i] == '+'){
            ret.push_back(temp);
            temp = "";
        }
        else{
            temp += s[i];
        }
        i++;
    }
    return ret;
}

int main(){
    fastio
    string s;
    cin >> s;
    vector <string> ans = split(s);
    sort(ans.begin(), ans.end());
    string ret = "";
    for(int i = 0; i < ans.size(); i++){
        if(i == ans.size()-1){
            ret += ans[i];
        }
        else{
            ret += ans[i];
            ret += '+';
        }
    }
    cout << ret << el;

}