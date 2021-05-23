#include<iostream>
#include<cstring> 
using namespace std;
int main(){
	int i,j,k; 
    char a[25];
	cin >> a;
	int n=strlen (a); 
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << a[i] << a[j] << " ";
			for (k=0;k<n;k++){
				cout  << a[i] << a[j] << a[k] <<" ";
			} 
		} 
	} 
	return 0; 
	
} 
