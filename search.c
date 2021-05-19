#include<stdio.h>
void linear();
void binary();
void main()
{
while(1){
int choice;
printf("1.linear search\n 2.binary search\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
 case 1:linear();
         break;
 case 2:binary();
         break;
 default:printf("wrong choice");
 }
}
}
void linear()
{
 int i,a[100],search,n,flag;
 printf("enter the size of array");
 scanf("%d",&n);
 printf("enter the elements of the array:");
 for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
   printf("the element to be searched:");
   scanf("%d",&search);
   for(i=0;i<n;i++)
   {
    if(a[i]==search){
     flag=1;
     break;
     }
    else{
    flag=0;
    }
    }
    if(flag==1){
     printf("element found at position:%d\n",i);
     }
     else{
     printf("element not found:");
     }
    }
 void binary()
 {
 int i,first=0,last,a[100],mid,n,search;
 printf("enter the size of array");
 scanf("%d",&n);
 printf("enter the elements of the array:");
 for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
   printf("enter the element to be searched:");
   scanf("%d",&search);
   
   last=n-1;
  // mid=(first+last)/2;
   while(first<=last){
    mid=(first+last)/2;
     if(a[mid]==search){    
     printf("search successful at %d\n",mid+1);
     break;    }
    if(a[mid]<search)
      first=mid+1;      
    else
    last=mid-1;  
    
    }
  if (first>last){
  printf("element not found");
  }
  }
   
