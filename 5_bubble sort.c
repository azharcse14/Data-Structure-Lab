#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,j,ptr=1,max,min;
    
    printf("\n Enter How many number will you input:");
    scanf("%d",&n);
    int data[n+1];

    printf("\n Enter your numbers:");

    for(i=1;i<=n;i++){
        printf("\n\t\tData[%d] = ",i);
        scanf("%d",&data[i]);
    }

     while(ptr<=n-1){
        for(j=1;j<=n-1;j++){
            for(i=1;i<=n-j;i++){
                 max=0;min=0;
                 if(data[i]>data[i+1]){
                   max=data[i];
                   min=data[i+1];
				 }
                 else{
                   max=data[i+1];
                   min=data[i];
                 }
             data[i]=min;
             data[i+1]=max;
			 ptr++;
            }
        }
    }

    printf("\n Sorted entered numbers:\n");
    for(j=1;j<=n;j++){
        printf("\t\tData[%d] = %d\n",j,data[j]);
    }
    
    return 0;
}
