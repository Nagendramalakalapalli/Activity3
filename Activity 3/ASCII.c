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
        Ascii[i]=(int)*(ASCII+1);
        sum = sum+ Ascii[i];
    }
    printf("Sum : %X",sum);
}
