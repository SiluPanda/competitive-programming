#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

struct box{
    int ball;
    int col;
};

bool comp(box A, box B){
    return A.ball < B.ball;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >> m;
        box a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i].ball;
            a[i].col = i%m;
        }

        sort(a, a+n, comp);
        int F[m];
        memset(F, 0, sizeof(F));
        int ans = 2e9;
        int r = 0;
        int cnt = m;
        for(int l = 0; l < n; l++){
            while(r < n && cnt > 0){
                cnt -= (F[a[r].col] == 0);
                F[a[r].col]+=1;
                r++;
            }
            if(cnt == 0){
                ans = min(ans, a[r-1].ball-a[l].ball);
            }
            F[a[l].col]--;
            cnt += (F[a[l].col] == 0);
        }
        cout << ans << endl;

    }
}