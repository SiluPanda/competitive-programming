#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string fun(int a, int b, int c){
    string y = "YES", n = "NO";
    if(max(a, b) < c){
        return n;
    }
    if(a == c || b == c){
        return y;
    }
    
}