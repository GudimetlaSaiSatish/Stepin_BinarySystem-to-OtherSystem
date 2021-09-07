#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "math.h"
#include "string.h"


int binary_check(char input[])
{
        int countbin=0;
        int dot=0;
        int k;
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
                k = 0;
                return k;
                exit(0);
            }
        }
        else if(dot>1)
        {
            k = 0;
            return k;
            exit(0);
        }
        else if(dot==1)
        {
            if(countbin != strlen(input)-1)
            {
                k = 0;
                return k;
                exit(0);
            }
        }
        k = 1;
        return k;
}

int validate_choice(int ch)
{
    if (ch > 3 || ch < 0)
    {
        return 0;
    }
    else return 1;

}


int findReverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}
int Get_Integral(char s_value[])
{
    char s_integral[60], s_fractional[60];
    int i, found = 0, count = 1, integral, fractional;
    for (i = 0; s_value[i] != '\0'; i++)
    {
        if (!found)
        {
            if (s_value[i] == '.')
            {
                found = 1;
                s_integral[i] = '\0';
                continue;
            }
            s_integral[i] = s_value[i];
            count++;
        }
        else
            s_fractional[i - count] = s_value[i];
    }
   

    integral = atoi(s_integral);
   
    return integral;
}
int Get_Fractional(char s_value[])
{
    char s_integral[60], s_fractional[60];
    int i, found = 0, count = 1, integral, fractional;
    for (i = 0; s_value[i] != '\0'; i++)
    {
        if (!found)
        {
            if (s_value[i] == '.')
            {
                found = 1;
                s_integral[i] = '\0';
                continue;
            }
            s_integral[i] = s_value[i];
            count++;
        }
        else
            s_fractional[i - count] = s_value[i];
    }
    s_fractional[i - count] = '\0';

    fractional = atoi(s_fractional);
    return fractional;
}
bool checkIsBinaryIntegral(int bin) 
{
    while (bin != 0) {
        int k = bin % 10;
        if (k != 1 && k != 0) {
            return false;
        }
        bin /= 10;
    }
    return true;
}
double Binary_to_Decimal(char input[])
{
    int integral=Get_Integral(input);
    int fractional=Get_Fractional(input);
    if(checkIsBinaryIntegral(integral)==false || checkIsBinaryIntegral(fractional)==false)
    {
        printf("Invalid Input\n");
    }
    else
    {
        int sum=0;
        int rem,i=0;
        while(integral!=0)
        {
            rem=integral%10;
            integral=integral/10;
            sum=sum+(rem*pow(2,(i++)));
        }
        double fracsum=0.00;
        rem,i=1;
        fractional=findReverse(fractional);
        while(fractional!=0.0000)
        {
            rem=fractional%10;
            fractional=fractional/10;
            fracsum=fracsum+(rem*(1/pow(2,i)));
            i+=1;
        }
        return sum+fracsum;
    }
}
void Binary_To_Hexadecimal (char input[])
{
    double decimal=Binary_to_Decimal(input);
    int dec=decimal;
    double frac=decimal-dec;
    int i = 0;
    char hexNum [20];
    char hexfrac[20];
    while (dec != 0) 
    {
        hexNum [i++] = dec % 16 < 10 ? (48 + dec % 16) : (55 + dec % 16);
        dec /= 16;
    }
    hexNum [i] = '\0';
    for (int k = i - 1; k > -1; k--) 
    {
        printf ("%c", hexNum [k]);
    }
    printf(".");
    int k=1;
    for(int i=0;k!=0;i++)
    {
        k=frac*16;
        char c=k % 16 < 10 ? (48 + k % 16) : (55 + k % 16);
        frac=frac*16;
        frac=frac-k;
        printf("%c",c);
    }
    printf("\n");
}
void Binary_to_Octal(char inp[])
{
    double input = Binary_to_Decimal(inp);
    int octalNumber[10], number, i, j;
    int dec;
    dec=input;
    double frac=input-dec;
    for(i = 0; dec > 0; i++)
    {
        octalNumber[i] = dec % 8;
        dec = dec / 8;
    }
    for(j = i - 1; j >= 0; j--)  
    {
        printf("%d", octalNumber[j]);
    }
    printf(".");
    int k=1;
    for(i=0;k!=0;i++)
    {
        k=frac*8;
        frac=frac*8;
        frac=frac-k;
        printf("%d",k);
    }
    printf("\n");
}
