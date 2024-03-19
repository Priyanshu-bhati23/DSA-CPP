#include<iostream>
#include<deque>
using namespace std;
int main(){

deque<int> d;


for(int i=0;i<5;i++){
    int data;
cin>>data;
d.push_back(data);
    cout<<"element at "<<i<<"is"<<d.at(i)<<endl;
}

for(int i:d){
    cout<<i<<" "<<endl;
}

d.pop_back();
for(int i:d){
    cout<<i<<" ";
}

cout<<"empty or not"<<d.empty()<<endl;

cout<<"before erase"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);

cout<<"after erase"<<d.size()<<endl;
for(int i:d){
    cout<<i<<" ";
}



}