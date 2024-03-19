#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    
    int arr[] = {1, 3, 4, 2,3, 7, 8, 9};
    stable_sort(begin(arr), end(arr));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
        
        
    }
    cout<<endl;
    
      for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
       if(arr[i]==arr[i+1]){
        cout<<arr[i];
               }
        
    }


    return 0;
}
