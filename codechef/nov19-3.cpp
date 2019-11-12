#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

struct cord{
    double x;
    double y;
};

double distance(cord a, cord b){
    return sqrt(pow(a.x-b.x, 2)+pow(a.y-b.y, 2));
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        cord src;
        cin >> src.x >> src.y;
        int n, m, k;
        cin >> n >> m >> k;
        cord A[n], B[m], C[k];
        for(int i = 0; i < n; i++){
            cin >> A[i].x >> A[i].y;
        }
        for(int i = 0; i < m; i++){
            cin >> B[i].x >> B[i].y;
        }
        for(int i = 0; i < k; i++){
            cin >> C[i].x >> C[i].y;
        }
        double AB[n][m], AC[n][k], BC[m][k];
        double P[n], Q[m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                AB[i][j] = distance(A[i], B[j]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                AC[i][j] = distance(A[i], C[j]);
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < k; j++){
                BC[i][j] = distance(B[i], C[j]);
            }
        }
        for(int i = 0; i < n; i++){
            P[i] = distance(src, A[i]);
        }
        for(int i = 0; i < m; i++){
            Q[i] = distance(src, B[i]);
        }
        //goes to A first
        double  min1 = DBL_MAX;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                for(int r = 0; r < k; r++){
                    min1 = min(min1, P[i] + AB[i][j] + BC[j][r]);
                    //cout << min1 << endl;
                }
            }
        }
        double min2 = DBL_MAX;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                for(int r = 0; r < k; r++){
                    min2 = min(min2, Q[i] + AB[j][i] + AC[j][r]);
                }
            }
        }
        cout << fixed << setprecision(9) << min(min1, min2) << "\n";
    }
}