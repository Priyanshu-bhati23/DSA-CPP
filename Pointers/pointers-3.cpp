#include<iostream>
using namespace std;
int main(){
//double pointers

int value=5;
int  *ptr=&value;
int **ptr2=&ptr;
cout<<"value of value "<<value<<endl;
cout<<"value of  value "<<*ptr<<endl;
cout<<"value of value "<<**ptr2<<endl;

cout<<"address of value "<<&value<<endl;
cout<<"addressof  value "<<ptr<<endl;
cout<<"addressof value "<<*ptr2<<endl;


}