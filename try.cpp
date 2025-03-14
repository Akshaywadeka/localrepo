#include<iostream>
#include<string>



int main()
{

std::string str="helloakshay";

int s = str.length();

for(int i=0;i<s/2;i++)
{
    char ch = str[i];
    str[i] = str[s-i-1];
    str[s-i-1] = ch;
 }

 std::cout<<str;





    return 0;
}