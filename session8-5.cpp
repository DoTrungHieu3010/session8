#include <stdio.h>
int main(){
	int mang[2][2]={{1,2},{3,4}};
	int bientrai,bienphai, sum;
	bientrai = 2;
	bienphai = 2;
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			if (i==0 || j==0 || i==bientrai-1 || i==bienphai -1){
				sum+=mang[i][j];
			}
		}
	}
	printf("Ket qua la: %d", sum);
return 0;
}
