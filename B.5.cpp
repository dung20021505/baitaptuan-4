#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin >> n;
	int a[10000];
	for (i=0;i<n;i++){
		cin >> a[i] ;
	} 
	for (i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==-a[j]){
				cout << a[i] << " "<<a[j] << endl; 
			} 
		}
	} 
	return 0; 
} 
