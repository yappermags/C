#include <stdio.h>
#include <stdlib.h>
// #include "eg"

int main()
{
   char num[1000];
   char buf[1000];
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("eg","r");
//    fscanf(fptr,"%s",num);
//    fscanf(fptr,"%s",num);
//     printf("%d\n",SEEK_END);
//     printf("%s\n",num);
    int cur_line = 0;
    fgets(num,1000,fptr);
    while(fgets(num,1000,fptr) != NULL) {
        if (cur_line == 2) {
            sscanf(num,"%s\n",buf);
            break;
        }
        cur_line++;
    }
    fclose(fptr);
}