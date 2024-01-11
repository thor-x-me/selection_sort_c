
#include <stdio.h>
void selection_sort(int A[], int n);

int main() 
{
    int L[] = {5,8,2,6,3,1}, n = 6, a;
    selection_sort(L, n);
    for(a = 0; a<n; a++) 
    {
        printf("%d \n", L[a]);
    }
}

void selection_sort(int A[], int n) 
{
    int i, j, temp, min;
    for(i=0; i<n-1; i++) 
    {
        min = i;
        for(j=i+1; j<n; j++) 
        {
            if( A[j] < A[min] ) 
            {
                min = j;
            }
        }
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
}
