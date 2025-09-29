#include<iostream>
#include<vector>
 using namespace std;
    int missingNum(vector<int>& arr) {
        int sz = arr.size();
        int sum1=0;
        int sum = ((sz+1)*(sz+2))/2;
        for(int i=0; i<sz; i++){
        sum1=sum1+arr[i];
        }
        int p = sum-sum1;
       return p;
	   }
	int main(){
	//vector<int> arr ={1,2,3,4,5,7};
	vector<int> arr = {1,5,2,3,8,9,7,6};
	int missing = missingNum(arr);
	cout<<"  The missing number is : "<<missing<<endl;
	return 0;
	}
