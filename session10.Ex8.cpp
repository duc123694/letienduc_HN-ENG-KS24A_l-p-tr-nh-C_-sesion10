#include<stdio.h>
int main(){
	int m,n;
	printf("Moi nhap so dong: ",m);
	scanf("%d",&m);
	printf("Moi nhap so cot: ",n);
	scanf("%d",&n);
	int arr[m][n];
	printf("Nhap cac phan tu ma tran %d va %d: \n",m,n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<m-1;i++){
			for(int k=i+1;k<m;k++){
				if(arr[i][j]>arr[k][j]){
					int temp=arr[i][j];
					arr[i][j]=arr[k][j];
					arr[k][j]=temp;
				}
			}
		}
	}
	printf("Mang sau khi sap xep theo chieu doc: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
