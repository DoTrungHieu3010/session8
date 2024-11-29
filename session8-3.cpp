#include<stdio.h>
int main(){
	int x;
	int arr[x][x];
	printf("Nhap vao so nguyen: ");
	scanf("%d", &x);
	for (int i=0;i<x;i++){
		for (int j=0;j<x;j++){
		    printf("Nhap vao tung phan tu: ");
		    scanf("%d", &arr[i][j]);
		}
	}
	printf("Ma tran la: \n");
	for (int i=0;i<x;i++){
		for (int j=0;j<x;j++){
			printf("%d   ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
