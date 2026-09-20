#include <stdio.h>
int main() {
    int a[100];
    int n,i,j;
    int temp;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
for(i=n-1;i>=0;i--){
    for(j=i+1;j<n;j++)
    if(a[i]<a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;}   
}
for(i=0;i<n;i++){
    printf("the value of sorted array is %d\n",a[i]);
}
    return 0;
}