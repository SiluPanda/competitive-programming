#include <bits/stdc++.h>
using namespace std;

int count0(int a[], int s, int e){
    int c = 0;
    for(int i = s; i <= e; i++){
        if(a[i] == 0){
            c++;
        }
    }
    
    return c;
}

int count1(int a[], int s, int e){
    int c = 0;
    for(int i = s; i <= e; i++){
        if(a[i] == 1){
            c++;
        }
    }
    
    return c;
}
int maxLen(int a[], int n)
{
    int i = 0; int j = n-1;
    
    while(i < j){
        int c0 = count0(a, i , j);
        int c1 = count1(a, i, j);
        if(c0 == c1){
            return j-i+1;
        }
        else{
            if(c0 > c1){
                if(a[i] == 0){
                    i++;
                }
                else if(a[j] == 0){
                    j--;
                }
            }
            
            else if(c0 < c1){
                if(a[i] == 1){
                    i++;
                }
                else if(a[j] == 1){
                    j--;
                }
            }
        }
    }
        
}


int main(){
	int t; cin>>t;
	float time = clock();
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin>>a[i];
		}

		cout<<maxLen(a,n)<<endl;
	}

	cout<<clock() -time<<endl;
}