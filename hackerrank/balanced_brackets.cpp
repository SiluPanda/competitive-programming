#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s){
    stack <char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.empty() || st.top() != '('){
                return "NO";
            }
            else{
                st.pop();
            }
        }
        else if(s[i] == '}'){
            if(st.empty() || st.top() != '{'){
                return "NO";
            }
            else{
                st.pop();
            }
        }
        else if(s[i] == ']'){
            if(st.empty() || st.top() != '['){
                return "NO";
            }
            else{
                st.pop();
            }
        }


    }
    if(st.empty()){
        return "YES";
    }
    else{
        return "NO";
    }
}
    
int main()
{
    int t; cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	cout<<isBalanced(s)<<endl;
    }
}
