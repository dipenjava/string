#include "iostream"
using namespace std;
bool ispalingdrome(char arr[], int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(arr[s]!=arr[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }

    }
    return true;

}

int main()
{
   char arr[100];
    cout<<"Enter Array: ";
    cin>>arr;
    cout<<"Your array is: "<<arr<<endl;
    bool hm=ispalingdrome(arr,8);
    if(hm)
    {
        cout<<"Yes! baby your array is palindrome";
    }
    else
    {
        cout<<"No! baby your array is not palindrome";
    }

}




//
// Created by 91919 on 17-07-2023.
//
