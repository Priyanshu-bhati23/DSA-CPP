#include<iostream>
#include<queue>

using namespace std;
int main(){
queue<string> q;
q.push("ram");
q.push("balram");
q.push("shyam");

q.pop();
cout<<"the size after  is"<<q.size()<<endl;
cout<<"first element   is"<<q.front()<<endl;
q.pop();
cout<<"the size after  is"<<q.size()<<endl;
cout<<"first element   is"<<q.front()<<endl;



}