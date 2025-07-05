#include <iostream>
using namespace std;

        int sumofDigit(int num) {
         int digSum = 0;

        while(num>0) {
        int lastDigit = num%10; //1) isse last digit milegi 4) new number ready  5) and the cycle goes on
        num = num/10; //2) isse last wali digit hat jaygi
        digSum=digiSum+lastDigit; //3) last digit add ho jaygi  
        }
        return digSum;
        }                                                                                  int main() {
                cout << "sum = " << sumofDigit(364) << endl;

        return 0;
        }

