#include<stdio.h>
int main(){
	int m,n;
	printf("Moi nhap so dong: ");
	scanf("%d",&m);
	printf("Moi nhap so cot: ");
	scanf("%d",&n);
	int arr[m][n];
	printf("Nhap cac phan tu cho ma tran %d va %d:\n",m,n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(arr[i][j]>arr[i][k]){
				int temp=arr[i][j];
				arr[i][j]=arr[i][k];
				arr[i][k]=temp;
			}
			}
		}
	}
	printf("Mang duoc sap xep lai la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
