#include <iostream>
#include <vector>
using namespace std;

void dynamic2D(vector<vector<int>> &twoD){
    cout<<"in Func :"<<endl;
    for (int i = 0; i < twoD.size(); i++)
    {
        cout<<"Row "<<i<<" : ";
        for (int j = 0; j < twoD[i].size(); j++)
        {
            cout<<twoD[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    // int a[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>a[i];
    // }   

    // cout<< "ARRAY values: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<< a[i] <<endl;
    // }
    // cout<<endl;

    //reverse 
    // int start = 0;
    // int end = 5-1;
    // int temp;
    // while(start<end)
    // {
    //     temp = a[start];
    //     a[start] = a[end];
    //     a[end] = temp;
    //     start++;
    //     end--;
        
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<< a[i] << " ";
    // }  

    //-----------------------------------------

    //Linear Search
    // int toFind;
    // cin>>toFind;

    // for (int i = 0; i < 5; i++)
    // {
    //     if (toFind == a[i])
    //     {
    //         cout<<"Element Exist"<<endl;
    //         break;
    //     }
        
    // }

    //-----------------------------------------

    //Dynamic Size use Vectors 
    //1-D Array
    // int n;
    // cout<<"Enter Size: ";
    // cin>>n;
    
    // vector<int> one_d(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>one_d[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout <<one_d[i]<<" ";
    // }
    // cout<<endl;


    //-----------------------------------------


    // 2-D Array
    // int arr[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<"Row "<<i<<" : ";
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }

    //-----------------------------------------
    

    //Dynamic 2-D Array
    // int row,col;
    // cin>>row>>col;
    // vector<vector<int>> twoD(row, vector<int>(col));
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin>>twoD[i][j];
    //     }
        
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     cout<<"Row "<<i<<" : ";
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<twoD[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // dynamic2D(twoD);



    
    
    return 0;
}
