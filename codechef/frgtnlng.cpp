#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

vector <string> find(string words[], int n, vector <string> phrases){
    vector <string> ans;
    string yes = "YES", no = "NO";
    for(int i = 0; i < n; i++){
        bool f = 0;
        for(int j = 0; j < phrases.size(); j++){
            if(phrases[j] == words[i]){
                ans.push_back(yes);
                f = 1;
                break;
            }
        
        }
        if(!f) ans.push_back(no);
    }
    return ans;
}

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        int n, k;
        cin>>n>>k;
        string words[n];
        for(int i = 0; i < n; i++) cin>>words[i];
        vector <string> phrases;
        for(int i = 0; i < k; i++){
            int num; 
            cin>>num;
            for(int j = 0; j < num;j++){
                string w;
                cin>>w;
                phrases.push_back(w);
            }
        }
        vector <string> ans;
        ans = find(words, n, phrases);
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << el;
    }
}