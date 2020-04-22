#include <bits/stdc++.h>
using namespace std;

int compress(vector <char>& chars){
    int n = chars.size();
    int w = 0, r = 0, currc = 0;
    char last = chars[0];
    while(true){
        if(r == n){
            if(currc > 1){
                chars[w] = last;
                string num = to_string(currc);
                w++;
                for(int i = 0; i < num.length(); i++){
                    chars[w] = num[i];
                    w++;
                }
                break;
            }
            else{
                chars[w] = last;
                w++;
                break;
            }
        }
        if(last == chars[r]){
            r++;
            currc++;
        }
        else{
            if(currc > 1){
                chars[w] = last;
                w++;
                string num = to_string(currc);
                for(int i = 0; i < num.length(); i++){
                    chars[w] = num[i];
                    w++;
                }
            }
            else{
                chars[w] = last;
                w++;
            }
            currc = 1;
            last = chars[r];
            r++;
        }
    }
    return w;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector <char> chars(n);
    for(int i = 0; i < n; i++){
        cin >> chars[i];
    }
    int size = compress(chars);
    for(int i = 0; i < size; i++){
        cout << chars[i] << " ";
    }
    cout << endl;

}