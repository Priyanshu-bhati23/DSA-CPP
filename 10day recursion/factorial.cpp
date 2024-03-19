#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}


int main(){
    cout<<"ente rteh number whos efactorial is to be calculated"<<endl;
    int n,fact;
    cin>>n;
    fact=factorial(n);
    cout<< " factorial is "<<fact<<endl;


}