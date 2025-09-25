#include<iostream>
#include<vector>
using namespace std;
	int singleElement(vector<int> &vec){
	for(int i=0; i<vec.size()-1; i=i+2){
	if(vec[i]!=vec[i+1]){
	 return vec[i];
	}
	}
	return vec.back();	
	}
	
 	int main(){
	vector <int> vec={1,1,2,3,3,4,4,5,5};
	cout<<singleElement(vec)<<endl;
	}
