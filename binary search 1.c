#include <stdio.h>
#include <stdlib.h>


int main() {
    int arr[10], n, key, low, high, mid;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (unsorted):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

 while (low<=high){
    mid =(low +high)/2;
 if (arr[mid]==key){
  printf ("element %d found at postion %d.\n",key,mid+1);
   found =1;
   break;
 }
 else if (key<arr[mid])
        high = mid -1;
     else
        low = mid +1;
     }
     if (!found)
        printf ("elements not found .\n");
        return 0;
       }
