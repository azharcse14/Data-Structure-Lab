#include<stdio.h>

int main(){
    int n,i,j,k,ptr=1,max,min;
    printf("Enter How many number will you input:");
    scanf("%d",&n);
    int data[n+1],item,mid,beg,end,loc=0,mid1,count=0;

    printf("\nEnter your numbers:");

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


    printf("\nSorted entered numbers:\n");
    for(i=1;i<=n;i++){
        printf("\t\tData[%d] = %d\n",i,data[i]);
    }

    printf("\nEnter the number you want to search:");
    scanf("%d",&item);

    beg=1;end=n;
    mid1=(beg+end)/2;

    while(1){
        mid=(beg+end)/2;
        if(item<data[mid] || item>data[mid]){
            if(item<data[mid]){
                end=mid-1;continue;
            }

            else{
                beg=mid+1;continue;
            }
          
        }
        
        else if(item==data[mid]){
		  loc=mid;break;
		}
		
		count++;
		
		printf("\n\t\t\tPASS = %d",count);
        
        else if(count>mid1 && item!= data[mid]){loc=0;break;}
        
		
		
	}

  if(loc==0){printf("\nSorry!!!! Your searched data did not match.\n");}
  else{printf("\nThe location of your searched data = %d\n",loc);}

    return 0;

}
