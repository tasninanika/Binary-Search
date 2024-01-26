#include<stdio.h>

int main(){

    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array numbers: ");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);

    }



    int low=0, high=n-1, value, mid;
    printf("Enter a digit: ");
    scanf("%d",&value);
    mid = (low + high) / 2;
    while(low<=high){
            if(arr[mid]==value){
                    printf("Element found in position %d",mid);
                    break;

            }

            if(arr[mid]>value){
                high = mid - 1;

            }

            if(arr[mid]<value){
                low = mid + 1;
            }

            mid = (low + high)/ 2;

    }

    if(low>high){
        printf("%d can not found",value);

    }



    return 0;
}

