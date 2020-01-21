#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    unordered_map <ull, ull> F;
    for(ull i = 0; i < (ull) 1e9; i++){
        ull num = (i*(i+1))/2;
        F[num] = 1;
    }
}