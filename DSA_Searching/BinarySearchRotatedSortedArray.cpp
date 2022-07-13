int getPivot(vector<int>& arr, int size)
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

int binarySearch(vector<int>& arr, int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    
    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
         mid = start + (end-start)/2;
    }
    return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{
   int pivot = getPivot(arr,n);
    if(k>=arr[pivot] && k <= arr[n-1])
    {
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {
        return binarySearch(arr,0, pivot-1, k);
    }
}
//Code Studio code => Search In Rotated Sorted Array
