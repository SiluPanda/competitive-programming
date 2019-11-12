#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<< endl;

int main(){
    string s;
    cin >> s;
    int a[26] = {0};
    for(int i = 0; i < s.length(); i++){
        a[s[i]-'a']++;
    }
    map <int, int> m;
    for(int i = 0; i < 26; i++){
        if(a[i] != 0)
        m[a[i]]++;
    }
    // cout << "printing map..." << endl;
    // for(auto i = m.begin(); i != m.end(); i++) cout << i->first << " " << i->second << endl;
    if(m.size() == 1){
        yes;
    }
    else if(m.size() == 2){
        map <int, int>::iterator i = m.begin(), j = m.begin();
        j++;
        if(i->first == 1 && i->second == 1){
            yes;
        }
        else if(i->second == 1){
            if(i->first - i->second == 1){
                yes;
            }
            else{
                no;
            }
        }
        else if(j->second == 1){
            if(j->first - i->first == 1){
                yes;
            }
            else{
                no;
            }
        }
        else no;
    }
    else no;
}