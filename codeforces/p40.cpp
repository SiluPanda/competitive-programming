#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string last = "#";
    int count = 0;
    for(int i = 0; i < n; i++){
        string mag;
        cin >> mag;
        if(mag != last){
            count++;
            last = mag;
        }
    }
    cout << count << endl;
}