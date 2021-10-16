## Dynamic Programming

### 0-1 Knapsack
- [0 - 1 Knapsack Problem](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1)
    - Termination Condition:
        - When weight to fill into bag is zero(w == 0) then return max value as 0
        - When number of remaining items to fill the bag is zero(n == 0) then return max value 0
    - ```cpp
        else if(w>=wt[n-1]) DP[n][w] = max(DP[n-1][w], val[n-1]+DP[n-1][w-wt[n-1]]);
        ```
- [Subset Sum Problem](https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&page=4&query=category[]Dynamic%20Programmingpage4category[]Dynamic%20Programming)
    - Termination Condition(be careful with the order of checking termination condition):
        - When remaining sum is zero(s == 0) then return 1 indicating we got required sum from array
        - When number of elements in array is zero(n==0) return 0 indicating than its not possible without having elements
    - Using for loop get value of below condition
    - ```cpp
        else if(s>=wt[n-1])  DP[n][s] = DP[n-1][s-arr[n-1]] || DP[n-1][s]
        ```
    - return DP[N][sum]
- [Partition Equal Subset Sum Problem](https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1)
    - Same as Subset Sum Problem but check below condition before that.
    - Sum of array numbers should even else we cant divide it equally.
    - If it is even then apply Subset Sum Problem for => sum of array numbers/2.
- [Minimum Sum Partition Problem](https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1)
    - Same as Subset Sum Problem but have to check below condition after implementing Subset Sum loop.
    - After that applying Subset Sum we have to check last row.
    - ```cpp
        int mn = INT_MAX;
	    for(int s=0;s<=sum/2;s++){
	        if(Dp[N][s] == 1) mn = min(mn,(sum-(2*s)));
	    }
        return mn;
        ```
