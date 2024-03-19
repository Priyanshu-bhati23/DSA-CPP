#include<iostream>
using namespace std;
int main(){
    //using while loop to 


    // print numbers  from 1 to n;
    // int i=0;
    
    // while(i<11){
    //     cout<<i<<endl;
    //     i++;


    // }

//FIND SUM FROM ONE TO N;

// int i=1;
// cout<<"enter the value of n"<<endl;
// int n;
// cin>>n;
// int sum=0;
// while(i<=n){
//     sum=sum+i;
//     i++;
// }
// cout<<sum;


//FIND SUM OF ALL EVEN NUMBERS FROM 1 TO N;

// 


//FARHENITE TO CELSIUS

// cout<<"enter the temp in celsius"<<endl;
// int c;
// cin>>c;
// cout<<"enter the temp in farhenite is "<<endl;
// int f=((9*c)/5) + 32;
// cout<<f<<endl; 

//PRIME OR NOT;


cout<<"enter  a number"<<endl;
int num;
cin>>num;
int count=0;
for(int i=2;i<num;i++){
    if(num%i!=0){
    count++;
    }
    }
   if(count==num-2){
    cout<<"the number is prime"<<endl;

   }
   else{
    cout<<"the number is not prime"<<endl;
   }
}





