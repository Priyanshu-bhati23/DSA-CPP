#include<iostream>
using namespace std;
int main(){
    // int a ,b;
    // cout<<"ënter the value of a"<<endl;
    
    // cin>>a;

    // cout<<"ënter the value of b"<<endl;

    // cin>>b;

    // int sum=a+b;
    // cout<<sum;
    // if(sum>=7){  //conditionals if esle if  and else;
    //     cout<<"we are good"<<endl;

    // }

    // else if(0<sum<7){
    //     cout<<"the sum is less than seven and greater than 7"<<endl;
    // }
    // else{
    //     cout<<"we are not good"<<endl;
    // }

  
    char choice;

    cout << "Enter a choice (A, B, C, D): ";   // using switch statement
    cin >> choice;

    switch (choice) {  //uisng switch in cpp;
        case 'A':
        case 'a':
            std::cout << "You chose option A." << std::endl;
            break;

        case 'B':
        case 'b':
            std::cout << "You chose option B." << std::endl;
            break;

        case 'C':
        case 'c':
            std::cout << "You chose option C." << std::endl;
            break;

        case 'D':
        case 'd':
            std::cout << "You chose option D." << std::endl;
            break;

        default:
            std::cout << "Invalid choice." << std::endl;
    }

}

//     No, in C++, the `case` labels within a `switch` statement are not designed to include conditions directly. The `case` labels are meant to represent specific constant values or literals. If you need to use conditions, you should use an `if-else` statement instead.

// Here's an example using `if-else` to compare the sum of two numbers:


// In this example, an `if-else` statement is used to check whether the sum is greater than 0, providing a more straightforward and appropriate structure for this kind of comparison.

 


