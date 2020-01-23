#include<stdio.h>
                
int main(){
    int N,m,j,i,k,p;
    printf("Enter total item number of the array: ");
    scanf("%d",&N);

    int item[N], item_new[N+1];

    printf("\nEnter items of the array: \n");

    for(i=0;i<N;i++){
        printf("\n\tITEM [%d] = ",i+1);
        scanf("%d",&item[i]);
    }

    printf("\nEnter location of the inserting item: ");
    scanf("%d",&k);

    m = N;

    for(j=m;j>=k;j--){
        item[j] = item[j-1];
    }

    printf("\nEnter the inserting item, ITEM[%d] = ",k);
    scanf("%d",&item[k-1]);

    printf("\nAfter inserting your items are: \n");

    for(p=0;p<=m;p++){
        printf("\n\tITEM[%d] = %d\n",p+1,item[p]);
    }

    return 0;
}
