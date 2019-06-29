#include <bits/stdc++.h>
using namespace std;


bool aintowed(int x, int y, int n){
	return ((x <= n-1) && (x >= 0)) && ((y <= n-1) && (y >= 0)) ;
}

int main(){
	int n, k;
	cin>>n>>k;
	int qx, qy;
	cin>>qx>>qy;
	qx--;
	qy--;
	bool board[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			board[i][j] = 1;
		}
	}
	for(int i = 0; i < k; i++){
		int x, y;
		cin>>x>>y;
		board[x-1][y-1] = 0;
	}
	int ans = 0;
	//case: up
	int i1 = qx+1, j1 = qy;
	while(aintowed(i1, j1, n) && board[i1][j1]){
		ans += 1;
		i1++;
	}
	//case: down
	int i2 = qx-1, j2 = qy;
	while(aintowed(i2, j2, n) && board[i2][j2]){
		ans += 1;
		i2--;
	}
	//case: left
	int i3 = qx, j3 = qy-1;
	while(aintowed(i3 , j3, n) && board[i3][j3]){
		ans += 1;
		j3--;
	}
	//case: right
	int i4 = qx, j4 = qy+1;
	while(aintowed(i4, j4, n) && board[i4][j4]){
		ans += 1;
		j4++;
	}
	//case: NE
	int i5 = qx+1, j5 = qy+1;
	while(aintowed(i5, j5, n) && board[i5][j5]){
		ans += 1;
		i5++;
		j5++;
	}

	//case: NW
	int i6 = qx+1, j6 = qy-1;
	while(aintowed(i6, j6, n) && board[i6][j6]){
		ans += 1;
		i6++;
		j6--;
	}
	//case: SE
	int i7 = qx-1, j7 =  qy+1;
	while(aintowed(i7, j7, n) && board[i7][j7]){
		ans += 1;
		i7--;
		j7++;
	}
	//case: SW
	int i8 = qx-1, j8 = qy-1;
	while(aintowed(i8, j8, n) && board[i8][j8]){
		ans += 1;
		i8--;
		j8--;

	}

	cout << ans << endl;

}