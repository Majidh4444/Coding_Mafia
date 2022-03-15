# 30 Days Challenge
### Day 01 - Arrays => 05 March 2022
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
    Check sum+nums[i] < nums[i] then there is a loss dude to previous sum
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

### Day 02 - Arrays Part - II => 06 March 2022
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
- [Merge Intervals](https://leetcode.com/problems/merge-intervals/)
    ```
    Three Cases
    One:
    ---------
       ----------
    Two
    ---------
       ---
    Three
    ---------
               ---------
    ```
- [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)
    ```
    A = 4 5 6 0 0 0
    B = 1 2 3
    Start filling in A from back side by comparing A and B from m-1 and n-1
    ```
- [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)
    ```
    Change sign of number in nums[i] index
    If we get nums[i] < 0 then return nums[i]
    ```
- [Repeat and Missing Number Array](https://www.interviewbit.com/problems/repeat-and-missing-number-array/)
    ```
    sum = A - B
    squareSum = A^2 - B^2 = (A - B)(A + B)
    squareSum / sum = A + B
    Now we have A + B and A - B
    ```
- [Count Inversions](https://www.codingninjas.com/codestudio/problems/count-inversions_615?leftPanelTab=0)
    ```
    Use merge sort to find inversions
    if L[i] > R[j]
    inv += nL-i
    Be sure that you returned invs everywhere
    ```

### Day 03 - Arrays Part - III => 07 March 2022
- [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
    ```
    Find out which row by checking both ends
    then use binnary search to find exact position in row
    ```
- [Pow(x, n)](https://leetcode.com/problems/powx-n/)
    ```
    Check the bits which have 1 and increment x *= x
    then when bit is 1 ans = ans*x or ans = ans/x
    ```
- [Majority Element](https://leetcode.com/problems/majority-element/)
    ```
    Use Boyer–Moore Majority Vote Algorithm(Searching Algorithm)
    ```
- [Majority Element II](https://leetcode.com/problems/majority-element-ii/)
    ```
    Same as before case but here use two variables and also first equate variable1 = nums[0] and variable2 = INT_MIN
    ```
- [USe Dynamic Programming](https://leetcode.com/problems/unique-paths/)
    ```
    USe Dynamic Programming
    ```
- [Reverse Pairs](https://leetcode.com/problems/reverse-pairs/)
    ```
    Same as majority elements, but here use extra array for squares in merge function to check pairs
    ```

### Day 04 - Arrays Part - IV => 08 March 2022
- [Two Sum](https://leetcode.com/problems/two-sum/)
    ```
    Use unordered map to store the nums[i]
    then using that find target-nums[i]
    ```
- [4Sum](https://leetcode.com/problems/4sum/)
    ```
    Sort the array
    use two nested for loops to select first two numbers
    then using two pointer in while loop find other two numbers
    ```
- [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)
    ```
    use sets to store unique values
    Use for loop and check for each number whether its previous number present in loop or not
    If not present then use while loop and check the number of consecutive number present in set from this number
    At every time of above case store the max value of lenght
    ```
- [Largest subarray with 0 sum](https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1)
    ```
    use for loop if sum is zero then its the max
    if same sum comes again then length = i-m[sum]
    At every iteration find maxLength and return it
    ```
- [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
    ```
    SLIDING WINDOW  - TIME COMPLEXITY O(2n)
    SPACE COMPLEXITY O(m)   //size of array
    Take array to store the occurences of all the characters
    Iterate over the string till the right pointer reaches the end of the string
    Increment the count of the character present in the right pointer every time
    If the occurence store[r] become more than 1 means the char is repeated
    Reduce the occurence of temp as it might be present ahead also in the string
    Contraction of the present window till the occurence of the 't' char becomes 1
    As the index starts from 0 , ans will be (right pointer-left pointer + 1)
    Find max at every iteration
    ```
- [Subarray with given XOR](https://www.interviewbit.com/problems/subarray-with-given-xor/)
    ```
    ________________
           z
    _______ ________
       x       y
    x = y XOR z
    y = x XOR y
    Use the above concept
    here z = p[i], y = B, x = value which may present n hash table
    ```
### Day 05 - Linked List => 09 March 2022
- [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
    ```
    Follow the order
    while(curr)
    nxt = curr->next
    curr->next = prev
    prev = curr
    curr = nxt
    return prev
    ```
- [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)
    ```
    Use i=1 variable
    mid = head
    when i is divisible by 2 increment mid
    ```
- [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
    ```
    l1 = 1 2 3 4
    l2 = 5 6 7 8
    Use recursion
    if l1 == NULL return l2
    if l2 == NULL return l1
    l1>l2 => l2 = rec(l1,l2->next)
    else l1 = rec(l1->next, l2)
    return less val pointer
    ```
- [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
    ```
    while(n--) increment temp
    if(!temp) return head->next
    while(temp->next) increment both
    node->next = node->next->next
    return head
    ```
- [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)
    ```
    take sum = 0 and remainder = 0
    every iteration make sum = 0
    if l1 exits add to sum same with l2 also and also increment l1 and l2

    if sum>9 
            remainder = sum/10
            sum = sum%10
    else remainder = 0
    ```
-   [Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)
    ```
    node->val = node->next->val
    node->next = node->next->next
    ```

### Day 06 - Linked List Part - II => 10 March 2022
- [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)
    ```
    If reached the end then equate the pointer again to opposite pointer head;
    run while loop till a!=b
    if equal return a
    ```
- [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
    ```
    Use fast and slow pointers and return when fast->nextt == NULL or when any of the pointer reached the end after breaking from loop
    ```
- [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)
    ```
    Use Recursion first check the list with k values if no k nodes present return head
    if present reverse the k nodes and call head->next = rec(curr,k)
    return prev
    ```
- [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)
    ```
    1 2 3 4 5 4 3 2 1
    Using fast and slow pointer find middle node
    above case middle is 5
    use prev pointer to track of slow's previous pointer
    make prev->next = NULL here 4->next = NULL
    from 5 reverse the list
    1 2 3 4 1 2 3 4 5
    Check node values for head and slow one by one if not equal return 0
    if equal return 1
    ```
- [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)
    ```
    Detect cycle and break from loop
    if(slow == NULL or fast == NULL) return NULL
    make fast = head
    while(slow != fast) increment pointer
    return slow
    ```
- [Flattening a Linked List](https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1#)
    ```
    Here use recursion
    go to last sub link
    and merge root and root->next sub links as same as merging two lists and return one big list
    ```

### Day 07 - Linked List and Arrays => 11 March 2022
- [Rotate List](https://leetcode.com/problems/rotate-list/)
    ```
    Count the number of elements(n) and at the end point last elemnt next to head
    make k = k%n then n = n-k
    using while(n--) then head = temp->next and temp->next = null
    return head
    ```
- [3Sum](https://leetcode.com/problems/3sum/)
    ```
    Sort the array
    -1 -1 -1 -1 0 2
    for loop
    if(i>0 && nums[i-1] == nums[i]) continue
    int j=i+1 and z = n-1
    while(j<z) 
    check there sum == 0
    push
        while(j<z && nums[j]==nums[j+1]) j++
    while(j<z && nums[j]==nums[j+1]) z--
    j++;z--
    sum < 0 j++
    sum > 0 z--
    return v
    ```
- [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)
    ```
    use two pointers
    find first block on both sides
    while(l<=r)
        if lblock <= rblock
            if(nums[l]>lblock) lblock = nums[l]
            else water += lblock-nums[l]
            l++
        else
            if(nums[r]>rblock) rblock = nums[r]
            else water += rblock-nums[r]	
    return water
    ```
- [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
    ```
    while(i<n)
    use two pointer i j to swap only unique values at the starting
    ```
- [Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/)
    ```
    use while loop to find continous 1s and store max of that to return
    ```
### Day 08 - Greedy Algorithm => 12 March 2022
- [N meetings in one room](https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1)
    ```
    store in vestor as {start, end}
    sort vector wrt end
    use for loop
    meet denotes which meeet is going on
    if(v[i][0] > v[meet][1])
            meet = i
        count++
    return count
    ```
- [Minimum Platforms](https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#)
    ```
    sort both arrays
    while i<n
    if arr[i] > dep(j) j++;i++;
    else i++;
    ```
- [Job Sequencing Problem](https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#)
    ```
    sort wrt profit
    declare array for time n
    using for loop
        check for each job if there is a free space in time array on or before deadline
        if yes count++ and break
    return count
    ```
- [Fractional Knapsack](https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1)
    ```
    sort with respect to value/weight
    while(W && i<n)
        if W>=arr[i].weight
            add arr[i].value to total
            remove arr[i].weight from W and i++
        else
            add W*value of each weight
            return total
    ```
- [Number of Coins](https://practice.geeksforgeeks.org/problems/number-of-coins1824/1/#)
    ```
    Use DP
    first row to INT_MAX
    first column to 0
    use for for loop
    if(coins[i-1] <= j) t[i][j] = min(1 + t[i][j-coins[i-1]], t[i-1][j])
    else t[i][j] = t[i-1][j]
    return t[n][amount] if not equal to INT_MAX
    else return -1
    ```
### Day 09 - Recursion => 13 March 2022
- [Subset Sums](https://practice.geeksforgeeks.org/problems/subset-sums2234/1#)
    ```
    Use recursion
    add sum to vector at each call
    ```
- [Subsets II](https://leetcode.com/problems/subsets-ii/)
    ```
    Use recursion
    Make call without considering and after considering element
    ```
- [Combination Sum](https://leetcode.com/problems/combination-sum/)
    ```
    2 3 6 7
    from 0 using faor loop
        call recursion considering for 2, 3, 6, 7 to sum
    at every iteration push c[j] to vector after recursion pop back
    ```
- [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)
    ```
    2 3 6 7
    from 0 using faor loop
        call recursion considering for 2, 3, 6, 7 to sum
        skip considering repeating elements after usig them atleast once 
    at every iteration push c[j] to vector after recursion pop back
    ```
- [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)
    ```
    for(int j=i;j<s.size();j++){
        if(isPalindrome(s.substr(i,j-i+1))){
            sub.push_back(s.substr(i,j-i+1));
            rec(ans,sub,j+1,s);
            sub.pop_back();
        }
    }
    ```
- [Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)
    ```
    Check the solution and understand
    ```

### Day 10 - Recursion and Backtracking => 14 March 2022
- [Permutations](https://leetcode.com/problems/permutations/)
    ```
    1 2 3
    For i = 0 => (1)-2 3
    (rec) i = 0   (1 2)-3
            (rec) i = 0  (1 2 3)
            i = 1   (1 3)-2
            (rec) i = 0  (1 3 2)
        i = 1    (2)-1 3
    (rec) i = 0   (2 1)-3
            (rec) i = 0  (2 1 3)
            i = 1   (2 3)-1
            (rec) i = 0   (2 3 1)
        i = 2    (3)-1 2
    (rec) i = 0    (3 1)-2
            (rec) i = 0   (3 1 2)
            i = 1    (3 2)-1
            (rec) i = 0   (3 2 1)   
    Make recursion as above
    for(int i=0;i<nums.size();i++){
        vector<int> arr = nums;
        arr.erase(arr.begin()+i);
        s.push_back(nums[i]);
        rec(arr,v,s);
        s.pop_back();
    } 
    ```
- [N-Queens](https://leetcode.com/problems/n-queens/)
    ```
    place a queen at the position
    make recursion 
    if something went wrong return back
        erase the queen position where u placed previously
    else continue
    ```
- [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)
    ```
    place a number at the position
    make recursion
    if col >= 9 make rec with row = row+1 and col = 0
    using for loop check 1 to 9 numbers
    if something went wrong return back
        erase the number position where u placed previously
    else continue
    ```
- [M-Coloring Problem](https://practice.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1#)
    ```
    Use recursion
    if node == n return true
    transverse for every color recursively
    before inserting color check if possible using for loop(k!=node && graph[node][k]==1 && color[k]==col)
    if something happens in that recursion stack back track and remove inserted color and try new color
    ```
- [Rat in a Maze Problem - I](https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1)
    ```
    Use recursion in evry possible way to get complete way
    ```
- [Word Break II](https://leetcode.com/problems/word-break-ii/)
    ```
    Use unordered_set to store dictionary words
    if index reached end store required string and return
    else use for loop to check sub strings from ind to end and if present in set
        and that to required string and make recursion from next index and continue this
    ```