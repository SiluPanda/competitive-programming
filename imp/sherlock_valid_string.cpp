#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

int main(){
    string s;
    cin >> s;
    vector <int> freq(26, 0);
    for(int i = 0; i < s.length(); i++){
        freq[s[i]-'a']++;
    }
    map <int, int> frefre;
    for(int i = 0; i < 26; i++){
        if(freq[i]) frefre[freq[i]]++;
    }
    if(frefre.size() == 1){
        yes;
    }
    else if(frefre.size() == 2){
        map <int, int>::iterator i = frefre.begin(), j = frefre.begin();
        j++;
        if(i->first == 1 && i->second == 1){
            yes;
        }
        else if(j->second == 1 && (j->first-i->first) == 1){
            yes;
        }
        else no;
        
    }
    else no;
}