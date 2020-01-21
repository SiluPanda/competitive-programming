#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool isValid(string s) {
    stack <char> F;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            F.push(s[i]);
        }
        else if(s[i] == ')'){
            if(!F.empty() && F.top() == '('){
                F.pop();
            }
            else F.push(s[i]);
        }
        else if(s[i] == '}'){
            if(!F.empty() && F.top() == '{'){
                F.pop();
            }
            else F.push(s[i]);
        }
        else{
            //cout << "Hello" << endl;
            if(!F.empty() && F.top() == '['){
                F.pop();
            }
            else F.push(s[i]);
        }
    }
    return F.size() == 0;
}

int main(){
    string s;
    cin >> s;
    cout << isValid(s) << endl;
}