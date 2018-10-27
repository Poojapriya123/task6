/* A typical recursive implementation of quick sort */
#include<stdio.h>

struct maxheap
{
    int *arr;
    int size;

};

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
struct maxheap* createheap(int *arr,int count)
{
  struct maxheap *heap=(struct heap *)malloc(sizeof(struct maxheap));
   heap->arr=(int *)malloc(sizeof(int)*count);
   heap->arr=arr;
   heap->size=count;

return heap;
}
int main()
{


     int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    struct maxheap *heap=createheap(arr,6);
    int i;
    for(i=0;i<size;i++)
    printf("%d",heap->arr[i]);

}
