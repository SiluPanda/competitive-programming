#include <bits/stdc++.h>
using namespace std;

bool equi(char c1, char c2){
    return (c1 == c2) || (toupper(c1) == c2);
}

bool fun(string a, string b){
    int alen = a.length(), blen = b.length();
    int i = 0, j = 0;
    if(alen == 0 && blen == 0){
        return 1;
    }
    if(alen == 0 && blen != 0){
        return 0;
    }
    if(alen != 0 && blen == 0){
        for(int i = 0; i < alen; i++){
            if(!islower(a[i])) return 0;
        }
    }
    while(i < alen && j < blen){
        if(equi(a[i], b[j])){
            i++;
            j++;
        }
        else{
            if(islower(a[i])){
                i++;
            }
            else{
                return 0;
            }
        }
       
    }
    
    if(i == alen && j == blen){
        return 1;
    }
    else if(i != alen && j == blen){
        for(; i < alen; i++){
            if(!islower(a[i])) return 0;
        }
    }
    else if(i == alen && j != blen){
        return 0;
    }
    return 1;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string a, b;
        cin >> a >> b;
        if(fun(a, b)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}