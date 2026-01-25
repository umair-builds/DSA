#include<iostream>
using namespace std;


int binarySearch(int arr[], int size, int find)
{
    int left = 0;
    int right = size-1;
    while(left <= right)
    {
        int mid = left + ((right-left)/2);
        if (arr[mid]==find)
        {
            return mid;
        }
        else if (arr[mid] > find)
        {
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }   
    return -1;
}

int main(){
     int n = 7;
     int arr[] = {3,4,5,6,7,8,9};

     cout<<"Enter what element wanna search: ";
     int find;
     cin>>find;

     int ans = binarySearch(arr,n,find);
     if (ans != -1)
     {
        cout<<"number avaiable at: "<<ans+1<<" postion.";
     }
     else
     {
        cout<<"not found";
     }
     return 0;

}