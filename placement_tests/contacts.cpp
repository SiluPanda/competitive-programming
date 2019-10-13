#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    unordered_map <string, int> freq;
    while(n--){
        string qq, sub;
        cin>>qq>>sub;
        if(qq == "add"){
            int len = sub.length();
            for(int size = 1; size <= len; size++){
                //cout << sub.substr(0, size) << endl;
                freq[sub.substr(0, size)]++;
            }
        }
        else{
            if(!freq.count(sub)){
                cout << 0;
            }
            else{
                cout << freq[sub];
            }
            cout << "\n";
        }
    }
   
}