#include "iostream"
using namespace std;
void reverseArray(char arr[], int n)
{   int j=n-1;
    int s=0;
    while(s<=j)
    {
        swap(arr[s],arr[j]);
        s++;
        j--;
    }
}
int main()
{
    char arr[100];
    cout<<"Enter string: ";
    cin>>arr;
    cout<<"your name is: "<<arr<<endl;
    reverseArray(arr,5);
    cout<<"reverse array is: "<<arr;

}










//
// Created by 91919 on 17-07-2023.
//
