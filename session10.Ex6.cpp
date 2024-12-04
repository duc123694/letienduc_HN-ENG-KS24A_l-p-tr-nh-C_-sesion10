#include <stdio.h>
int main() {
    int arr[] = {8,5,2,3,1,4,2,6};  
    int n = sizeof(arr) / sizeof(arr[0]);     
    int target;
    int positions[n];                        
    int count = 0;                            
    printf("Nhap mot so nguyen: ");
    scanf("%d", &target);
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            positions[count] = i;  
            count++;
        }
    }
    if(count > 0) {
        printf("So %d xuat hien tai cac vi tri: ", target);
        for(int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay so %d trong mang.\n", target);
    }
    return 0;
}
