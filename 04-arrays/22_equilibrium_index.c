#include <stdio.h>
int main() {
    int a[100];
    int n,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("the values of elements is");
        scanf("%d",&a[i]);
    }
    int leftsum = 0;
int total = 0;
for(i = 0; i < n; i++)
{
    total = total + a[i];
}
for(i = 0; i < n; i++)
{
    total = total - a[i];
    if(leftsum == total)
    {
        printf("Equilibrium index = %d", i);
    }
    leftsum = leftsum + a[i];
}  
        
        return 0;
}
    
    
    
