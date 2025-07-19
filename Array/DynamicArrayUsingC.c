#include<stdio.h>
#include<stdlib.h>





int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        printf("\nenter the element at a[%d] index : ",i);
        scanf("%d", &arr[i]);
    }

    int choice;
    do{
        printf("\npress 1 to increase the size of array and add one more element\n");
        printf("press 2 to shrink the size of array\n");
        printf("press 3 to show the elements in array\n");
        printf("press 4 to exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
             n = n+1;
            arr = (int *)realloc(arr, n*sizeof(int));
            printf("\nenter new element in arr : ");
            scanf("%d",&arr[n-1]);
            break;

            case 2:
             n = n-1;
            arr = (int *)realloc(arr, n*sizeof(int));
            printf("\n array is shrinked new size of array = %d", n);
            break;

            case 3:
            printf("all array elements are : ");
            for(int i=0; i<n; i++){
                printf("%d  ",arr[i]);
            }
            break;
            case 4:
            break;
            default:
            printf("please enter correct option\n");
        }
    }
    while(choice !=4);
    free(arr);
}
