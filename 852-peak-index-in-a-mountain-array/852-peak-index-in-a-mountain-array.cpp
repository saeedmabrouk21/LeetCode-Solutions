class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1  ;
        int end = arr.size()-2;
        int mid;
        while(start<=end){
            mid = start + (end - end)/2;
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