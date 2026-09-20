#include <stdio.h>
int main() {
    int a[100];
    int i,n;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    int sum=0;
    int maxsum=a[0];
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        if(sum>maxsum){
            maxsum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    printf("the value of maxs sum is %d",maxsum);
    return 0;
}