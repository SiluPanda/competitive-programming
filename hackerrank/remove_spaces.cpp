#include <bits/stdc++.h>
using namespace std;
#define ll long long int

char *remove_spaces(char* str){
	int i = 0, j  = 0;
	
	while(str[i]){
		if(str[i] != ' '){
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return str;
}

int main(){
	char *str;
	cin>>str;
	cout<<remove_spaces(str)<<endl;
}