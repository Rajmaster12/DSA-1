// Bubble sorting //

#include<stdio.h>
#define SIZE 5
int main()
{ 
int i, arr[SIZE], item, low, high, mid;
printf("Enter 5 numbers");
for (i=0; i<SIZE; i++)
   {
     scanf("%d",&arr[i]);
   }
printf("Enter a number to find :");
scanf("%d", &item);
low = 0;
high =SIZE -1;
mid = (low+high)/2;

while (low <= high)
     {
       if(arr[mid] < item)
        {
           low = mid + 1;
        }
       else if(arr[mid] == item)
        {
          printf("%d found at location %d\n", item,mid+1);
          break;
        }
else
{
high = mid - 1;
}
mid = (low + high)/2;
}
if(low > high)
{
printf("Not found! %d is not present in the list.",item);
}}
