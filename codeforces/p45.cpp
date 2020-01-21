#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string ret = "";
    for(int i = 1; i <= n; i++){
        if(i%2 == 1) {
            if(i == 1) ret += "I hate ";
            else ret += "that I hate ";
        }
        else if(i%2 == 0) ret += "that I love ";

    }

    cout << ret + "it" << endl;
}