- [Perfect Sum Problem](https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1#)
    - Same as Subset Sum Problem but have to consider below condition in loop
    - ```cpp 
        (DP[n-1][s-arr[n-1]] + DP[n-1][s])
        ````
- [Target Sum Problem](https://leetcode.com/problems/target-sum/)
    - Same as Partition Equal Subset Sum Problem but here we have to make partition with difference between sets equal to target.

### Unbounded Knapsack
- [Unbounded Knapsack Problem](https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1)
    - Same as 0 - 1 Knapsack Problem but we have to keep on taking same value untill weight exceeds
    - ```cpp
        else if(w>=wt[n-1]) DP[n][w] = max(DP[n-1][w], val[n-1]+DP[n][w-wt[n-1]]);
        ```
    - But for 0 - 1 Knapsack Problem
    - ```cpp
        else if(w>=wt[n-1]) DP[n][w] = max(DP[n-1][w], val[n-1]+DP[n-1][w-wt[n-1]]);
        ```
- [Rod Cutting Problem](https://www.techiedelight.com/rod-cutting/)
    - Refer above link for clear explanation.
- [Coin Change](https://practice.geeksforgeeks.org/problems/coin-change2448/1)
    - Termination Condition(be careful with the order of checking termination condition):
        - When remaining value is zero(v == 0) then return 1 indicating we got required value from array
        - When number of elements in array is zero(n==0) return 0 indicating than its not possible without having elements
    - Same as Perfect Sum Problem but follows Unbounded Knapsack Problem condition.
- [Minimum Number of Coins Problem](https://practice.geeksforgeeks.org/problems/number-of-coins1824/1#)
    - Termination Condition(be careful with the order of checking termination condition):
        - When remaining value is zero(v == 0) then return 0 indicating that no more coin needed as required value is collected
        - When number of elements in array is zero(n==1) return INT_MAX-1 indicating we its not possible
    - And it follows below condition
    - ```cpp
        else if(j >= coins[i-1]) DP[i][j] = min(DP[i-1][j], 1+DP[i][j-coins[i-1]]);
        ```

### Longest Common Subsequence
- [Longest Common Subsequence Problem](https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1)
    - Termination Condition:
        - When length of string one or string two is zero then return 0 indicating cant find commong subsequence
    - It follows the condition as:
        - ```cpp
            else if(s1[i-1] == s2[j-1]) DP[i][j] = 1+DP[i-1][j-1]; 
            //when both characters are equal we equate it with value of Longest Common Subsequence of s1[i-1] and s[j-1] plus 1
            ```
        - ```cpp
            else DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
            //when both characters are not equal we equate it with max value of 
            //Longest Common Subsequence of s1[i-1] and s[j] and Longest Common Subsequence of s1[i] and s[j-1]
            ```
        - return DP[len(s1)][len(s2)]
    - [Printing Longest Common Subsequence Problem](https://www.geeksforgeeks.org/printing-longest-common-subsequence/)
- [Shortest Common Supersequence Problem](https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1)
    - Same as Longest Common Subsequence Problem
    - But returns len(s1)+len(s2)-DP[len(s1)][len(s2)]
    - [Printing Shortest Common Supersequence Problem](https://www.geeksforgeeks.org/print-shortest-common-supersequence/)
- [Longest Common Substring Problem](https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1)
    - Termination Condition:
        - When length of string one or string two is zero then return 0 indicating cant find commong subsequence
    - It follows the condition as:
        - ```cpp
            else if(s1[i-1] == s2[j-1]) DP[i][j] = 1+DP[i-1][j-1]; 
            //when both characters are equal we equate it with value of Longest Common Substring of s1[i-1] and s[j-1] plus 1
            ```
        - ```cpp
            else DP[i][j] = 0;
            //when both characters are not equal we equate it with value of 0 as continuity of substring broken
            ```
    - Return max from DP array
- [Minimum Number Of Deletions And Insertions Problem](https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1)
    - Follow Longest Common Subsequence(heap => pea)
    - (heap => Longest Common Subsequence(ea) => pea)
    - But returns ((len(s1)-len(lcs)) + (len(s2)-len(lcs)))
- [Longest Repeating Subsequence Problem](https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1)
[ (Explanation Video)](https://www.youtube.com/watch?v=hbTaCmQGqLg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=30)
- [Longest Palindromic Subsequence Problem](https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1)
    - We solve Longest Common Subsequence Problem for string and reverse of the string for this problem
    - [Minimum Deletions To Form A Palindrome Problem](https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1)
        - From Longest Palindromic Subsequence Problem we return (len(s) - DP[len(s)][len(s)])
    - [Minimum Insertions To Form A Palindrome Problem](https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1)
        - From Longest Palindromic Subsequence Problem we return (len(s) - DP[len(s)][len(s)])
- [Edit Distance Problem*](https://practice.geeksforgeeks.org/problems/edit-distance3702/1#)
    - Termination Condition:
        - if i == 0 return j else j == 0 return i because as one string length becomes 0 then we have to insert remaining elements to make it to another string
    - if both S[i-1] == T[j-1] then we dont need to do any thing just return DP[i-1][j-1]
    - I other cases return 1+minimum value of below three cases
        - DP[i][j-1](because we may have to insert character to first string and start comparing from next character.)
        - DP[i-1][j](because we may have to delete character to and start comapring from next character.)
        - DP[i-1][j-1](because we may have to replace the characters of both the strings and start comapring from other characters other than those.)
    - return DP[len(S)][len(T)]
### Matrix Chain Multiplication
- [Matrix Chain Multiplication Problem](https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1)
- [Palindromic Partitioning Problem](https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1#)
- [Boolean Parenthesization Problem](https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1#) ([Reference Video Explanation](https://www.youtube.com/watch?v=bzXM1Zond9U&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=39))

## DP on Grid
- [Count occurences of a given word in a 2-d array Problem***](https://practice.geeksforgeeks.org/problems/count-occurences-of-a-given-word-in-a-2-d-array/1/#)
- [Find the string in grid Problem**](https://practice.geeksforgeeks.org/problems/find-the-string-in-grid0111/1#)

## DP on Strings
- [Word Break Problem**](https://practice.geeksforgeeks.org/problems/word-break1352/1#)[(reference)](https://www.youtube.com/watch?v=XtIGGdrF67E)
    - Use Memorization technique