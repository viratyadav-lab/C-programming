#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    int smallest,second;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    smallest =a[0];
    second=999999;
    for(i=1;i<n;i++){
        if(a[i]<smallest){ 
        second=smallest;
        smallest=a[i];}
        else if ( a[i]< second && a[i] != smallest){
            second=a[i];
        }
    }
    printf("second smallest =%d",second);
    return 0;
}