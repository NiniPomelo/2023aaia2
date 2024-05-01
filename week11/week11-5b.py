//part 2
#include <stdio.h>
int main()
{
	int a[30] [30];
	int m, n;
	scanf("%d %d", &m, &n);
	for(int i=0; i<m; i++){ //part 1
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j] );
		}
	}
	printf("\n");
	for(int i=0; i<m; i++){ //part 2
		for(int j=0; j<n; j++){
			printf("%2d ", a[i][j] );
		}
		printf("\n");
	}
}