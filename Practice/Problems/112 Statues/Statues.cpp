#include <stdio.h>

int main(void) {
	int N,r,ans;
	int i = 1;
	scanf("%d",&N);
	while(N!=0){
	    int arr[N];
	    r=0;
	    ans=0;
	    for(int i=0;i<N;i++){
	        scanf("%d",&arr[i]);
	        r = r+arr[i];
	    }
	    r = r/N;
	    for(int i=0;i<N;i++){
	        if(r-arr[i]>0) ans+=(r-arr[i]);
	    }
	    printf("Set #%d\n",i);
	    printf("The minimum number of moves is %d.\n",ans);
	    i++;
	    scanf("%d",&N);
	}
	return 0;
}


