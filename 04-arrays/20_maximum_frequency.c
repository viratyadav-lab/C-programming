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
    int count;
    int maxfreq =0;
    int maxelement;
    for(i=0;i<n;i++){
        count =0;
        for(j=1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            maxelement=a[i];
        }
    }
printf(" %d", maxelement);
    return 0;
}