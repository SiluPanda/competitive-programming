#include <bits/stdc++.h>
using namespace std;

string last(string s){
    string ret = "";
    for(int i = s.length()-3; i < s.length(); i++){
        ret += s[i];
    }
    return ret;
}

int main(){
    string s;
    cin >> s;
    int i = 0;
    string temp = "";
    vector <string> ret;
    int n = s.length();
    while(true){
        if(i == n){
            if(temp.length() < 3 || (temp.length() >= 3 && last(temp) != "WUB")) ret.push_back(temp);
            else{
                string ans = "";
                for(int j = 0; j < temp.length()-3; j++){
                    ans += temp[j];
                }
                ret.push_back(ans);
            }
            break;
        }
        if(temp.length() >= 3 && last(temp) == "WUB"){
            string ans = "";
            for(int j = 0; j < temp.length()-3; j++){
                ans += temp[j];
            }
            ret.push_back(ans);
            temp = "";
        }
        temp += s[i];
        i++;
        
    }
    for(auto x : ret) if(x.length() > 0) cout << x << " ";
    cout << endl;
}
