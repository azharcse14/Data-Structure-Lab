#include<stdio.h>

int main(){
    int i,N,Max,j=1;

    printf("\n\tEnter how many numbers you will input: ");
    scanf("%d",&N);

    int num[N];

    printf("\n\tEnter your numbers :\n\n");

    for(i=1;i<=N;i++){
        printf("\t\t\t%d. ",i);
        scanf("%d",&num[i]);
    }

    Max = num[1];

    for(i=1;i<=N;i++){
        if(Max<=num[i]){ Max = num[i];}
    }

    printf("\n\n\tThe maximum value of your entered numbers = %d",Max);
    printf("\n\n\tThe location of maximum number = ");

    for(i=1;i<=N;i++){
        if(num[i] == Max)
            {
                if(j!=1){printf(", ");}
                printf("%d",i);j++;
             }
    }

    printf(" .\n");
    return 0;
}
