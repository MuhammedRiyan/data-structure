#include<stdio.h>
void main()
{
  int temp=*x;
  *x=y;
  y=temp;
}
void bubblesort(int a[],int n)
{ 
  int i,j,swapped;
  for(i=0;i<n-1;i++ )
   { 
      swapped=1;
      for(j=0;j<n-1;j++)
      {  
        if(a[j]>a[j+1])
        swap(&a[j],&a[j+1]);
        swapped=1;
      }
      if(swapped==0)
      break;
   }
}
void printarray(int ar[50],int size)
   {
     int i;
     for(i=0;i<size;i++)
      printf("%d",ar[i]);
   }   
int main()
   {
     int a[]={1,2,3,4,5,6,7,8,9},n;
     bubblesort(a,n);
     printf("The sorted array");
     printarray(a,n);   
   }

