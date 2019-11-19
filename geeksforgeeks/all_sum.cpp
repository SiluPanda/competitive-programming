#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(int n, int len){
    string ans = "";
    while(n > 0){
        ans += ((n%2) + '0');
        n/=2;
    }
    int x = ans.length();
    for(int i = 0; i < len-x; i++){
        ans += '0';
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

bool issum(int a[], int n, string bit, int sum){
    int x = 0;
    for(int i = 0; i < n; i++){
        if(bit[i] == '1'){
            x += a[i];
        }
    }
    return x == sum;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int sum;
        cin >> sum;
        vector < vector <int> > V;
        for(int i = 0; i <= (1<<n)-1; i++){
            string bit = dec_to_bin(i, n);
            if(issum(a, n, bit, sum)){
                vector <int> P;
                for(int i = 0; i < n; i++){
                    if(bit[i] == '1') P.push_back(a[i]);
                }
                V.push_back(P);
            }
        }
        if(!V.size()) cout << "Empty" << endl;
        else{
            for(int i = 0; i < V.size(); i++){
                cout << "(";
                for(int j = 0; j < V[i].size(); j++){
                    if(j != V[i].size()-1) cout << V[i][j] << " ";
                    else cout << V[i][j];
                }
                cout << ")";
            }
            cout << endl;

        }



    }
}