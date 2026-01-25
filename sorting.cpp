#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &str){

    for (int i = 0; i < str.size()-1; i++)
    {
        bool flag = false;
        for (int j = 0; j < str.size()-i-1; j++)
        {
            if (str[j]>str[j+1])
            {
                swap(str[j],str[j+1]);
                flag = true;
            }     
        }
        if (!flag)
        {
            break;
        }
        
    } 
}

void selectionSort(vector<int> &str)
{
    for (int i = 0; i < str.size()-1; i++)
    {
        int s = i;
        for (int j = i+1; j < str.size(); j++)
        {
            if (str[j]<str[s])
            {
                s = j;
            }
        }
        swap(str[s],str[i]);
    } 
}

void insertionSort(vector<int> &str)
{
    for (int i = 1; i < str.size(); i++)
    {
        int cur = str[i];
        int pre = i-1;
        while(pre>=0 && str[pre]>cur){
            str[pre+1] = str[pre];
            pre--;
        }
        str[pre+1]=cur;
    }
    
}



int main(){
    int size;
    cin>>size;
    vector<int> str(size);

    

    for (int i = 0; i < size; i++)
    {
        cin>>str[i];
    }

    //bubbleSort(str);
    //selectionSort(str);
    //insertionSort(str);


    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<" ";
    }



    
    return 0;
}