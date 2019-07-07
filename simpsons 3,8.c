#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float fun(float x){
    return (x/(1+sin(x)));
}
int main(){
    float n,k,a,b,h,r=0;
    int i;
    printf("Enter the lower and upper limit: ");
    scanf("%f%f",&a,&b);
    printf("\nEnter the number of sub intervals: ");
    scanf("%f",&n);
    h = ((b-a)/n);
    r = fun(a) + fun(b);
    for(i=1;i<n;i++){
        k = a + i * h;
        if(i%3==0){
            r = r + 2*fun(k);
        }
        else{
            r = r + 3 * fun(k);
        }
    }
    r = (3*(r*h))/8;
    printf("\nThe result is %f\n",r);
    return 0;
}
