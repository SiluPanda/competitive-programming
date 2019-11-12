#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string p;
    int n = s.length();
    int i = 0;
    while(i < n){
        if(s[i]!=' '){
            p += s[i];
        }
        i++;
    }
    s=p;
    n = s.length();
    int row = floor(sqrt(n));
    int col = ceil(sqrt(n));
    vector <string> ans;
    i = 0;
    string tmp = "";
    while(i<n){
        if((i+1)%col == 0 || i == n-1){
            tmp+=s[i];
            ans.push_back(tmp);
            tmp="";
        }
        else tmp+=s[i];
        i++;
    }
    
    int check = ans.back().length();
    row = ans.size();
    for(int i = 0; i < col; i++){
        string now  = "";
        if(check > i){
            
            for(int j = 0; j < row; j++) now+=ans[j][i];

        }
        else for(int j = 0; j < row-1; j++) now+=ans[j][i];
        cout << now << " ";
    }
    cout << endl;



}