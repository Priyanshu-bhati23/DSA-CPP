#include<iostream>
#include<stack>

using namespace std;
int main(){

stack<string> s;
s.push("love");
s.push("baabar");
s.push("kumar");

s.pop();
cout<<"Top Elememt-->"<<s.top()<<endl;


}