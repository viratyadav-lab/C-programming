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
   int j = 0;
for(i = 0; i < n; i++)
{
    if(a[i] != 0)
    {
        a[j] = a[i];
        j++;
    }
}
while(j < n)
{
    a[j] = 0;
    j++;
}
for(i=0;i<n;i++){
    printf("the value of new arraay is %d\n",a[i]);
}
return 0;
}
