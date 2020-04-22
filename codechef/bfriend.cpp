#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        long n, a, b, c;
        cin >> n >> a >> b >> c;
        bool gotit = false;
        vector <long> arr(n);
        long mini = INT_MAX;
        if(b < a) swap(b, a);
        for(long i = 0; i < n; i++){
            cin >> arr[i];
            if(!gotit && (arr[i] <= b && arr[i] >= a)){
                cout << c + b-a << endl;
                gotit = true;
            }
            mini = min(abs(arr[i]-b), min(abs(arr[i]-a), mini));
        }
        if(!gotit){
            //cout << "Okay" << endl;
            cout << 2 * mini + c + abs(a-b) << endl;
        }



    }
}