// Use merge sort to find inversions
// if L[i] > R[j]
// inv += nL-i
// Be sure that you returned invs everywhere

long long merge(long long* arr, int l, int m, int r){
    int nL = m-l+1;
    int nR = r-m;
    long long* L = new long long[nL];
    long long* R = new long long[nR];
    long long inv = 0;
    
    for(int i=0;i<nL;i++) L[i] = arr[l+i];
    for(int i=0;i<nR;i++) R[i] = arr[m+i+1];
    
    int i=0,j=0,k=l;
    
    while(i<nL && j<nR){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
            inv += nL-i;
        }
        k++;
    }
    
    while(i<nL){
        arr[k] = L[i];
        i++;k++;
    }

    while(j<nR){
        arr[k] = R[j];
        j++;k++;
    }
    return inv;
}

long long mergeSort(long long* arr, int l, int r){
    long long inv = 0;
    if(l<r){
        int mid = ((r-l)/2)+l;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid+1, r);
        inv += merge(arr,l , mid, r);
    }
    return inv;
}

long long getInversions(long long *arr, int n){
    return mergeSort(arr, 0, n-1);
}