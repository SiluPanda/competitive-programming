#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int get(int a[], int n){
    map <int, int> F;
    for(int i = 0; i < n; i++){
        F[a[i]]++;
    }
    int c = 0;
    c += F[4];
    int threes = F[3];
    int ones = F[1];
    if(threes <= ones){
        c += threes;
        F[1]-=threes;
    }
    else{
        F[1] = 0;
        c += threes;
    }
    c += F[2]/2;
    F[2] = F[2]%2;
    if(F[2] <= F[1]){
        c += F[2];
        F[1]-= max(0, F[2]*2);
    }
    else{
        c += F[2];
        F[1]=0;
    }
    c += (F[1]+3)/4;
    
    return c;

}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << get(a, n) << el;
    
}