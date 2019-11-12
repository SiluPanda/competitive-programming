#include <bits/stdc++.h>
using namespace std;

vector <int> lar(vector <int> a, int k){
    int n = a.size();
    int i = 0;
    unordered_map <int, int> M;
    for(int i = 0; i < n; i++){
        M[a[i]] = i;
    }
    while(i < n && k > 0){
        if(a[i] != n-i){
            int ind = M[n-i];
            M[a[i]] = ind;
            M[n-i] = i;
            swap(a[i], a[ind]);
            //print(a);
            k--;
        }
        i++;
    }
    return a;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector <int> ans = lar(a, k);
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;

}