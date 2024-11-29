#include<stdio.h>
int main(){
	int max = 0;
	int arr[2][2] = {{1,2},{3,4}};
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			if (arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}
	printf("Phan tu lon nhat la: %d", max);
	return 0;
}
