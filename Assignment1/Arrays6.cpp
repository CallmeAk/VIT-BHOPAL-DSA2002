// A program to delete an element of an array from the beginning
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
void deleteBeginning(int* array,int size){
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i+1];
    }
    array[size-1] = -1;
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
    deleteBeginning(array,size);
    cout<<"Array after deleting [ "; showArray(array,size); cout<<"]"<<endl;
return 0;}