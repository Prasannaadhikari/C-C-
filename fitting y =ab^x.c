#include <stdio.h>
#include <math.h>
int main(){
   int n,i;
   float A,B,x[20],y[20],a,b,sumx=0,sumx2=0,sumy=0,sumxy=0;
   printf("Enter the number of observations: ");
   scanf("%d",&n);
   printf("\nEnter the Observations: \n");
   for(i=1;i<=n;i++){
        printf("x[%d] =  ",i);
        scanf("%f",&x[i]);
        printf("y[%d] =  ",i);
        scanf("%f",&y[i]);
   }
   printf("X\t\t  Y\t\tX*X  \t\t  X*Y\n");
   for(i=1;i<=n;i++){
        sumx = sumx + x[i];
        sumy = sumy + log(y[i]);
        sumx2 = sumx2 + (x[i] * x[i]);
        sumxy = sumxy + (x[i] * log(y[i]));
        printf("%f\t%f\t%f\t%f\n",x[i],log(y[i]),x[i]*x[i],x[i]*log(y[i]));
   }
   printf("\nsumx= %.2f\tsumy= %.2f\tsumx*x= %.2f\tsumxy= %.2f\n",sumx,sumy,sumx2,sumxy);
   B = (n * sumxy - sumx * sumy)/(n* sumx2 - sumx * sumx);
   A =(sumy -B * sumx)/n;-
   b = exp(B);
   a = exp(A);
   printf("\n a = %f & b = %f ",a,b);
   printf("\nThe best fit is y = %.2f %.2f^x\n",a,b);
    return 0;
}

