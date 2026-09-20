#include <stdio.h>
int main() {
    int a[100];
    int n,i,j;
    int k;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n-1;k++){
        a[k]=a[k+1];}
        n--;
        j--;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("the value of new array is %d\n",a[i]);
    }
    return 0;
}