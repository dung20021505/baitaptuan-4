# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
   int sapxep(int a[],int n)
   {
   	    int i,j,temp;
   	    for ( i=0; i<n; i++){
	        for ( j=i+1; j<n; j++){
	            if(a[i]>a[j]){
	                 temp = a[i];
	                a[i] = a[j];
	                a[j] = temp;
	            }
	        }
	    }
	    for ( i=0; i<n; i++){
	        cout << a[i] << " ";
	    }
	    return 0;
	}
	int main(){
//	A.
		srand (time(NULL));
   	    int i,j,temp; 
	    int a[10];
	    for ( i=0; i<10; i++){
	        a[i] = rand ()%100 +1;
	    }
	    cout << "A : " ;
		sapxep(a,10);
//  B.
        int b[1]; 
		b[0]= rand ()%100 +1;
		cout << endl << "B : "; 
        sapxep(a,1);
//  D.
  	    int d[100];
	    for ( i=0; i<100; i++){
	        d[i] = rand ()%100 +1;
	    }
	    cout << endl << "D : " ;
		sapxep(d,100);
//  E.
        int e[5]={3,5,7,8,19};
        cout << endl << "E : " ;
		sapxep(e,5);  
//  F.
        int f[5]={25,12,8,6,2};
        cout << endl << "F : " ;
		sapxep(f,5);  
		return 0; 
	}
