#include<stdio.h>
#include<stdlib.h>
int a[10], b, e;
int n = 0;
void create();
void display();
void main()
{
 int choice;

 while(1)
{
printf("\n\n~MENU~");
printf("\n 1. Create an array of N integers");
printf("\n 2. Display of array elements");
printf("\n 3.  EXIT");
printf("\nEnter your choice: ");
scanf("%d", &choice);
switch(choice)
 {
 case 1:            
 create();
 break;
 case 2:     
 display();
 break;
                                    
 case 3:
  printf("THANKS FOR CHOOSING THIS CHOICE");
  break;
                                    
default:  
printf("\nPlease enter a valid choice:");
}
}
}

void create()
{
int i;
printf("\nEnter the number of elements: ");
scanf("%d", &n);
printf("\nEnter the elements: ");
for(i=0; i<n; i++)
{                     
scanf("%d", &a[i]);           
}      
}

void display()
{
int i;
if(n == 0)
{
printf("\nNo elements to display");
return;
}
printf("\nArray elements are: ");
for(i=0; i<n;i++)
printf("%d\t ", a[i]);
}
