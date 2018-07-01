#include <stdio.h>

int n, k;

int A[100000];

int p(int x){
	int i;
	int y = 0;
	    for(i = 0; i < n ; i++){
	    	y = y + A[i] / x;
	    	}
    return k > y;
}

int main(){
	int i, j, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n  ; i++){
	scanf("%d", &A[i]);
    }
	lb = 0;
	ub = n +1;
	for(j = 0; j < n ; j++){
    if(ub <= A[j]) ub = A[j] + 1;
    }
    while(ub - lb > 1){
		int m = (lb + ub) / 2;
		if(p(m)){
			ub = m;
		}
		else{
			lb = m;
		}
	}
	printf("%d\n", lb);
	return 0;
}

