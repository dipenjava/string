#include "iostream"
using namespace std;
char lowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;

    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int main()
{

    cout << "Lowercase of b is: " << lowercase('b')<<endl;
    cout<<"Lowercase of B is: "<<lowercase('B');

}









//
// Created by 91919 on 18-07-2023.
//
