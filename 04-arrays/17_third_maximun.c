#include <stdio.h>
int main() {
    int a[100];
    int n,i,j;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int second=a[0];
    int third =a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            third=second;
            second=max;
            max=a[i];
        }
        else if(a[i]>second && a[i]!= max){
            third = second;
            second =a[i];
        }
        else if ( a[i]>third && a[i]!=second){
            third=a[i];
        }
    }
        printf("The third max value is %d",third);

    
    return 0;
}