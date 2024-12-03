#include<stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang vuong ");
	scanf("%d",&n);
	int arr[n][n];
    printf("Nhap gia tri cho mang: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d]=",i,j);			
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i][i]>arr[j][j]){
			int temp=arr[i][i];
			arr[i][i]=arr[j][j];
			arr[j][j]=temp;
		}
		}
	}
	printf("Mang sau khi sap xep theo duong cheo chinh la: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

