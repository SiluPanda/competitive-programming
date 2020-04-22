#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector <int> cords(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> cords[i];
        sum += cords[i];
    }
    int med1 = sum/n, med2 = sum/n + 1;
    int stamina1 = 0, stamina2 = 0;
    for(auto x : cords){
        stamina1 += (x-med1) * (x-med1);
        stamina2 += (x-med2) * (x-med2);
    }
    cout << min(stamina2, stamina1) << endl;

}