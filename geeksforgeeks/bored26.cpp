#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    
    int t; cin>>t;
    while(t--){
        string s;
        cin >> s;
        set <char> P(s.begin(), s.end());
        int n = P.size();
        int len = INT_MAX;
        //string currans = "";
        for(int pos = s.length()-1; pos >= 0; pos--){
            for(int size = 1; size <= s.length()-pos; size++){
                string temp = s.substr(pos, size);
                //cout << temp << endl;
                set <char> T(temp.begin(), temp.end());
                if(T.size() == n && temp.length() < len){
                   len = temp.length();
                   
                }
            }
        }
        cout << len << endl;
        
    }
	
	return 0;
}