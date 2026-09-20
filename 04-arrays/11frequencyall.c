#include <stdio.h>
int main() {
    int a[100];
    int n,i,j;
    int frequency,count;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;}
        }
    printf("the count of array is %d\n",count);
    }
    return 0;
}