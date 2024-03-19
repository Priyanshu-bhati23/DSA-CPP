#include<iostream>
using namespace std;

void update(int &n){
    n++; // new memory is not allocated .. it is pointing towrds memory in main function
}



int main(){
    
      int i=5;
      int &j=i;//creatig a refernce variable
      j++; //i++ will worj too
      cout<<i<<" -- "<<j<<endl;

//why do we need refernce  variable 

//initiallhy passs by value;
int n=7;
// cout<<"before "<<n<<endl;
// update(n);
// cout<<"after  "<<n<<endl;

//pass by  refernce 
cout<<"before "<<n<<endl;
update(n);
cout<<"after  "<<n<<endl;




}