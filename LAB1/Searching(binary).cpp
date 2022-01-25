#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<" Enter the length of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element in the array:";
        cin>>arr[i];
    }
    
    int key;
    
    cout<<"Enter the element you want to search:";
    cin>>key;
    
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(arr[mid]==key)
        {
            cout<<"Element is present";
            return 0;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    
    cout<<"Element is not present";
    

    return 0;
}
