#include <stdio.h>


int main()
{
  FILE *fp;
  char word[50];
  fp = fopen("data.txt","w");
  if( fp == NULL){
    printf("file cannot be opened \n");
    return 1;
}
fprintf(fp, "Welcome\n");
fprintf(fp, "C Programming");

fclose(fp);
fp = fopen("data.txt","r");

fscanf(fp,"%s",word);
printf("first word : %s\n",word);

printf("current postion: %1d\n",ftell(fp));

fseek(fp, 8, SEEK_SET);
printf("postion after fseek: %1d\n",ftell(fp));

rewind(fp);
printf("postion after rewind: %1d\n",ftell(fp));

fclose(fp);
  return 0;
}
