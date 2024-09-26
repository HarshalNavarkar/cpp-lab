#include<iostream>
using namespace std;
int main()
{
int n;
//input the number elements in the array 
cout<<"Enter the number of element:";
cin>>n;
int arr[n];
//input the element of array 
cout<<"Enter the element of the array:\n";
for(int i=0; i<n; i++)
{
cin>>arr[i];
}

//sorting in ascending order 
for(int i=0; i<n; i++){
for(int j=i+1; j<n; j++){
if(arr[i]>arr[j]){
//swap elements
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
//Display the array sorted in ascending order 
cout<<"\n Array in ascending order:";
for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
cout<<endl;
//sorting in descending order 
for(int i=0; i<n-1; i++){
for(int j=i+1; j<n; j++){
if (arr[i]<arr[j]){
//swap the element 
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
//display the array sorted in descending order 
cout<<"Array in descending order: ";
for(int i=0;i<n;i++)
{
cout<<arr[i]<< " ";
}
cout<<endl;

return 0;
}

