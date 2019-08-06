#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string dir[n];
        string road[n];
        for(int i = 0; i < n; i++){
            string s;
            getline(cin, s);
            string d;
            while(s[i] != ' '){
                d += s[i];
                i++;
            }
            int itr = s.length()-1;
            string p;
            while(s[itr] != ' '){
                p += s[i];
                itr--;
            }
            reverse(p.begin(), p.end());
            dir[i] = d;
            road[i] = p; 

        }
        for(int i = 0; i < n; i++){
            cout << dir[i] << " " << road[i] << endl;
        }
        for(int j = n-1; j >= 0; j--){
            if(dir[j] == "Left") dir[j] = "Right";
            else dir[j] = "Left";
            cout << dir[j] << " on " << road[j] << endl;
        }
    }
}