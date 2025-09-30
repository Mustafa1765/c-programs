#include <stdio.h>
int main() {
    int n, i;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int a[n]; 
    printf("Enter elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("The reversed array: ");
    for(i = n-1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
