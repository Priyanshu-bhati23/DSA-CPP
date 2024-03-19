#include<iostream>
using namespace std;

class Animal{
public:
int age;
int weight;

public:
void speak(){

    cout<<"barking"<<endl;
}
};

class Human{

    public:
    string color;
    public:
    void bark(){
        cout<<"speaking"<<endl;
    }
};

//multiple inheritance


class Hybrid:public Animal,public Human{

};




int main(){

Hybrid obj1;
obj1.speak();
obj1.bark();

    return 0;
}