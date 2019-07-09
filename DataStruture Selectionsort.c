#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10],n,i,j,min,temp;
    printf("Enter the number of data to be inserted: ");
    scanf("%d",&n);
    printf("Enter the data to be sorted:  ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min])
                min = j;
        }
            temp = a[i];
            a[i] = a [min];
            a[min] = temp;
    }
    printf("\nThe data sorted is : ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
