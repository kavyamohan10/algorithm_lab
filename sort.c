#include<stdio.h>
void bubble();
void insertion();
void selection();
void main()
{


while(1){
int choice;
printf("1.bubble sort\n 2.insertion sort \n 3.selection sort\n");
printf("enter the choice:");
scanf("%d",&choice);
switch(choice)
{
 case 1:bubble();
        break;
 case 2:insertion();
         break;
 case 3:selection();
         break;
 default:printf("invalid choice");
 }
 }
 }
 void bubble(){
  int i,j,temp;
  int n,a[100];
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
   for(i=0;i<n-1;i++)
     for(j=0;j<n-i-1;j++)
       if(a[j]>a[j+1])
       {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
         }
        printf("the sorted array is:\n");
        for(i=0;i<n;i++){
        printf("%d\n",a[i]);
        }
       }
void insertion()
{
int i,j,temp;
int n,a[100];
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]); }
for(i=0;i<n;i++){
for(j=i+1;((j>0)&&(a[j-1]>a[j]));j--){
 temp=a[j];
 a[j]=a[j-1];
 a[j-1]=temp;
 }
 }
 printf("the sorted array is:\n");
        for(i=0;i<n;i++){
        printf("%d\n",a[i]);
  }
  }
 void selection()
 {
 int i,j, temp,min;
 int n,a[100];
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
 for(i=0;i<n-1;i++){
  min=i;
  for(j=i+1;j<n;j++){
   if(a[j]<a[min])
 {
  temp=a[j];
  a[j]=a[min];
  a[min]=temp;
  }
  }
  }
   printf("the sorted array is:\n");
        for(i=0;i<n;i++){
        printf("%d\n",a[i]);
}
}    
        
