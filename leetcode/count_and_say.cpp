#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

string helper(string num){
    int i = 1, f = 1;
    vector < pair <char, int> > F;
    char last = num[0];
    while(i < num.length()){
        if(num[i] == last){
            f++;
        }
        else{
            F.push_back(make_pair(last, f));
            f = 1;
            last = num[i];
        }
        i++;
    }
    F.push_back(make_pair(last, f));
    string ret = "";
    for(int i = 0; i < F.size(); i++){
        
        ret += (F[i].second + '0');
        ret += F[i].first;
    }
    return ret;
}

string countAndSay(int n) {
    vector <string> all;
    all.push_back("1");
    for(int i = 2; i <= n; i++){
        all.push_back(helper(all.back()));
    }
    return all.back();
}

int main(){
    int n;
    cin >> n;
    cout << countAndSay(n) << endl;
}