#include<stdio.h>
void main(){
    int arr[10],i,item;

    printf("Enter the values of arry:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter no you have to find:");
    scanf("%d",&item);
    
    for(i=0;i<10;i++){
        if(arr[i]==item){
            printf("Number found ont the index %d",i+1);
        }

    }

}
