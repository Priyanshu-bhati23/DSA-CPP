#include<iostream>
using namespace std;

// int getsum(int arr[],int n){ // this arr[] is actually *arr

// int sum=0;

// for(int i=0;i<n;i++){

// sum=arr[i]+sum;


// }
// return sum;


// }


void update(int **p2){

//p++;//no affect 
(*p2)++;
//**p=**p+1// no affect

}

int main(){

/*int arr[5]={1,2,45,6,7};
int sum=getsum(arr+3,5);
cout<<"sum is"<<sum; */

int i=5;
int *p=&i; 
int **p2=&p; 

cout<<" before "<<i<<endl;
cout<<" before "<<*p<<endl;
cout<<"before"<<*p2<<endl;
update(p2);

cout<<" after  "<<i<<endl;
cout<<" after  "<<(*p)<<endl;
cout<<"after "<<(*p2)<<endl;

}