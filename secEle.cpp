#include<iostream>
#include<vector>
using namespace std;
    int getSecondLargest(vector<int> &arr) {
        int sz=arr.size();
        int maxEle=INT_MIN;
        int maxEle2=INT_MIN;
        for(int i=0; i<sz; i++){
            maxEle=max(arr[i],maxEle);
        }
	for(int i=0; i<sz; i++){
	if(arr[i]!=maxEle){
	maxEle2=max(maxEle2,arr[i]);
	}
	 } 
	  return maxEle2;
	
	 }
	int main() {
	//vector <int> arr={34,25,8,7,2,15};
	vector<int> arr = {53,87,56,23,12,88};
	int maxarr = getSecondLargest(arr);
	cout<<"dshhsd   "<<maxarr<<endl;
	
	  }

