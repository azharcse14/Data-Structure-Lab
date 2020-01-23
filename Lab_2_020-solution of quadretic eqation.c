#include<stdio.h>
#include<math.h>


int main(){
   float a,b,c,d,x,x1,x2;
   printf("Enter the value of a = ");
   scanf("%f",&a);
   printf("\nEnter the value of b = ");
   scanf("%f",&b);
   printf("\nEnter the value of c = ");
   scanf("%f",&c);

   d = b * b - 4*a*c;

    if(d>0){
    x1 = (- b + sqrt(d))/(2*a);
    x2 = (- b - sqrt(d))/(2*a);

    printf("\n\t The value of x1 = %.2f\n",x1);
    printf("\n\t The value of x2 = %.2f\n",x2);


    }

    else if(d==0){
    x = - b/(2*a);
     printf("\n\t The value of x = %.2f\n",x);
    }
    else{
    printf("\n\tThere is no real solution!!!!\n");
    }
}
