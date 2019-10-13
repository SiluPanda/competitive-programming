#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int q;
    cin>>q;
    priority_queue <int, vector <int>, greater <int> > up;
    priority_queue <int> down;
    int curr = 0;
    while(q--){
        int num;
        cin >> num;
        curr++;
        down.push(num);
        if(down.size() > up.size()+1){
            up.push(down.top());
            down.pop();
        }
        if(!up.empty() && up.top() < down.top()){
            int temp = up.top();
            up.pop();
            up.push(down.top());
            down.pop();
            down.push(temp);
        }
        if(curr%2 != 0){
            cout << fixed << setprecision(1) << (double) down.top() << endl;
        }
        else{
            cout << fixed << setprecision(1) << (up.top()+down.top())/(double) 2 << endl;
        }
    }
}