#include "iostream"
using namespace std;
string reverseWords(string s) {
        string res = "";
        string temp = "";
        for(int i = s.size()-1; i >= 0; i--)
        {
            if(s[i] != ' ')
                temp += s[i];
            else
            {
                res = ' ' + temp + res;
                temp = "";
            }
        }
        res = temp + res;
        return res;
    }
int main()
{
    string s ="my name is dipender";
    cout<<s<<endl;
    cout<<reverseWords(s);


}









//
// Created by 91919 on 18-07-2023.
//
