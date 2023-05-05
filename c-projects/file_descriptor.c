#include <stdio.h>

int main() {

   /*declare a file pointer*/
   FILE *fp;

   /*assign file pointer to create/overwrite file for read and write*/
   fp = fopen("text.txt", "w+");

/*use fprintf function to write to the file*/
   fprintf(fp, "This is testing for fprintf...\n");

   /*use fputs to write to the second line*/
   fputs("This is testing for fputs...\n", fp);

   /*close the file with fclose funtion (VERY IMPORTANT)*/
   fclose(fp);
}
