#include<stdio.h>
void main(){
    int n;
    int i;
    int arr1[n];
    int even_count=0,odd_count=0;
    printf("Enter the no. of element :");
    scanf("%d",&n);


    printf("Enter the elements of array:");
    for (i=0;i<n;i++){
        scanf("%d",&arr1[i]);

    }
    for(i=0;i<n;i++){
        if(arr1[i]%2==0){
            even_count++;

        }else{
            odd_count++;
        }
    }
    printf("Number of even count:%d",even_count);
    printf("number of odd count:%d",odd_count);

}



