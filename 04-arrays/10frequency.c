#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    int frequency,x,count=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    printf("find frequency of");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
        printf("the frequency of x is %d",count);
        return 0;
}
    
    