#include<stdio.h>
int main(){
	int i, j, phantu, ktra;
	ktra=0;
	int arr[2][2] = {{1,2},{3,4}};
	printf("Nhap phan tu ban muon tim: ");
	scanf("%d", &phantu);
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			if (arr[i][j]==phantu){
				printf("Vi tri cua phan tu trong mang la: %d %d", i, j);
				ktra=1;
			}
		}
	}
	if(ktra==0){
		printf("Phan tu khong ton tai trong mang");
	}
	return 0;
}
