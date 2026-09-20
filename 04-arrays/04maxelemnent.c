#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    int max;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    printf("THE VALUE OF ARRAY IS %d\n",a[i]); 
            }
    max=a[0];
    for(i=0;i<n;i++){ 
    if(a[i]>max){
   max=a[i];
    }
}
    printf("the maximun element is %d",max);
        
    
    return 0;
}