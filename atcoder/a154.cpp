#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;
    int na, nb;
    cin >> na >> nb;
    string u;
    cin >> u;
    if(u == a) na--;
    else nb--;
    cout << na << " " << nb << endl;


}