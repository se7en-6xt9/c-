#include <iostream>
using namespace std;

	int sumofDigit(int num) {
	 int digSum = 0;
	 
	while(num>0) {
	int lastDigit = num%10;
	num = num/10;
	digSum+=lastDigit;
	}
	return digSum;
	}
		int main() {
		cout << "sum = " << sumofDigit(364) << endl;

	return 0;
	}
