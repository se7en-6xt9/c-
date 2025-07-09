#include <iostream>
using namespace std;

 	int main() {
	int nums[] = { 5,23,45,23,5 };
	int size = 6;
	int smallest = INT_MAX;
	int largest = INT_MIN;
	   // This is method 1 ro find smallest number 
	// for(int i=0; i<size; i++) {
	//	if(nums[i] < smallest) {
	//	smallest = nums[i];
	//	}
//	}
	//	cout<<"smallest " <<smallest<<endl;
		

		//This is M2 to find smallest
		for(int i=0; i<size; i++) {
    		smallest = min(nums[i],smallest);
		largest =  max(nums[i],largest);
		}
		cout<<smallest<<endl;
		cout<<largest<<endl;
		return 0;
		}
