#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int, int> F;
    unordered_map <int, int> M;
    F[1]++;
    F[1]--;
    F[1]++;
    M[1]++;
    M[1]--;
    M[1]++;
    bool b1 = (M.find(1) == M.end());
    bool b2 = (F.find(1) == F.end());
    cout << b1 << " " << b2 << endl;
}