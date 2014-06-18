/* read_file.c */

#include <stdio.h>

int main()
{
   FILE *read_file;
   char buff[255];

   read_file = fopen("test.txt", "r");
   
   fgets(buff, 255, (FILE*)read_file);
   printf("Line One: %s\n", buff);
   
   fgets(buff, 255, (FILE*)read_file);
   printf("Line Two: %s\n", buff);
   fclose(read_file);
}