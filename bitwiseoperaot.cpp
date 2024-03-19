#include<iostream>
using namespace std;
int main(){
    // int a=3;
    // int b=2;
    // int c=a&b;
    // cout<<"and operation;"<<c<<endl;
    // int d=a|b;
    // cout<<" oroperation"<<d<<endl;
    // int e=~a;
    // cout<<" not a operation"<<e<<endl;
    // int f=~b;
    // cout<<" not boperation"<<f<<endl;
    // int g=a<<2;
    // cout<<" left shift a operation"<<g<<endl;
    // int h=a>>1;
    // cout<<" right shift a operation"<<h<<endl;

    //PRE AND POST INC OR DECRE

    int a=2;
    int b=a++;
    cout<<"post increment:"<<b<<endl;
     int f=++a;
     cout<<"print increment:"<<f<<endl;
    int c=3;
    int d=c--;
    cout<<"post decrement :"<<d;
    int e=--c;
    cout<<"pre decrement:"<<e;
}