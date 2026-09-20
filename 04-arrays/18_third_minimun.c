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
    int min = a[0];
    int second=9999;
    int third =9999;
    for(i=0;i<n;i++){
        if(a[i]<min){
            third=second;
            second=min;
            min=a[i];
        }
        else if(a[i]<second && a[i]!= min){
            third = second;
            second =a[i];
        }
        else if ( a[i]<third && a[i]!=second){
            third=a[i];
        }
    }
        printf("The third min value is %d",third);

    
    return 0;
}