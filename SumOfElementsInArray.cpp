#include<iostream>
using namespace std;
int SumOfElementsInArray(int arr[], int n){
    int sum = 0;
     for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    return sum;
}
int main()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin >> size;
    int arr[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int AdditionOfArray = SumOfElementsInArray(arr, size);
    cout<<"Addition of the array: "<< AdditionOfArray <<endl;
    return 0;
}