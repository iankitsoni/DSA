class Solution {
public:
    
    int binarySearch(int n){
       int start = 0;
        int end = n;
        long long int mid = start +(end-start)/2;
        int ans = -1;
        
        while(start<=end){
            long long int square = mid*mid;
            if(square == n)
            return mid;
                
            if(square< n){
                ans = mid;
                start = mid +1;
            }
            else
            {
                end = mid -1;
            }
            mid = start +(end-start)/2;
        }
        
        return ans;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};

//Leetcode Question
