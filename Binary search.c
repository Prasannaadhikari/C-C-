#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[10],n,i,j,search,temp,first,last,mid,flag=0;
    printf("Enter the number of data to be inserted: ");
    scanf("%d",&n);
    printf("Enter the %d data:  ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe data sorted is : ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    printf("\nEnter the elements to be searched: ");
    scanf("%d",&search);
    first = 0;
    last = n-1;
    mid = (first  + last)/2;
    while(first<last){
        if(a[mid]<search){
            first = mid+1;
        }
        else if(a[mid]==search){
            printf("\nData %d found at %d position ",search,mid);
            ++flag;
            break;
        }
        else{
            last= mid;
        }
        mid = (first + last)/2;
    }
    if(flag == 0 ){
        printf("\nData %d not found ",search);
    }
    return 0;
}
