#include<stdio.h>

int main(){
    int N,m,j,i,k,p;
    printf("Enter total item number of the array: ");
    scanf("%d",&N);

    int item[N];

    printf("\nEntered items of the array: \n");

    for(i=0;i<N;i++){
        printf("\n\tITEM [%d] = ",i+1);
        scanf("%d",&item[i]);
    }

    printf("\nEnter location of the deleting item: ");
    scanf("%d",&k);


    for(j=k-1;j<N-1;j++){
        item[j] = item[j+1];
    }


    printf("\nAfter deleting your items are: \n");

    for(p=0;p<N-1;p++){
        printf("\n\tITEM[%d] = %d\n",p+1,item[p]);
    }

    return 0;
}

