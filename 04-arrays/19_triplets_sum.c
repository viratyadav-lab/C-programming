#include <stdio.h>
int main() {
    int a[100];
    int n,i,j,k;
    int value;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    printf("the value whose sum uou want to find");
    scanf("%d",&value);
    for(i=0;i<n-2;i++){
        for(j=0;j<n-1;j++){
            for(k=0;k<n;k++){
                if(a[i]+a[j]+a[k] == value){
            printf("the values are %d %d %d\n",a[i],a[j],a[k]);
                }
            }
        }
    }
    
    return 0;
}