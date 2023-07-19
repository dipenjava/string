#include <iostream>
using namespace std;
int charLength(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!=0;i++)
    {
        count++;
    }
    return count;
}


int main()
{
    char arr[5]= {'w','a','t','e','r'};
    cout<<"Length of array is: "<<charLength(arr);

}




















//
// Created by 91919 on 17-07-2023.
//
