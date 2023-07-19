#include "iostream"
using namespace std;
char getmaxOccurrence( string s)
{
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        char ch= s[i];
        int number=0;
        number = ch - 'a';
        arr[number]++;

    }
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans= 'a' + ans;
    cout<<maxi;
    return finalans;
}
int main()
{
    string s= "madarchod";
    cout<<s<<endl;
    cout<<getmaxOccurrence(s);

}










//
// Created by 91919 on 19-07-2023.
//
