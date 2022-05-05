/**
 * @file ASCII.c
 * @author Malakalapalli Nagendra
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
#include <string.h> 


void SUM(int len, char *ASCII)
{   
    char* name = ASCII;
    int sum=0;
    int Ascii[len];
    for(int i=0; i<len; i++)
    {   
        printf("%c = %X\n",name [i], name [i]);
        Ascii[i]=(int)*(ASCII+i);
        sum +=  Ascii[i];
    }
    printf("Sum : %X",sum);
}
