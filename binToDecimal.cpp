#include <iostream>
using namespace std;

	int binToDecimal(int binNum){
	int ans = 0;
	int  pow = 1;
	 while(binNum > 0) {
	 int rem = binNum % 10; //seprate last digit as remainder
	 ans = ans + rem * pow ; //
	binNum = binNum / 10 ; //remove  last digit  as quotient
	 pow = pow * 2 ;
		}
	return ans;
		}
	int main() {
		cout<<binToDecimal(1010)<<endl;
		return 0;
	}
