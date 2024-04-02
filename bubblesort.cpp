#include<iostream>

using namespace std;
void sort(int arr[],int n){
    int i,j;
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100],i,j,n;
    
    cout<<"enter the size of the array = ";
    cin>>n;
    
    cout<<"enter the elements of the array = "<<"\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
    print(arr,n);
    
    
}