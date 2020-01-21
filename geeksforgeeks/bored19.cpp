#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    
    int t; cin>>t;
    while(t--){
        int F[26];
        memset(F, 0, sizeof(F));
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            F[s[i]-'a']++;
            
        }
        int ans = 0;
        for(int i = 0; i < 26; i++) cout << F[i] << " ";
        cout << endl;
        for(int i = 0; i < 26; i++){
            ans += (F[i]*(F[i]+1))/2;
        }
        cout << ans << endl;
    }
	
	return 0;
}