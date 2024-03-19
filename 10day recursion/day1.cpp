#include<iostream>
using namespace std;

int factorial(int n)  // printing factorial usingf recursion

{

if(n==0||n==1) return 1;
return n * factorial(n-1);


}

int power_of2(int n) //printing power of 2 using recursion
{


if(n==0) return 1;
return 2 * power_of2(n-1);


}

void print(int n)//printing backwards
{

if(n==0) return;
cout<<n<<endl;
print(n-1);



} 




void print2(int n)//printing forward
{

if(n==0) return;
print2(n-1);
cout<<n<<endl;



} 


int main(){
cout<<"enter the number to be factorial"<<endl;    
int n;
cin>>n;
int ans=factorial(n);
cout<<"the factorial is "<<ans<<endl;
int poweris=power_of2(n);
cout<<"the power of 2 is "<<poweris<<endl;

print(n);
print2(n);




}