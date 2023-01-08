#include <database.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int database_if_open( const char *filename)
{
    int data;
    char i_filename[144];
    sprintf(i_filename,"/home/emertxe/suneel/POC_dbList/database/rivers/textDB/%s",filename);
    data=database_open(i_filename);
    if(data < 0)
    {
        printf("Database file not found");
        return -1;
    }
    else
        return data;
}
int database_if_read(int data, char *cities)
 {
    int a;
     a=database_read(data, cities);
     if(a<0)
         return -1;
     else
         return a;

 }
void database_if_close(int data)
{
    close(data);
}

