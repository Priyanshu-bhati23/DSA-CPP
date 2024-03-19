#include<iostream>
using namespace std;

int main(){

//using  pointers in arrays

int arr[4]={123,124,125,126};

int* p=arr;  //using pointer to store addresss of array
cout<<" address of arr is is "<<arr<<endl;
cout<<" address of arr is is "<<&arr<<endl;
cout<<" address of arr is is "<<p<<endl;


//accessing elemnets of array using pointer;
cout<<"firs telement of arr"<<arr[0]<<" - "<<*p<<endl;
cout<<"SECND telement of arr"<<arr[1]<<" - "<<*(p+1)<<endl;
cout<<"third  telement of arr"<<arr[2]<<" - "<<*(p+2)<<endl;
cout<<"fourth  telement of arr"<<arr[3]<<" - "<<*(p+3)<<endl;

//general formula
//arr[i]=*(p+i);
cout<<"size of pointer-"<<sizeof(p)<<endl;
cout<<"size of arr-"<<sizeof(arr)<<endl;

//symbol table content cannot be changed;

//arr++; not posiible 

//now changing the values using poiuntersl

/*cout<<"firs telement of arr"<<arr[0]<<" - "<<(*p)++<<endl;
cout<<"SECND telement of arr"<<arr[1]<<" - "<<(*(p+1))++<<endl;
cout<<"third  telement of arr"<<arr[2]<<" - "<<(*(p+2))++<<endl;
cout<<"fourth  telement of arr"<<arr[3]<<" - "<<(*(p+3))++<<endl; */

int *b=&arr[0];
(*b)++;
cout<<*(b)<<endl;
cout<<arr[0]<<endl;




//  A BIT CHANGE IN TERMS OF CJAR ARRA

char crr[6]="abcde";
cout<<crr<<endl; //prints the whole string

char *c=&crr[0];
cout<<c<<endl; //prints the entire string


//implementation of cout is is difff in char and int
char temp='z';
char *t=&temp;
cout<<t<<endl;  //it will run till null char is found;




return 0;
}