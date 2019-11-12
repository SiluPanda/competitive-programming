#include <bits/stdc++.h>
using namespace std;

struct Trie{
    char c;
    int freq;
    Trie *child[26];
    Trie(char c){
        this->c = c;
        this->freq = 1;
        for(int i = 0; i < 26; i++){
            this->child[i] = NULL;
        }
    }
};
Trie * insert(Trie *root, string s){
    Trie *p = root;
    int i = 0;
    while(p->child[s[i]-'a'] != NULL){
        p->child[s[i]-'a']->freq++;
        cout << p->child[s[i]-'a']->c << endl;
        p = p->child[s[i]-'a'];
        i++;
    }
    while(i<s.length()){
        Trie *temp = new Trie(s[i]);
        p->child[s[i]-'a'] = temp;
        cout << p->child[s[i]-'a']->c << endl; 
        p = p->child[s[i]-'a'];
        i++;
    }
    return root;
    
}

int get(string s, Trie* root){
    int ans = INT_MAX;
    Trie *p = root;
    int i = 0;
    while(p->child[s[i]-'a'] != NULL && i < s.length()){
        p = p->child[s[i]-'a'];
        cout << p->freq << endl;
        i+=1;
    }
    if(i == s.length()) ans = p->child[s[i]-'a']->freq;
    else ans = 0;
    return ans;
}

int main(){
    Trie *root = new Trie('#');
    int n;
    cin >> n;
    Trie *curroot = NULL;
    while(n--){
        string ac, val;
        cin >> ac >> val;
        if(ac == "add"){
            curroot = insert(root, val);
        }
        else{
            cout << get(val, curroot) << endl;
        }
    }

}