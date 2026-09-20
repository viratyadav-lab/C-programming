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
    int flag=1;
    for(i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            flag=0;
        }
    }
    if(flag==1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}