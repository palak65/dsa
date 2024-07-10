#include <stdio.h>
#include <stdlib.h>
#define n 10

void print(int a[])
{
   
    printf("\n");
    for (int i = 0; i < n; i++)
  
        printf("%d ", a[i]);
    
}
void QuickSort(int a[], int first, int last)
{
    int i, j, t, pivot;
    if (first < last)
    {
       
        print(a);
        pivot = first;
        i = first, j = last;
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < last)
           
                i++;
            
            while (a[j] > a[pivot])
    
                j--;
           
            if (i < j)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
            t = a[pivot];
            a[pivot] = a[j];
            a[j] = t;

            QuickSort(a, first, j - 1);
            QuickSort(a, j + 1, last);
        }
    }

int main()
{
     int a[n]={50,30,10,90,80,20,40,70,60,85};
      QuickSort(a, 0, n - 1);
    printf("\nAfter Quick sort : ");
    print(a);
}
