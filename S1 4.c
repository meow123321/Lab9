#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   int n;
   int array[10];
   int aux;

   printf("Cate elemente va avea vectorul? ");
   scanf("%d", &n);

   for(i=0;i<n;i++)
   {
       printf("Introduceti elementul: ");
        scanf("%d", &array[i]);
   }
   i=0;
   while(i<n)
    {
        for(i=0;i<n;i++)
        {
            if(array[i]>array[i+1])
            {
                aux=array[i];
                array[i]=array[i+1];
                array[i+1]=aux;
            }
        }
      i++;
    }



   printf("Vectorul ordonat arata asa: \n");
   for(i=0;i<n;i++)
   {
       printf("%d\n", array[i]);
   }

    return 0;
}
