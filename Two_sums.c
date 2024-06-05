#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int i,t,r,j,a[n];
    for(i=0;i<n;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the target number : ");
    scanf("%d",&t);
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            r=a[i]+a[j];
            if(r==t){
                printf("(%d,%d)",i,j);
            }
        }
    }
}
