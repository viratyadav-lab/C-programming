#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    int sum=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("THE VALUE OF ARRAY IS %d\n",a[i]);
    }
    for(i=0;i<n;i++){
    sum+=a[i];
    }
    printf("the value of sum is %d\n",sum);
    return 0;
}