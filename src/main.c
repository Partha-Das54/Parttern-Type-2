//create by partha Das 

//Enter a positive integer number less than 105

#include <stdio.h>

int main() {
    int n,row,col;
    if(n<=10){
    printf ("\n————————————————————————————————————————————\n");
    printf ("\t\t\t\t\t\t\t\tParttern type 2 ");
    printf ("\n————————————————————————————————————————————\n\n");
    
    
    scanf("%d",&n);
    
    
    //parttern = 1
    printf ("parttern = 1 >>>\n\n");
       for(row=n;row>=1;row--)
       {
            for(col=1;col<=row;col++)
            {
                printf ("%d ",col);
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     //parttern = 2
     printf ("parttern = 2 >>>\n\n");
       for(row=n;row>=1;row--)
       {
            for(col=1;col<=row;col++)
            {
                printf ("%d ",row);
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
    // parttern = 3
     printf ("parttern = 3 >>>\n\n");
       for(row=n;row>=1;row--)
       {
            for(col=1;col<=row;col++)
            {
                printf ("%d ",col%2);
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     //parttern = 4
     printf ("parttern = 4 >>>\n\n");
       for(row=n;row>=1;row--)
       {
            for(col=1;col<=row;col++)
            {
                printf ("%d ",row%2);
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     //parttern = 5
     printf ("parttern = 5 >>>\n\n");
       for(row=n;row>=1;row--)
       {
            for(col=1;col<=row;col++)
            {
                printf ("%c ",col+64);
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
     //parttern = 6
     printf ("parttern = 6 >>>\n\n");
       for(row=n;row>=1;row--)
       {
            for(col=1;col<=row;col++)
            {
                printf ("%c ",col+96);
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     //parttern = 7
     printf ("parttern = 7 >>>\n\n");
       for(row=n;row>=1;row--)
       {
            for(col=1;col<=row;col++)
            {
                printf ("* ");
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
     //parttern = 8
     printf ("parttern = 8 >>>\n\n");
       for(row=n;row>=1;row--)
       {
            for(col=1;col<=row;col++)
            {
                printf ("$ ");
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
   }
   
   else {
     printf("enter the number less than 10");
   }
    return 0;
}




//create by partha das