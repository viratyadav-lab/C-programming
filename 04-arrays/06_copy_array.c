#include <stdio.h>
int main() {
    int a[100],b[100];
    int n,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    printf("copied array");
    for(i=0;i<n;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}