#include<iostream>
using namespace std;
//--------------encapsulation-- wrappimg up data memebers and functions in a class
// class Student{
  
//     private:
//     string name;
//     int age;
//     int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
// };



//--------------inheritance--------------

//mode of inheritance

class human{

public:
int height;
int weight;
int age;
public:   //base class membeer specifier 

//provate memeber of any class cannot be inherited.
int getAge(){
    return this->age;
}
void setWeight(int w) {
    this->weight=w;
}
};

class Male: private human{// inheriting in public mode
//protected can be used inside the  child class
//private
public:
string color;

void sleep(){

    cout<<"MALE SLEEPING"<<endl;

}

int settheight(int h){
 this->height=h;
}

int gettheight()
{
   return  this->height;
}


};




int main(){


Male m1;
m1.settheight(77);
cout<<m1.gettheight()<<endl;




// Student fist;

/*Male object1;
cout<<object1.age<<endl;
cout<<object1.weight<<endl;
cout<<object1.height<<endl;

cout<<object1.color<<endl;

object1.setWeight(84);
cout<<object1.weight<<endl;
object1.sleep();


cout<<object1.color<<endl;
cout<<"sab badiya"<<endl; */



}