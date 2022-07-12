#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;
    //we can aslo rigth this formula in this way.
    //mid = start + (end - start)/2;

    while(start<=end){
        
        if(arr[mid]==key){
            return mid;
        }
        if(key>mid){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = (start+end)/2;
        //mid = start + (end - start)/2;
    }
    return -1;

}



int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,7,11,14,16};

    int evenindex = BinarySearch(even, 6,12);
    cout<<"index of 12 is "<<evenindex<<endl;

    cout<<endl;

     int oddindex = BinarySearch(odd, 5,16);
    cout<<"index of 16 is "<<oddindex<<endl;
}