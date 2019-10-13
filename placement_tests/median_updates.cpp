#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

void print(multiset <ll> s){
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << el;
}

int main(){
    multiset <ll> set1, set2;
    set1.insert(1);
    set1.insert(2);
    set1.insert(2);
    set1.insert(1);
    set1.erase(1);
    print(set1);
}