// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1;
        while(start<=n){
            long long int mid = (start+(long long int)n)/2;
            if(isBadVersion(mid)^isBadVersion(mid-1))
                return mid;
            else if(isBadVersion(mid))
                n=mid-1;
            else
                start=mid+1;
    
        }
            return false;

    }
    
};