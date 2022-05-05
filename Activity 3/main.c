/**
 * @file main.c
 * @author Malakalapalli Nagendra
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "ASCII.h"  // User defined Header file ASCII.h
#include <string.h> 
#include<stdio.h>

void SUM(int, char*);             // Function Prototype
int  main()
{
    char name[100];                // Creating Charater Array 
    printf("Enter name :\n");
    // scanf("%s",name);
    gets(name);
    char *ASCII = name;             // Assign name to ASCII pointer of character type
    int len=strlen(ASCII);          // Length of the Array
    SUM(len,ASCII);                 // Calling SUM Function
    return 0;
}

