#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map <string, string> F;
    while(n--){
        string ext, type;
        cin >> ext >> type;
        F[ext] = type;
    }
    while(m--){
        string fname;
        cin >> fname;
        int i = fname.length()-1;
        bool hasit = false;
        string exten = "";
        while(i >= 0){
            if(fname[i] == '.'){
                hasit = true;
                break;
            }
            exten += fname[i];
            i -= 1;
        }
        reverse(exten.begin(), exten.end());
        if(hasit && F.find(exten) != F.end()){
            cout << F[exten] << endl;
        }
        else cout << "unknown" << endl;
    }
}