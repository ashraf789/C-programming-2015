#include<iostream>
using namespace std;
int main(){

    int arr[5] = {0,2,6,3,9};
    int searchingNumber;
    int n=5;//n == size of array
    int i = 0;
    int numberFound = 0;

    cout<<"Please enter your number that you are looking for \t";
    cin>>searchingNumber;

    while(i<n){
        if(arr[i]==searchingNumber){
            numberFound = 1;
            break;
        }
        i++;
    }

    if(numberFound){
        cout<<"Number found at possition: "<<arr[i];
    }else
        cout<<"Number not found on array";

    return 0;
}


