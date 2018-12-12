#include<iostream>
using namespace std;
int main(){

    int arr[5] = {0,2,3,6,9};
    int searchingNumber;
    int numberFound = 0;
    int left,right,mid;
    int n = 5;
    left = 0,right = n-1;

    cout<<"Please enter your number that you are looking for \t";
    cin>>searchingNumber;

    while(left <= right){

        mid = (left+right)/2;
        if(arr[mid] == searchingNumber){
            numberFound = 1;
            break;
        }

        if(arr[mid] < searchingNumber) left = left + 1;
        else right = right-1;
    }

    if(numberFound) cout<<"number found at possition "<<mid;
    else cout<<"number not found";
    return 0;

}
