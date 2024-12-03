#include<stdio.h>
int main(){
	int arr[5]={3,5,2,1,9};
	int temp,minIndex;
	for(int i=0;i<5;i++){
		minIndex=i;
		for(int j=i+1;j<5;j++){
			if(arr[j]<arr[minIndex]){
			temp=arr[minIndex];
			arr[minIndex]=arr[j];
			arr[j]=temp;
		}
		}
	}
	printf("Mang duoc sap xep lai la: ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	
}
