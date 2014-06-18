/* write_file.c */

#include <stdio.h>

int main()
{
   FILE *write_file;

   write_file = fopen("test.txt", "w+");
   fprintf(write_file, "This is my first line of text. I <3 C.\n");
   fprintf(write_file, "This is my second line of the file.\n");
   fclose(write_file);
}