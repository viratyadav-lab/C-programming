#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    int pos,value;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    printf("The position to insert");
    scanf("%d",&pos);
    printf("The value to insert");
    scanf("%d",&value);
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=value;
    n++;
    for(i=0;i<n;i++){
        printf("the new array is %d\n",a[i]);
    }

    return 0;
}
