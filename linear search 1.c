#include <stdio.h>
#include <stdlib.h>

    int main(){
        int arr[5]={12,23,35,47,50};
        int n = 5;
        int key , i, found = 0;
        printf ("enter element to search :");
        scanf("%d",&key);
        for (i=0;i<n;i++){
        if(arr[i]==key){
        printf("elements %d found at postion%d\n",key,i+1);
        found =1;
        break;
        }
      }
      if (!found)
        printf("elements not found .\n");
        return 0;
       }
