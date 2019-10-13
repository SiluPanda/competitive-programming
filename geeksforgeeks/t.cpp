#include <bits/stdc++.h>
using namespace std;

int main(){
    bool ok = 0;
    for(int i = 0; i < 100000; i++){
        if(i%(34567) != i&(34566)){
            ok = 1;
            cout << i << endl;
            break;
        }
    }
    cout << ok << endl;

}