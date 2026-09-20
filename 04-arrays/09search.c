#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    int pos;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    printf("the position to find ");
    scanf("%d",&pos);
    for(i=0;i<=pos-1;i++){
        if(i==pos-1){
            printf("%d",a[i]);
    }
}
return 0;
}
    
