// A program to get the largest and smallest number of an array
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
int getlarge(int array[],int size){
    int max = array[0];
    for (int i = 1; i < size ; i++)
    {
        max = array[i]>max ? array[i] : max ;
    }
    return max;
}
int getsmall(int array[],int size){
    int min = array[0];
    for (int i = 1; i < size ; i++)
    {
        min = array[i]<min ? array[i] : min ;
    }
    return min;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size];
    cout<<"Enter the Elements of the array below - "<<endl;
    getarray(array,size);
    cout<<"Largest in the Array is : "<< getlarge(array,size)<<endl;
    cout<<"Smallest in the Array is : "<< getsmall(array,size)<<endl;
return 0;}