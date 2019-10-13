#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    stack <int> s1, s2;
    while(n--){
        int q;
        cin>>q;
        if(q == 1){
            int val;
            cin>>val;
            s1.push(val);
        }
        else if(q == 2){
            if(!s2.empty()){
                s2.pop();
            }
            else{
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                s2.pop();
            }
        }
        else{
            if(!s2.empty()){
                cout << s2.top() << endl;
            }
            else{
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                cout << s2.top() << endl;
            }
        }
    }
}