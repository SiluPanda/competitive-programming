#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

string printMinIndexChar(string str, string patt)
{
    map <char, int> F;
    int n = str.length();
    for(int i = n; i >= 0; i--){
        F[str[i]] = i;
    }
    int ans = 100001;
    char ret = '$';
    for(int i = 0; i < patt.length(); i++){
        if(F.find(patt[i]) != F.end()){
            if(ans > F[patt[i]]){
                ans = F[patt[i]];
                ret = patt[i];
            }
        }
    }
    string s(1, ret);
    return s;
    }


int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string str, patt;
        cin >> str >> patt;
        cout << printMinIndexChar(str, patt) << el;
    }
}