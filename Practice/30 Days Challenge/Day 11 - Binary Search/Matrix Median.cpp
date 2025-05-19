// find max, min
// using binary search while (min<max)
// find how many elements greater tha mid
// if less than total elements mim = mid+1
// else max = mid
// return min

int Solution::findMedian(vector<vector<int> > &A){
    int mn = A[0][0], mx = A[0][0];
    int n = A.size(), m = A[0].size();
    for(int i=0;i<n;i++){
        mn = min(mn, A[i][0]);
        mx = max(mx, A[i][m-1]);
    }

    int elements = (n*m+1)/2;

    while(mn<mx){
        int mid = mn + (mx-mn)/2;
        int count = 0;
        for(int i=0;i<n;i++){
            count += upper_bound(A[i].begin(), A[i].begin()+m, mid) - A[i].begin();
        }

        if(count < elements) mn = mid+1;
        else mx = mid;
    }
    return mn;
}
