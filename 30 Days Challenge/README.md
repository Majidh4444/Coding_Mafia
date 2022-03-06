# 30 Days Challenge
### Day 01 - Arrays
- [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)
    ```
    4*8
    * * * * 0 * * *
    * * * * * * * *
    0 * * * 0 * * *
    0 * * * * * * *
    If v[2][4] = 0 then make v[2][0] = 0 and v[0][2] = 0
    But if v[2][0] = 0 dont change any thing use flag variable to indicate that colunm 0 = 0

    Using Above data interate array without first colunm and check v[i][0] = 0 || v[0][j] = 0 to make v[i][j] = 0
    For first column use flag variable to change to zero
    ```
- [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/)
- [Next Permutation](https://leetcode.com/problems/next-permutation/)
    ```
    859764:
             9
    8       / \
     \     /   7
      \   /     \
       \ /       6
        5         \
                   4
    From end find first decrement element => 5
    Among number after 5 find just greater element then 5=> 6 (not 4)
    swap them => 869754
    sort elements after 6 => 864579
    ```
- [Maximum Subarray/Kadane’s Algorithm](https://leetcode.com/problems/maximum-subarray/)
    ```
    -2,1,-3,4,-1,2,1,-5,4
    Check sum+nums[i] < nums[i] then there is a lot dude to previous sum
    So consider now sum as nums[i]
    everytime check sum with maxSum
    ```
- [0s, 1s, 2s sorting](https://leetcode.com/problems/sort-colors/)
    ```
    use x for interate nums, i for 0s, j for 2s
    if nums[x] == 2 swap nums[j] and nums[x] here after swapping nums[x] can be 0 or 1 or 2
    So have to check nums[x] again
    if nums[x] == 0 swap nums[i] and nums[x] here after swapping nums[x] can be 1 no 0s 2s because they are already swapped
    so no need to check nums[x] again
    ```
- [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
    ```
    7 1 5 3 6 4
    7
     \             6
      \       5   / \
       \     / \ /   4
        \   /   3
         \ /
          1
    Chose min stock price than previous one
    if its is greater than previous one check profit and compare with maxProfit => (5-1), (3-1), (6-1), (4-1) => max is (6-1 = 5)
    5 is max profit
    ```

### Day 01 - Arrays Part - II
- [Rotate Image](https://leetcode.com/problems/rotate-image/)
    ```
    5  1  9  11
    2  4  8  10
    13 3  6  7
    15 14 12 16
    For 90 degrees turn,
    swap columns from both the end it it meets
    11  9  1  5
    10  8  4  2
    7   6  3  13
    16  12 14 15
    Make transpose of this
    15  13 2  5
    14  3  4  1
    12  6  8  9
    16  7  10 11

    180, 270 360 also check in this way
    ```
