// A program to search an element from and given array
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
int searchArray(int array[],int size, int element){
    int found = 0;
    for (int i = 1; i < size ; i++)
    {
        found += array[i] == element ? 1 : 0 ;
    }
    return found;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size];
    cout<<"Enter the Elements of the array below - "<<endl;
    getarray(array,size);
    int element;
    cout<<"Enter the Element to search in the array : ";
    cin>>element;
    searchArray(array,size,element);
    cout<<"The element "<<element<<" is found "<< searchArray(array,size,element)<<" times."<<endl;
return 0;}