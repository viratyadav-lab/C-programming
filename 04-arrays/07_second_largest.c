#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    int largest,second;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    largest =a[0];
    second=a[0];
    for(i=1;i<n;i++){
        if(a[i]>largest){ 
        second=largest;
        largest=a[i];}
        else if ( a[i]>second && a[i] != largest){
            second=a[i];
        }
    }
    printf("second largest=%d",second);
    return 0;
}