#include <bits/stdc++.h>
using namespace std;

struct enemy{
    int power, bonus;
};

bool comp(enemy A, enemy B){
    if(A.power == B.power){
        return A.bonus > B.bonus;
    }
    return A.power < B.power;
}

int main(){
    int s, n;
    cin >> s >> n;
    vector <enemy> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i].power >> arr[i].bonus;
    }
    sort(arr.begin(), arr.end(), comp);
    bool f = true;
    for(int i = 0; i < n; i++){
        if(s <= arr[i].power){
            f = false;
            break;
        }
        else{
            s += arr[i].bonus;
        }
    }
    if(f) cout << "YES";
    else cout << "NO";
    cout << endl;
}