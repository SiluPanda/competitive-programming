#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define el "\n"

string fun(int a[], int n, int x){
    string yes = "YES", no = "NO";
    sort(a, a+n);
    int low = 0, high = n-1;
    while(low < high){
        int sum = a[low] + a[high];
        if(sum == x) return yes;
        else if(sum < x) low++;
        else high--;
    }
    return no;
}

int main(){
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout << fun(a, n, x) << endl;
}