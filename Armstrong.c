#include <stdio.h>
int main() {
            int num,rhs,res=0,onum;
            printf("enter three digit number");
            scanf("%d",&num);
            onum=num;
            while(onum!=0)
            {
                 rhs=onum%10;
                 res+=rhs*rhs*rhs;
                 onum=onum/10;
            }
            if(res==num)
            {
                printf("it is a Armstrong number");
                
            }
            else
            {
                printf("its not a Armstrong");
            }

	return 0;
}
