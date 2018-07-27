#include <stdio.h>

int n, k;

int A[100000];

int p(int x){
	int i;
	int y = 0;
	int z = k;
	int w = 0;
		for(i = 0; i < n ; i++){
		if (w < A[i]) w = A[i];
	    if (x >=  y + A[i]) {
	    y = y + A[i];
	    }
	    else{
	    y = A[i];
	    z = z - 1;
		}}
	return x >= w && z >=1;
}

int main(){
	int i, j, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n  ; i++){
	scanf("%d", &A[i]);
    }
	lb = 0;
	ub = 1000000000;
    while(ub - lb > 1){
		int m = (lb + ub) / 2;
		if(p(m)){
			ub = m;
		}
		else{
			lb = m;
		}
	}
	printf("%d\n", ub);
	return 0;
}