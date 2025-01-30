#include<stdio.h>
void quicksort(int [],int,int);
int partition(int [],int,int);
int main()
{
int a[25],n,i;
printf("How many elements?");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
printf("The resultant array:\n");
for(i=0;i<n;i++)
printf("%5d",a[i]);
return 0;
}




void quicksort(int a[25],int lb,int ub)
{
int loc;
if(lb<ub)
   {
     loc=partition(a,lb,ub);
     quicksort(a,lb,loc-1);
     quicksort(a,loc+1,ub);
   }
}



int partition(int a[25],int lb,int ub)
{
int pivot,start,end,temp;
pivot=a[lb];
start=lb;
end=ub;
while(start<end)
{
while(a[start]<=pivot)
start++;
while(a[end]>pivot)
end--;
if(start<end)
temp=a[start],
a[start]=a[end],
a[end]=temp;
}
a[lb]=a[end];
a[end]=pivot;
return end;
}

