
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



void main()
{
int i,j,temp;
int numELE=1000000;
int n,a[numELE];
int isSwapped=0;
clock_t startt,endt;
double totalt;
FILE *fpr;                                                                           
//printf("enter the size of array:");
//scanf("%d",&n);
//printf("enter the array elements:");
for(i=0;i<numELE;i++)
scanf("%d",&a[i]); 
startt=clock();
for(i=0;i<numELE;i++){
for(j=i+1;((j>0)&&(a[j-1]>a[j]));j--){
 temp=a[j];
 a[j]=a[j-1];
 a[j-1]=temp;
 isSwapped=1;
 }
 
 if(isSwapped==0) break;}
 endt=clock();
 
     totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
     printf("%lf",totalt);
    }    
 
