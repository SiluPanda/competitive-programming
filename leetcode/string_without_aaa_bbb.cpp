#include <bits/stdc++.h>
using namespace std;

string without(int A, int B){
    string ret = "";
    if(A > B){
        while(A != B && B != 0){
            ret += "aab";
            A -= 2;
            B -= 1;
        }
        if(A == B){
            while(A){
                ret += "ab";
                A--;
            }
        }
        else if(B == 0){
            while(A){
                ret += "a";
                A--;
            }
        }
    }
    else{
        while(A != B && A != 0){
            ret += "bba";
            A -= 1;
            B -= 2;
        }
        if(A == B){
            while(B){
                ret += "ba";
                B--;
            }
        }
        else if(A == 0){
            while(B){
                ret += "b";
                B--;
            }
        }
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;
    cin >> A >> B;
    cout << without(A, B);
}