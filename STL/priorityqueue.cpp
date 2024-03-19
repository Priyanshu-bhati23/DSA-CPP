#include<iostream>
#include<queue>
using namespace std;
//max heap
int main(){
priority_queue<int> maxi;

//min heap
priority_queue<int ,vector<int>,greater<int> > mini;

maxi.push(1);
maxi.push(3);
maxi.push(4);
maxi.push(0);

cout<<"size is-->"<<maxi.size()<<endl;

int n=maxi.size();
for(int i=0;i<n;i++){
    cout<<maxi.top()<<" "; //front element form top
    maxi.pop();
}cout<<endl;

mini.push(1);
mini.push(3);
mini.push(4);
mini.push(0);

cout<<"size is-->"<<mini.size()<<endl;

int m=mini.size();
for(int i=0;i<m;i++){
    cout<<mini.top()<<" ";
    mini.pop();
}cout<<endl;

cout<<"emptyornot"<<mini.empty();
}