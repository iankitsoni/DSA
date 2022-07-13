#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;

    while(start<end){

        if(arr[mid]>=arr[0])
        {
            start = mid+1;
        }
        else{
            end= mid;
        }
        mid = start + (end-start)/2;

    }
    return start;
    //we can also return end;
}

int main(){

    int arr[5] = {3,8,1,10,17};
    int pivot = getPivot(arr, 5);
    cout<<"Pivot is "<<pivot<<endl;
    
}