#include <bits/stdc++.h>
using namespace std;

bool buddy(string A, string B){
    string dupA = A; string dupB = B;
    int la = A.length(), lb = B.length();
    sort(dupA.begin(), dupA.end());
    sort(dupB.begin(), dupB.end());
    if(la != lb || dupA != dupB) return 0;
    int c = 0;
    for(int i = 0; i < la; i++) {
        if(A[i] != B[i]) c++;
    }
    if(c == 2) return true;
    else if(c == 0){
        for(int i = 0; i < la-1; i++){
            if(dupA[i] == dupA[i+1]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    string A, B;
    cin >> A >> B;
    cout << buddy(A, B) << endl;
}