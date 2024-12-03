#include<stdio.h>
int main(){
	int n;
	printf("Moi nhap kich thuoc mang vuong ");
	scanf("%d",&n);
	int arr[n][n];
	printf("Moi nhap gia tri cho mang: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);	
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=n+1;j<n;j++){
			if(arr[i][n-i-1]<arr[j][n-j-1]){
				int temp=arr[i][n-i-1];
				arr[i][n-i-1]=arr[j][n-j-1];
				arr[j][n-j-1]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep theo duong cheo phu \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
