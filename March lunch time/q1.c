#include <stdio.h>

int main(void) {
	int T,i,j;
	scanf("%d", &T);
	for(i=1; i<=T;i++){
	    int N,M,max;
	    scanf("%d %d", &N,&M);
	    int A[N];
	    for(i=0;i<N;i++){
	        scanf("%d ",&A[i]);
	    }
	    max= A[0];
	    for(i=0;i<N;i++){
	        if (A[i]>max){
	            max = A[i];
	        }
	    }
	    //got max
	    for (i = max;i<=M;i++){
            for(j=0;j<N;j++){
                if(A[j]%i!=0){
                    printf("Ans=%d", A[j]);
                }
            }
	    }
	}
	return 0;
}

