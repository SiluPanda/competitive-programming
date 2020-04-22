#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Solution{
    public:
    string replaceWords(vector<string>& dict, string sentence) {
        set <string> F(dict.begin(), dict.end());
        vector <string> words;
        string temp = "";
        int i = 0;
        int N = sentence.length();
        while(true){
            if(i == N){
                if(temp != "") words.push_back(temp);
                break;
            }
            if(sentence[i] == ' '){
                words.push_back(temp);
                temp = "";
            }
            else{
                temp += sentence[i];
            }
            i++;
        }
        string ret = "";
        for(auto x : words){
            int i = 0;
            bool found = false;
            while(i < x.length()){
                string curr = x.substr(0, i+1);
                cout << x << "-->" << curr << endl;
                if(F.find(curr) != F.end()){
                    found = true;
                    ret += curr;
                    ret += " ";
                    break;
                }
                i++;
            }
            if(!found){
                ret += x;
                ret += " ";
            }
        }
        return ret;
    }
};

int main(){
    Solution sol;
    int n; 
    cin >> n;
    vector <string> dict(n);
    for(int i = 0; i < n; i++){
        cin >> dict[i];
    }
    string sentence;
    cin >> sentence;
    cout << sol.replaceWords(dict, sentence) << endl;

}