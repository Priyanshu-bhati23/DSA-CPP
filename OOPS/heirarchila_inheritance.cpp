#include<iostream>
using namespace std;


//heirarchial

class A{

public:
void func1(){

    cout<<"inside function 1"<<endl;

}


};

class B: public A{
public:
void func2(){
    cout<<"inside function 2"<<endl;
}

};

class C: public A{

    public:
    void fun3(){
        cout<<"inside func 3"<<endl;
    }
};

int main(){

A object1;
object1.func1();
B object2;
object2.func1();
object2.func2();
// object2.func3();  //this will generate an error
C  object3;
object3.func1();
object3.fun3();


}