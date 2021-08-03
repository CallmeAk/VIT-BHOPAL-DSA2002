#include<iostream>
using namespace std;

int binarySearch(int array[], int left,int right,int element){
    if (right >= left) {
        int mid = (left+right)/2;
        if (array[mid]==element){
            cout<<"The element is found at place "<<mid+1<<endl; return 1;
        }
        else if (array[mid]>element) return binarySearch(array,left,mid-1,element);
        else return binarySearch(array,mid+1,right,element);
    }
    return 0;
}
void getarray(int* array,int size){
    cout<<"Enter the elements of the array below in ascending order "<<endl;
    for (int i = 0; i < size ; i++){
        cin>>array[i];
    }
}
int main(){
    int size; cout<<"Enter size of the array "; cin>>size;
    int array[size];
    getarray(array,size);
    int element; cout<<"Enter element to search in the array "; cin>>element;
    cout<<"Using Binary Search to find the element"<<endl;
    if (!binarySearch(array,0,size-1,element)) cout<<"The element is not found"<<endl;;  
return 0;}