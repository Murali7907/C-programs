#include <stdio.h>
int main() {

    int i, j, rows, num =1,numb;

    
    printf("Enter the number of rows:");

    scanf("%d", &rows);

   

    for (i = 1; i <=rows; ++i) {

     

        for (j = i; j <rows; j++) {
            
            numb=((rows*2)-num)+1;
            
            printf("%d ",numb);
            ++num;
           
          

        }

        printf("\n"); 

    }

    return 0;

}
