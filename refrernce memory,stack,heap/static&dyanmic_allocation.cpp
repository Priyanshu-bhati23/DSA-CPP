
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];//bad practice 

//as the size of arr may exceed the sorage in stack that when we use heap

//To access heap memory


char *ch=new char;//memory allocated wil be 4 in stack and 1 in heap
int *i=new int;// memory allocated will be 4 in stack and 4 in heap


int *arr=new int[5];//mmeory alloctaed in stack will be 4 bytes and 5*4=20 bytes in heap



return 0;
