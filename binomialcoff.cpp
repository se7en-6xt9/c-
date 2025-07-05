#include <iostream>
using namespace std;

	//This code is self  made (10:57 5july25)
	int fact(int n, int r) {
		int f =1;
	for( int i=1; i<=n;i++){
		 f = f*i;
		}
		int r1=1;
	for(int i=1;i<=r;i++) {
		 r1=r1*i;
		 }
	  int o=1;
	for(int i=1;i<=n-r;i++){
		o=o*i;	
			 } 
	
	int final = f/(r1*o);
		return final;
	} 

		int main() {
	
	cout<<fact(6,3)<<endl;
	return 0;
		}
