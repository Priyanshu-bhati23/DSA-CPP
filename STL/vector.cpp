#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a;  //initializing a vector
vector<int>b(5,1); 
for(int i:b){
    cout<<i<<" ";
}
cout<<endl;
vector<int>last(b); 
for(int i:last){
    cout<<i<<" ";
}
cout<<endl;

cout<<"capacity-->"<<a.capacity()<<endl;

a.push_back(1);
cout<<"capacity-->"<<a.capacity()<<endl;

a.push_back(2);
cout<<"capacity-->"<<a.capacity()<<endl;

a.push_back(3);
cout<<"capacity-->"<<a.capacity()<<endl;

a.push_back(4);
cout<<"capacity-->"<<a.capacity()<<endl;

a.push_back(5);
cout<<"capacity-->"<<a.capacity()<<endl;

cout<<"size of elements are:"<<a.size()<<endl;
//to interate the vector

for(int i:a){
    cout<<i<<" ";
}

}