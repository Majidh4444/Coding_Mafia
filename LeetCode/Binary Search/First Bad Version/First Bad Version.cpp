// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        bool g;
        long long low = 1;
        long long high = n;
        long long mid;
        while(low<=high){
            mid = ((high-low)/2)+low;
            g = isBadVersion(mid);
            if(g == false) low = mid+1;
            else{
                if(isBadVersion(mid-1) == false) return mid;
                else{
                    high = mid-1;
                }
            }
        }
        return 0;
    }
};
