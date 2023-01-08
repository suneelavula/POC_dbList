#include <database.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int database_open( const char *filename)
{
    int data;
    data=open(filename,O_RDONLY);
    if(data < 0)
    {
        return -1;
    }
    else
        return data;
}
int database_read(int data, char *cities)
 {
    int a;
     a=read(data, cities,1024);
     if(a<0)
         return -1;
     else
         return a;

 }
void database_close(int data)
{
    close(data);
}

