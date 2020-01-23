#include<stdio.h>
#include<string.h>


int main(){
	int i,j,k,str_length,ptr_length,position=-1,num,max; // str = string ; ptr = pattern
	char str[100],ptr[100];

	printf("\n\tEnter the text: ");
	scanf("%s", str);

	printf("\n\tEnter the pattern: ");
	scanf("%s", ptr);

	str_length = strlen(str);
	ptr_length = strlen(ptr);

	if (ptr_length > str_length) {
    printf("\a\nPattern length is greater than string length !!!!!!\n");
    }

    max = str_length - ptr_length + 1;

    for (i = 0; i < max; i++) {
        position = k = i;

        for (j = 0; j < ptr_length; j++) {
          num = -1;
          if (ptr[j] == str[k]) {
           k++;
           num++;
          }
          else {
           break;
          }
        }

      if (j == ptr_length) {
        num=0;
        printf("\n\tYour pattern matched. The location of the pattern is %d\n",position+1);
        break;
      }
    }

  if(num==-1){
  	printf("\nSorry,your pattern did not match!!!!\n");
  }

	return 0;
}
