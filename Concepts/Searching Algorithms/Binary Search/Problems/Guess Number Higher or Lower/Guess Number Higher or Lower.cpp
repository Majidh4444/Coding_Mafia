/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int g;
        long long low = 1;
        long long high = n;
        long long mid;
        while(low<=high){
            mid = ((high-low)/2)+low;
            g = guess(mid);
            if(g == 0) return mid;
            else if(g == -1) high = mid-1;
            else low = mid+1;
        }
        return 0;
    }
};
