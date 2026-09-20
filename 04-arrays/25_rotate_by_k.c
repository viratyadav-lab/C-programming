#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    int k;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    printf("the value of k");
    scanf("%d",&k);
    int j=0;
    int temp[100];
    for(i=k;i<n;i++){
        temp[j]=a[i];
        j++;
    }
    for(i=0;i<k;i++){
            temp[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++){ 
    printf("the values of new array is%d\n ",temp[i]);}
    return 0;
}