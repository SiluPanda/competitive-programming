#include <bits/stdc++.h>
using namespace std;

bool balanced(string s){
    int len = s.length();
    stack <char> st;
    for(int i = 0; i < len; i++){
        if(st.empty()) st.push(s[i]);
        else if(st.top() == '(' && s[i] == ')') st.pop();
        else if(st.top() == '{' && s[i] == '}') st.pop();
        else if(st.top() == '[' && s[i] == ']') st.pop();
        else st.push(s[i]);
    }
    return st.empty();
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        if(balanced(s)) cout << "balanced" << endl;
        else cout << "not balanced" << endl;
    }
}