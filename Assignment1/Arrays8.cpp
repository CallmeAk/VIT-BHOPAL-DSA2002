// A program to delete duplicate element from an array
#include <iostream>
using namespace std;

void removeDuplicate(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]==arr[i]) arr[j]= -1;
        }
        
    }
    
}
void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}

void showArray(int array[],int usize){
    for (int i = 0; i < usize ; i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout<<"Enter the Elements of the array below - "<<endl;
    getarray(array,size);

    removeDuplicate(array, size);

    cout<<"Array after deletion [ "; showArray(array,size); cout<<"]"<<endl;

    return 0;
}