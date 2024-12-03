#include<stdio.h>
int main(){
	int arr[5]={1,8,3,4,5};
	int n,dem=0;
	printf("Moi nhap phan tu trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<5;i++){
		if(arr[i]==n){
			printf("%d",i+1);
			dem++;
		}
	}
	if(dem==0){
		printf("khong co trong mang");
	}
	return 0;
}
