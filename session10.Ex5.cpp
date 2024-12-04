#include<stdio.h>
int main(){
	int arr[5]={1,6,3,4,9};
		int temp;
	for(int i=0; i<5 ;i++){
		for(int j=0; j<5-i-1 ;j++){
			if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	
	 printf("Mang sau khi sap xep: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	int n;
	printf("Moi nhap 1 phan tu co trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<5;i++){
		if(arr[i]==n){
			printf("phan tu %d nam o vi tri %d trong mang",n,i);
			return 1;
		}
	}
	return 0;
	}
}
