#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    map <int, int> F;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        F[num]++;
    }
    if(F.size() == n){
        cout << "YES";
    }
    else cout << "NO";
    cout << endl;

}