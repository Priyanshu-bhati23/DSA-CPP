#include<stdio.h>

void merge(int arr[],int n){


}

void mergesort(int arr[],int n,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
mergesort(arr,n,mid,e);
mergesort(arr,n,s,mid-1);

merge(arr,n);
}







int main(){
    printf(" ente rthe size of an array");
int n;
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("\n the elements in the array are \n");
for(int i=0;i<n;i++){
    printf(" %d ",arr[i]);
}
printf("\n the elements in the array after sorting are \n");
int s=0;
int e=n-1;
mergesort(arr,n,s,e);


}