#include <bits/stdc++.h>
using namespace std;

bool check(string s[], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < s[i].length(); j++){
            
            for(int size = 0; size <= s[i].length()-j; size++){
                string tmp;
                tmp = s[i].substr(i, size);
                cout << tmp << endl;
                transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
                if(tmp == "spoon"){
                    return true;
                }
            }

        }
    }
    return false;
}


bool isthere(string a[], int n, int m){
    bool b1, b2;
    if(m > 4){
        b1 = check(a, n, m);
    }

    if(n > 4){
        string trans[m];
        for(int i = 0; i < m; i++){
            string tmp = "";
            for(int j = 0; j< n; j++){
                tmp += a[j][i];
            }
            trans[i] = tmp;
        }
        b2 = check(trans, m, n);

        
    }
    return b2 || b1;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n, m;
        cin>>n>>m;
        string a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        if(isthere(a, n, m) == true) cout << "There is a spoon!" << endl;
        else cout << "There is indeed no spoon!" << endl;
    }
}