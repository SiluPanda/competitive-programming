#include <bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    cin >> A >> B;
    for(int i = 0; i < A.length(); i++) cout << (A[i] != B[i]);
    cout << endl;
}