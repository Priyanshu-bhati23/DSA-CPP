#include<iostream>
#include<string>
using namespace std;

// basic reaching home.

// void home(int src,int dest)
// {
// cout<<"source is"<<src<<" "<<"destination is "<<dest<<endl;
// if(src==dest) cout<<"ghar pahuch gaya";
// else home(src+1,dest);
// }

// climbing stair homework

// say digits

void saydigits(string arr[], int n) {
    if (n == 0) {
        cout << " ";
        return;
    }
    int digit = n % 10;
    
    n = n / 10;
    saydigits(arr, n);
    cout << arr[digit] << " ";
}

int main() {
    // int src;
    // cin>>src;
    // int dest;
    // cin>>dest;
    // home(src,dest);

    int digit;
    cout << "enter the digit" << endl;
    cin >> digit;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigits(arr, digit);

    return 0;
}
