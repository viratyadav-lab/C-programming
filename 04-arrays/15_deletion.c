#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    int pos;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    printf("the position value you wnat to delete ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("the value of new array is %d\n",a[i]);
    }
    return 0;
}