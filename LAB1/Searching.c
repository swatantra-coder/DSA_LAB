#include <stdio.h>    

int main()
{
    int n;
    printf("Enter the length of array:");
    scanf("%d", &n); 
  
    int arr[n];
    for(int i=0;i<n;i++)
    {
       printf("Enter the number:");
       scanf("%d", &arr[i]); 
        
    }
    
    int key;
    printf("Enter the element you want to search:");
    scanf("%d", &key); 
    
    int flag=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Element is Present:");
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Number is not Present:");
        
    }

    return 0;
}
