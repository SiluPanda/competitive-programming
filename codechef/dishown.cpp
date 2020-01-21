#include <bits/stdc++.h>
using namespace std;

int main(){
    

    int tt;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector <int> scores(n);
        for(int i = 0; i < n; i++) cin >> scores[i];
        vector <int> owner(n);
        for(int i = 0; i < n; i++) owner[i] = i+1;
        int q;
        cin >> q;
        while(q--){
            int x; cin >> x;
            if(x == 1){
                int y;
                cin >> y;
                cout << owner[y-1] << endl;
            }
            else{
                int y, z;
                cin >> y >> z;
                if(owner[y-1] == owner[z-1]) cout << "Invalid query!" << endl;
                if(scores[y-1] > scores[z-1]) {
                    int loser = owner[z-1];
                    for(int i = 0; i < n; i++){
                        if(owner[i] == loser) owner[i] = owner[y-1];
                    }
                }
                else if(scores[y-1] < scores[z-1]) {
                    int loser = owner[y-1];
                    for(int i = 0; i < n; i++){
                        if(owner[i] == loser) owner[i] = owner[z-1];
                    }
                    
                }
            }
        }
    }
}