#include <bits/stdc++.h>
using namespace std;

int main(){
    double l, s1, s2;
    cin>>l>>s1>>s2;
    int q;
    cin>>q;
    while(q--){
        double area;
        cin>>area;
        double lsmall = sqrt(area);
        cout << fixed << setprecision(50) << (sqrt(2) * (l-lsmall)) / abs(s2-s1) << endl;
    }
}