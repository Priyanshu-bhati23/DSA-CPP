#include<iostream>
#include<vector>
using namespace std;
int main(){
//     vector<int> v;
//     cout<<"size-->"<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"size is-->"<<v.capacity()<<endl;
//         v.push_back(1);
//     cout<<"size is-->"<<v.capacity()<<endl;

//     v.push_back(2);
//     cout<<"size is-->"<<v.capacity()<<endl;

//     v.push_back(3);
//     cout<<"size is-->"<<v.capacity()<<endl;

//     v.push_back(4);
//     cout<<"size is-->"<<v.capacity()<<endl;

//     v.push_back(5);
//     cout<<"size is-->"<<v.capacity()<<endl;

//     v.push_back(6);
//     cout<<"size is-->"<<v.capacity()<<endl;

//     cout<<"First element"<<v.front()<<endl;
// cout<<"last element"<<v.back()<<endl;
// cout<<"at element 2 \n" <<v.at(2)<<endl;

//     cout<<"before pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;


// v.pop_back();

// cout<<"after pop"<<endl;
// for(int i:v){
//     cout<<i<<"";
// }

vector<int> b;
for(int i=0;i<5;i++){
int data;
cin>>data;
b.push_back(data);

cout<<"element at "<<i<<" "<<"is"<<b.at(i)<<endl;
}

cout<<"elements of vector are"<<endl;
for(int i:b){
    cout<<i<<" ";
}cout<<endl;
cout<<"the size of vector is"<<b.size()<<endl;
cout<<"the capacity of vector is"<<b.capacity()<<endl;




}