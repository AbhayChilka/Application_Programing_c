#include<stdio.h>

int Multiplication(int iValue1, int iValue2)
{
   int value = 0;
   
   value  = iValue1*iValue2 ;

   return value ;
}

int main()
{
    int iNo1 = 10;
    int iNo2 = 11;

    int iAns = 0 ;

    iAns  = Multiplication(iNo1, iNo2);

    printf("Multiplication is  is %d",iAns); 
}