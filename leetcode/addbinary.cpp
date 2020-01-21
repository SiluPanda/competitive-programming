#include <bits/stdc++.h>
using namespace std;
#define ll long long long long
#define ull unsigned long long long long
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool allzeros(vector <int> v){
    for(auto x : v){
        if(x != 0) return false;
    }
    return true;
}
string addBinary(string a, string b) {
    int lena = a.length(), lenb = b.length();
    if(lenb > lena) swap(a, b);
    cout << a << " " << b << endl;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    a += "00000000";
    b += "00000000";
    vector <int> ret;
    int carry = 0, place = 0;
    lena = a.length();
    lenb = b.length();
    for(int i = 0; i < lena; i++){
        int curr1 = a[i] - '0';
        int curr2 = 0;
        if(i < lenb){
            curr2 = b[i] - '0';
        }
        int add = (curr1 + curr2 + carry);
        place = add % 2;
        carry = add / 2;
        ret.push_back(place);
    }
    if(allzeros(ret)){
        return "0";
    }
    while(ret.back() == 0){
        ret.pop_back();
    }
    string ans = "";
    for(auto x : ret) cout << x << " ";
    cout << endl;
    for(auto x : ret) ans += x + '0';
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b) << endl;
}