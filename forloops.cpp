#include <iostream>
using namespace std;




int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
     int sum = 0;
    int prd = 1;

    while (n != 0) {
        int num = n % 10;
        sum = sum + num;
        prd = prd * num;

        n = n / 10;  // Fix: Update the value of n here, not inside the loop
    }

    cout << "The sum is: " << sum << endl;
    cout << "The product is: " << prd << endl;



    return 0;  // Fix: Added a return statement
}
//leetcode question pdf would be given

