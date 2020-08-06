
#include <stdio.h>

void main()
{
//Question two Lab Exercise 1
    int i, j, rows;

   
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    
    for(i=1; i<=rows; i++)
    {
        
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

       
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        
        printf("\n");
    }
    
    int FirstNum, SecondNum;
    printf("Plz EnTer Number first For Multiply And Divided");
    scanf("%d", &FirstNum);
    
    printf("plz Enter Second Number");
    scanf("%d", &SecondNum);
    
  	int multiply = FirstNum * SecondNum;
    printf("MULTIPLY ANSWER IS : %d", multiply);
    printf("\n");
    int divided = FirstNum / SecondNum;
    printf("DIvIDED ANSWER IS : %d", divided);
    
    
}

