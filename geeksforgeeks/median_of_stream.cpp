#include <bits/stdc++.h>
using namespace std;

void addNum(priority_queue <int> lower, priority_queue <int, vector <int>, greater <int> > higher, int x){
    if(lower.empty() || x < lower.top()){
        lower.push(x);
    }
    else{
        higher.push(x);
    }
}

void reBalance(priority_queue <int> lower, priority_queue <int, vector <int>, greater <int> > higher){
    if(higher.size()-lower.size() >= 2){
        lower.push(higher.top());
        higher.pop();
    }
    else if(lower.size()-higher.size() >= 2){
        higher.push(lower.top());
        lower.pop();
    }
}

int median(priority_queue <int> lower, priority_queue <int, vector <int>, greater <int> > higher){
    if(lower.size() == higher.size()){
        return (lower.top()+higher.top())/2;
    }
    else{
        if(higher.size()>lower.size()){
            return higher.top();
        }
        else{
            return lower.top();
        }
    }
}

vector <int> get_med(int a[], int n){
    priority_queue <int, vector <int>,  greater <int> > higher;
    priority_queue <int> lower;
    vector <int> out(n);
    for(int i = 0; i < n; i++){
        addNum(lower, higher, a[i]);
        reBalance(lower, higher);
        out[i] = median(lower, higher);
    }
    return out;

}

int main(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    vector <int> ans = get_med(a, n);
    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
    
    
}