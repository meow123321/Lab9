#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[25],int first,int last){
   int i, j, pivot, aux;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j)
    {
         while(a[i]<=a[pivot]&&i<last)
            i++;
         while(a[j]>a[pivot])
            j--;
         if(i<j){
            aux=a[i];
            a[i]=a[j];
            a[j]=aux;
         }
      }

      aux=a[pivot];
      a[pivot]=a[j];
      a[j]=aux;
      quicksort(a,first,j-1);
      quicksort(a,j+1,last);

   }
}

int main(){
   int i, n, a[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   quicksort(a,0,n-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);

   return 0;
}
