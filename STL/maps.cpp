#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string>m;
    m[1]="akshita";
    m[2]="priyanshu";
    m[12]="priyanshubhati";
    m[3]="priyaashi";
    m[4]="akansh";
    m.insert({5,"bheem"});
    m.insert({6,"arjun"});
    m.insert({7,"kaarn"});
     
cout<<"size of map is-->"<<m.size()<<endl;
//ordered maps are sorted
    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }

    cout<<"finding 12-->"<<m.count(12)<<endl;

    m.erase(12);
    cout<<"after erase"<<endl;
cout<<"size of map is-->"<<m.size()<<endl;
  for(auto i:m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }
/////O(logn)

auto it=m.find(5);
for(auto i=it;i!=m.end();i++)
{
cout<<(*i).first<<(*i).second<<endl;
}


}
