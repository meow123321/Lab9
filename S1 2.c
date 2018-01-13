#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    int i;
    int n;
    int search;

    printf("Cate elemente va avea vectorul? ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("Introduceti elementul: ");
        scanf("%d", &array[i]);
    }

    printf("Careeste valoarea pe care o cautati? ");
    scanf("%d", &search);


    for(i=0;i<n;i++)
    {
        if(array[i]==search)
        {
            printf("Elementul cautat este pe pozitia %d", i);
            break;
        }

    }

    return 0;
}
