#include<iostream>
using namespace std;
	int main(){
	int n ;
	for(int i=0; i<2*n; i++){
	 for(int j=0; j<2*n; j++){
	  if(i+j==n-1 || i+j==2*i+1){
	   cout<<"*";
	} else{
	cout<<" ";
	}
	}
	cout<<endl;
		}
	}
