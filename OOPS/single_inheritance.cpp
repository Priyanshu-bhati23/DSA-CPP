#include<iostream>
using namespace std;


class Animal{

public:
int age;
int height;

public:
void speaking(){
    cout<<"dog is barking"<<endl;
}

};

class Dog:public Animal{
};

int main(){

    Dog d1;
    d1.speaking();
    cout<<d1.age<<endl;

}