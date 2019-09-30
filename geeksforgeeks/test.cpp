#include <bits/stdc++.h>
using namespace std;

void increase(int n){
    n++;
}

int incr(int n){
    increase(n);
    return n;
}

int main(){
    int n = 8;
    cout << incr(n) << endl;
}
