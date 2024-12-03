#include<stdio.h>
int main(){
	int arr[5]={4,3,7,8,1};
	int temp;
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i-1;j++){
			if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	}
	printf("Mang sau khi sap xep la: ");
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
