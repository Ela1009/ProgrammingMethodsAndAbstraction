#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char* funkcija_spoji (char str1[], char str2[], char str3[])
{
    int duljina1=strlen(str1);
    int duljina2=strlen(str2);
    int duljina3=strlen(str3);
    int prvi, drugi;


    if (duljina1>duljina2 && duljina1>duljina3 && duljina2>duljina3)
    {
      prvi=duljina1;
      drugi=duljina2;
    }
    else if (duljina1>duljina2 && duljina1>duljina3 && duljina3>duljina2)
    {
      prvi=duljina1;
      drugi=duljina3;
    }
    else
    {
      prvi=duljina2;
      drugi=duljina3;
    }

    char* rezultat = malloc (prvi+drugi+1);

    if (rezultat == NULL) {
        printf("Nije alocirana memorija\n");
    }

    if (duljina1>duljina2 && duljina1>duljina3 && duljina2>duljina3)
    {
        strcpy (rezultat, str1);
        strcat (rezultat, str2);
    }
    else if (duljina1>duljina2 && duljina1>duljina3 && duljina3>duljina2)
    {
        strcpy (rezultat, str1);
        strcat (rezultat, str3);
    }
    else if (duljina2>duljina1 && duljina2>duljina3 && duljina3>duljina1)
    {
       strcpy (rezultat, str2);
        strcat (rezultat, str3);
    }
    else
    {
        strcpy (rezultat, str3);
        strcat (rezultat, str2);
    }

    return rezultat;

}

int main (void)
{
    char str1[]="aaa";
    char str2[]="bbbbb";
    char str3[]="ccccccccc";
    char* rezultat=funkcija_spoji(str1,str2,str3);
    printf("%s\n", rezultat);
    free(rezultat);

    return 0;
}
