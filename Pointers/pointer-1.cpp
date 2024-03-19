#include<iostream>
using namespace std;
int main(){

/* double  a=5;
double *p=&a;
cout<<"value of a is "<<a<<endl;
cout<<"value of a is "<<*p<<endl;
cout<<"adress of a is "<<p<<endl;
//Pointers Arithmatic
cout<<"icreasing of a is "<<(*p)+1<<endl;//value of a remains same;
cout<<"icreasing of a is "<<a<<endl;

//size of pointers
cout<<"size of pointers is-"<<sizeof(p);


*/ // int *p; never create  apointe rlike this otherwise it may have  a adress which may not be present in memory
//alwasy use int *p=0;



//re writing the addresss 

int i=5;
int* p=0;//initalising with zero
p=&i;
cout<<"adress of i"<<p;
cout<<"addres of i"<<&i;

cout<<endl;
cout<<"value of i"<<(*p)<<endl; //refrernce opertaion
cout<<"value of i is"<<i<<endl; 

i++;
cout<<"only chnagig the value of i -"<<(*p)<<"-"<<i;
(*p)++;


cout<<"only chnagig the value of i-"<<(*p)<<"  -  "<<i<<endl;;

p++;//if the address p pointed was 101 then now it points towads the 104 if int;

cout<<p<<endl;

//coding ninja documentation





    return 0;
}