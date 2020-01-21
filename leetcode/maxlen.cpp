#include <bits/stdc++.h>
using namespace std;

bool isgood(string A){
    set <char> F(A.begin(), A.end());
    return F.size() == A.length();
}

string bin(int number, int len){
    string ret = "";
    while(number > 0){
        ret += ((number%2) + '0');
        number /= 2;
    }
    int lenret = ret.length();
    for(int i = 0; i < len-lenret; i++){
        ret += '0';
    }
    return ret;
}

int maxlen(vector <string>& arr){
    int len = arr.size();
    int ret = 0;
    for(int i = 0; i <= (1<<len)-1; i++){
        string B = bin(i, len);
        //cout << B << endl;
        string curr = "";
        for(int j = 0; j < len; j++){
            if(B[j] == '1'){
                curr += arr[j];
            }
        }
        if(isgood(curr)) ret = max(ret, (int) curr.length());



    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    vector <string> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << maxlen(arr) << endl;
}