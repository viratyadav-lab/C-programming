#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("THE VALUE OF ARRAY IS %d\n",a[i]);
    
    }
    return 0;
}