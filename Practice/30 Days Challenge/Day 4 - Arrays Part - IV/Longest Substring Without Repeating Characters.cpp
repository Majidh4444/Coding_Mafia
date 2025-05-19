// SLIDING WINDOW  - TIME COMPLEXITY O(2n)
// SPACE COMPLEXITY O(m)   //size of array
// Take array to store the occurences of all the characters
// Iterate over the string till the right pointer reaches the end of the string
// Increment the count of the character present in the right pointer every time
// If the occurence store[r] become more than 1 means the char is repeated
// Reduce the occurence of temp as it might be present ahead also in the string
// Contraction of the present window till the occurence of the 't' char becomes 1
// As the index starts from 0 , ans will be (right pointer-left pointer + 1)
// Find max at every iteration

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int store[256]={0}; 
        int l=0;    //left pointer
        int r=0;    //right pointer
        int ans=0;  //initializing the required length as 0
        
        while(r<s.length()){     
            store[s[r]]++;      
            
            while(store[s[r]]>1){ 
                store[s[l]]--;
                l++;         //
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }