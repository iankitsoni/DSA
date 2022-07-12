#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){

    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;

        }
        else if(key>arr[mid]){
            start = mid +1;
        }
        else if(key<arr[mid]){
            end = mid -1;
        }
        mid = (start+end)/2;

    }
    return ans;
}

int lastOcc(int arr[], int size, int key){

    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(key >arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = end-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}


int main(){

    int even[6] = {1,2,3,3,5,5};

    int fisrtocc = firstOcc(even, 6, 3);
    int lastocc = lastOcc(even,6,3);

    cout<<"First Occurrence of 3 is at Index " <<fisrtocc<<endl;
    cout<<"Last Occurence of 3 is at Index "<<lastocc<<endl;


}