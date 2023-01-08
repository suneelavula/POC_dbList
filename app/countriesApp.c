#include <stdio.h>
#include <database.c>
#include <database.h>
int main(void)
   {
      char a[144];
      int d;
      char river_cities[1024];
      int choice=1,b;
      while(choice)
     {
         printf("Enter country name: ");
         fscanf(stdin, "%s", a);  //use %s not 143[^t]
         b = database_open(a);
         if( b < 0 )
         {
             printf("state list for %s not found\n",a);
         }
         else
         {
             d=database_read(b,&river_cities[0]);
             if( d > 0 )
             {
               printf("%s",river_cities);
               memset(river_cities, '\0', sizeof(river_cities));
             }

         }
         database_close(b);
         printf("if you want to enter another country name press 1 otherwise press 0: ");
         scanf("%d",&choice);
     }
     return 0;
  }

