// A program to reverse an array
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
void reverseArray(int* array,int size){
    int temp;
    for (int i = 0; i < size/2 ; i++)
    {
        temp = array[i];
        array[i] = array[size-i-1];
        array[size-i-1] = temp;
    }
}
void showArray(int array[],int usize){
    for (int i = 0; i < usize ; i++)
    {
        cout<<array[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size];
    cout<<"Enter the Elements of the array below - "<<endl;
    getarray(array,size);
    reverseArray(array,size);
    cout<<"Array after reversal [ ";showArray(array,size);cout<<"]"<<endl;
return 0;}