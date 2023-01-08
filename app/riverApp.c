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
      char choice = '1';
      while(choice == '1')
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
         fflush(stdin);
         printf("if you want to enter another country name press 1 otherwise press 0: ");
         scanf("%c",&choice);
     }
     return 0;
  }

