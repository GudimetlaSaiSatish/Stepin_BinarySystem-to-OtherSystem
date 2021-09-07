#include"stdio.h"
#include"string.h"
#include "operations.h"
#include "stdlib.h"
void main()
{
  char input[30];
  int key,valid,run = 1;
  while(run)
  {
    int choice;
    printf("\n\t\t\t\tBINARY OPERATIONS\t:\n\n\t1 for Binary_to_Decimal\n\t2 for Binary_to_Octal\n\t3 for Binary_To_Hexadecimal\n\t0 to exit\n\n\t\t");
    printf("\n\tEnter your choice  :");
    scanf("%d",&choice);
    valid = validate_choice(choice);
    if (valid == 0)
    {
        printf("\n\t-->  Invalid Choice !!\n\n\t-->  Please Choose between 0 t0 3\n\n");
    }
    
    while(valid)
    { 
        if (choice==0)
        {
            printf("\n\n\t\t\t     ---->  EXITING  <----\n\n\n");
            break;
        }
        printf("\n\tEnter Binary Number  :");
        scanf("%10s",input);
        printf("\n");
        key = binary_check(input);
        if(key == 0) 
        {
            printf("\t\t\t\tINVALID BINARY NUMBER !!\n\n\n");
        }
        while(key)
        {
            switch(choice)
            {
                 case 1:
                         printf("%lf\n",Binary_to_Decimal(input));
                         exit(0);
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
            key = 0;
        }
        valid = 0;
    }
    run = 0;
  }
}
