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
public:
char breed;

};

class Breed: public Dog{

};


int main(){

    Dog d1;
    d1.speaking();
    cout<<d1.age<<endl;

    Breed B1;
    B1.speaking();
    B1.breed='A';
  


}