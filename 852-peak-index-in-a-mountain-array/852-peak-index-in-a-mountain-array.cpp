class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1  ;
         int end = arr.size()-2;
        while(start<=end){
            int mid = (start + end)/2;
            // if(mid == 0 ){
            //     start  = mid +1;
            //     continue;
            // }
            //  if(mid == arr.size ){
            //     start  = mid +1;
            //     continue;
            // }
            if(arr[mid-1]<arr[mid]&& arr[mid+1]<arr[mid])
                return mid;
            if (arr[mid-1]>arr[mid]&& arr[mid+1]<arr[mid]  ){
                end=mid-1;
            }else if(arr[mid-1]<arr[mid]&& arr[mid+1]>arr[mid]){
                start = mid+1;
            }
            
        }
        return 0;
    }
};