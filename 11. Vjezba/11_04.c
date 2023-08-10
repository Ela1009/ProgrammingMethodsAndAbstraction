#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* funkcija (char* string)
{
    char* novi = (char*)malloc((strlen(string)*2)*sizeof(char));

    return strcat((strcpy(novi,string)), string);
}


int main (void)
{
    char* string="primjer";
    char* novi = funkcija (string);
    printf("%s\n", novi);
    return 0;

}
