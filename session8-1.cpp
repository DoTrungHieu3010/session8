#include<stdio.h>
int main(){
	int i, j;
	int array[2][2] = {{1,2}, {3,4}};
	printf("Cac phan tu trong mang tu cuoi ve dau: ");
	for (i=1;i>=0;i--){
		for (j=1;j>=0;j--){
			printf("%d", array[i][j]);
		}
	}
	return 0;
}
