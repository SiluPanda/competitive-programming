#include <bits/stdc++.h>
using namespace std;


bool deepak(int x, int y, int n){
	return ((x <= n-1) && (x >= 0)) && ((y <= n-1) && (y >= 0)) ;
}

int main(){
	int n, k;
	cin>>n>>k;
	int xvalue, yvalue;
	cin>>xvalue>>yvalue;
	xvalue-=1;
	yvalue-=1;
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
	int output = 0;
	
	int i1 = xvalue+1, j1 = yvalue;
	while(deepak(i1, j1, n) && board[i1][j1]){
		output += 1;
		i1++;
	}
	
	int i2 = xvalue-1, j2 = yvalue;
	while(deepak(i2, j2, n) && board[i2][j2]){
		output += 1;
		i2--;
	}
	
	int i3 = xvalue, j3 = yvalue-1;
	while(deepak(i3 , j3, n) && board[i3][j3]){
		output += 1;
		j3--;
	}
	
	int i4 = xvalue, j4 = yvalue+1;
	while(deepak(i4, j4, n) && board[i4][j4]){
		output += 1;
		j4++;
	}
	
	int i5 = xvalue+1, j5 = yvalue+1;
	while(deepak(i5, j5, n) && board[i5][j5]){
		output += 1;
		i5++;
		j5++;
	}

	
	int i6 = xvalue+1, j6 = yvalue-1;
	while(deepak(i6, j6, n) && board[i6][j6]){
		output += 1;
		i6++;
		j6--;
	}
	
	int i7 = xvalue-1, j7 =  yvalue+1;
	while(deepak(i7, j7, n) && board[i7][j7]){
		output += 1;
		i7--;
		j7++;
	}
	
	int i8 = xvalue-1, j8 = yvalue-1;
	while(deepak(i8, j8, n) && board[i8][j8]){
		output += 1;
		i8--;
		j8--;

	}

	cout << output << endl;

}