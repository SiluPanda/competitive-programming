#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    string s = "";
    stack <pair <int, string> > activity;
    while(tt--){
        int ac;
        cin >> ac;
        if(ac == 1){
            string in;
            cin >> in;
            s+=in;
            pair <int, string> last;
            last.first = 1;
            last.second = in;
            activity.push(last);
            //cout << s << endl;
        }
        else if(ac == 2){
            int k;
            cin >> k;
            string str1 = s.substr(0, s.length()-k), str2 = s.substr(s.length()-k, k);
            s = str1;
            pair <int, string> last;
            last.first = 2;
            last.second = str2;
            activity.push(last);
            // cout << s << endl;
        }
        else if(ac == 3){
            int k;
            cin >> k;
            cout << s[k-1] << endl;
            // cout << s << endl;
        }
        else{
            pair <int, string> last = activity.top();
            activity.pop();
            if(last.first == 1){
               int len = last.second.length();
               s = s.substr(0, s.length()-len);
            }
            else{
                s += last.second;
            }
        }
    }


}