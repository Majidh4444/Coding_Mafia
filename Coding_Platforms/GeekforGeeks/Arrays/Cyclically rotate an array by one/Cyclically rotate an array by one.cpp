#include <stdio.h>

void rotate(int arr[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int a[n] , i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    rotate(a, n);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

void rotate(int arr[], int n){
    swap(&arr[0],&arr[n-1]);
    for(int i=1;i<n-1;i++) swap(&arr[i],&arr[n-1]);
}

//Input:
//5
//1 2 3 4 5
//Output:
//5 1 2 3 4

