#include <stdio.h>

int n, k;

int A[100000];

int q(int x){
	int i, y, z;
	y = 0;
	z = 0;
	for(i = 1; i < n + 1; i++){
	if(z < A[i]){
	if(y < A[i]) y = A[i];
	else z = A[i];
    }}
    return x >= y + z;
}

int p(int x){
	int i;
	int y = 0;
	int z = k;
		for(i = 1; i < n + 1; i++){
	    if (x >  y + A[i]) {
	    y = y + A[i];
	    }
	    else{
	    y = A[i];
	    z = z - 1;
		}}
	return q(x) && z >=1;
}

int main(){
	int i, j, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 1; i < n + 1 ; i++){
	scanf("%d", &A[i]);
    }
	lb = 0;
	ub = 1;
	for(j = 1; j < n + 1; j++){
    ub = ub + A[j];
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
	printf("%d\n", ub);
	return 0;
}