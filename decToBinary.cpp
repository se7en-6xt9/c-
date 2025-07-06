#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0;
    int pow = 1;
    while (decNum > 0) {
        int rem = decNum % 2;
        decNum = decNum / 2;     // Correctly update original decNum
        ans = ans + (rem * pow); // Accumulate binary number
        pow = pow * 10;          // Move to next binary digit
    }
    return ans; // Binary as integer (not string)
}

int main() {
    for(int i=1;i<11;i++){
    cout << decToBinary(i) << endl;
		}
    return 0;
}
