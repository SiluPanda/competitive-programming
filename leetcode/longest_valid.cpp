#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int longest(string s){
    unordered_map <int, vector <int> > M;
    stack <char> F;
    for(int i = 0; i < s.length(); i++){
        char curr = s[i];
        if(curr == '(' || curr == '{' || curr == '['){
            F.push(curr);
        }
        else if(curr == ')'){
            if(!F.empty() && F.top() == '('){
                F.pop();
            }
            else F.push(curr);
        }
        else if(curr == '}'){
            if(!F.empty() && F.top() == '{'){
                F.pop();
            }
            else F.push(curr);
        }
        else{
            if(!F.empty() && F.top() == '['){
                F.pop();
            }
            else F.push(curr);
        }
        M[F.size()].push_back(i);

    }
    int ans = 0;
    for(auto it = M.begin(); it != M.end(); it++){
        cout << "The size is: " << it->first << endl;
        vector <int> pp = it->second;
        for(int i = 0; i < pp.size()-1; i++){
            ans = max(ans, pp[i+1]-pp[i]);
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << longest(s) << endl; 
}