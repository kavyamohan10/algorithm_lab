#include<stdio.h>
#include<stdlib.h>
#define MAXELE 1000000
void main(){
 int i,j,t;
 FILE *fpr;
 fpr=fopen("random.txt","w");
 for(i=0;i<MAXELE;i++)
   fprintf(fpr,"%d\n",rand());
  fclose(fpr);
 }
//program to generate a random file with randomnumber in it.
