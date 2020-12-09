#include <stdio.h>
#include <string.h>
/*Vulnerable C code - BUffer Overflow POC*/

int main (int argc, char** argv)
{
        char buffer[5000];
        strcpy(buffer, argv[1]);
        
        return 0;
        
 }
