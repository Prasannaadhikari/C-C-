#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,i,search,flag=0;
    printf("Enter the number of data to be inserted: ");
    scanf("%d",&n);
    printf("Enter the data to be sorted:  ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched: ");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(a[i]==search){
            printf("Data  %d found ",search);
            ++flag;
        }
    }

    if(flag==0){
        printf("\nData %d not found",search);
    }

    return 0;
}
