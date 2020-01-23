#include<stdio.h>

int main(){
    int loc,N,i,num,j=1,k=0;
    printf("Enter how many number you will input:");
    scanf("%d",&N);

    int Data[N];

    printf("\nEnter your numbers:\n");

    for(i=1;i<=N;i++){
        printf("\n\t\t%d. ",i);
        scanf("%d",&Data[i]);
    }

    printf("\nEnter the number you want to search: ");
    scanf("%d",&num);

    printf("\nThe location of your searched number: ");

    for(i=1;i<=N;i++){
        if(Data[i]==num){
            k++;
          if(k>0){
            if(j>1){printf(", ");}
            printf("%d",i);
            j++;}}}
        if(k==0){printf("Your searched item didn't match!!!!");}

    printf(".\n");
    return 0;
}
