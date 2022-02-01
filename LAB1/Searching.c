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

#include<iostream>
using namespace std;
void bubbleSort(int* a,int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("Enter the length of array:");
	scanf("%d",&n);
	int a[1000];
	for (int i = 0; i < n; i++)
	{   printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	bubbleSort(a, n);
	
	if (n >= 2)
	{
		printf("second minimum: %d\n",a[1]);
		printf("second maximum: %d",a[n - 2]);
		return 0;
	}
	else
	{
		printf("second minimum: %d",a[0]);
		printf("second maximum: %d",a[0]);
		return 0;
	}
	return 0;
		

	
}
