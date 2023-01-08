#include <stdio.h>
#include <string.h>
#include <database_if.h>
int main(void)
   {
      char riverName[144];
      int rSize;
      int riverNameFd;
      char riverCities[1024];
      int b;
      char c='1';
      while(c == '1')
     {
         printf("Enter River name: ");
         fscanf(stdin, "%s", riverName);  //use %s not 143[^t]
         riverNameFd = database_if_open(riverName);
         if( riverNameFd < 0 )
         {
             printf("River database for %s not found\n",riverName);
         }
         else
         {
             rSize=database_if_read(riverNameFd,&riverCities[0]);
             if( rSize > 0 )
             {
               printf("%s",riverCities);
               memset(riverCities, '\0', sizeof(riverCities));
             }

         }
         database_if_close(riverNameFd);
         printf("if you want to enter another country name press 1 otherwise press any key: ");
         scanf(" %c",&c);
     }
     return 0;
  }

