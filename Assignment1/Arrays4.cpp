// Write a program to insert an element in an array, at the end.
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
void insertEnd(int* array,int size, int element){
    array[size] = element;
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
    int array[size+1];
    cout<<"Enter the Elements of the array below - "<<endl;
    getarray(array,size);
    int element;
    cout<<"Enter the Element to insert at the end of the array : ";
    cin>>element;
    insertEnd(array,size,element);
    cout<<"Array after insersion [ "; showArray(array,size+1); cout<<"]"<<endl;
return 0;}