#include"stdio.h"
#include "math.h"
#include"string.h"
#include "operations.h"
void main()
{
    char input[30];
    while(1)
    {
    int choice; 
    printf("\n\t\t\t\tBINARY OPERATIONS\t:\n\n\t1 for Binary_to_Decimal\n\t2 for Binary_to_Octal\n\t3 for Binary_To_Hexadecimal\n\t0 to exit\n\n\t\t");
    printf("\n\tEnter your choice  :");
    scanf("%d",&choice);
    if (choice > 3 || choice < 0)
    {
        printf("\n\tInvalid Input !!\n\n\tPlease Choose between 0 t0 3\n");
    }
    else
    { 
        if (choice==0)
        {
            printf("\n\n\t\t\t     ---->  EXITING  <----\n\n\n");
            break;
        }
        printf("\n\tEnter Binary Number  :");
        scanf("%10s",input);
        printf("\n");
        int countbin=0;
        int dot=0;
        for(int i=0;i<strlen(input);i++)
        {
            if(input[i]=='.')
            {
                dot+=1;
            }
            if(input[i]=='1' || input[i]=='0')
            {
                countbin+=1;
            }
        }
        if(dot==0)
        {
            if(countbin!=strlen(input))
            {
                printf("Invalid Input !!\n");
                break;
            }
        }
        else if(dot>1)
        {
            printf("Invalid Input !!\n");
            break;
        }
        else if(dot==1)
        {
            if(countbin != strlen(input)-1)
            {
                printf("Invalid Input !!\n");
                break;
            }
        }
        switch(choice)
        {
        case 1:
                printf("%lf\n",Binary_to_Decimal(input));
                break;
        case 2:
                Binary_to_Octal(input);
                break;
        case 3:
                Binary_To_Hexadecimal(input);
                break;
        default:
                printf("Invalid Input !!");
        }
    }
    }
}
