#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int medicine[n], patient[n], visited[n];
    memset(visited, 0, sizeof(visited));
    for(int i = 0; i < n; i++) cin >> medicine[i];
    for(int i = 0; i < n; i++) cin >> patient[i];
    sort(medicine, medicine+n);
    bool isok = 1;
    for(int i = 0; i < n; i++){
        int curr = patient[i];
        for(int j = 0; j < n; j++){
            if(visited[i] == 0 && medicine[j] > curr){
                continue;
            }
            else{
                isok = 0;
                break;
            }
        }
    }
    if(!isok) cout << "No";
    else cout << "Yes";
    cout << endl;
}