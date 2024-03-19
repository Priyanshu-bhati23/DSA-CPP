#include<iostream>
#include<list>
using namespace std;
int main(){
list<int> l;
l.push_back(1);
l.push_front(2);
l.push_back(3);
l.push_back(4);

cout<<"after erase"<<endl;
for(int i:l){
    cout<<i<<" ";
}cout<<endl;

l.erase(l.begin());
for(int i:l){
    cout<<i<<" "; 
}cout<<endl;

cout<<"size of list"<<l.size()<<endl;
}
