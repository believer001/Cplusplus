#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        char s[100];
        int i, length;
        int flag = 0;    

        cout<<"\n Enter String : ";
        cin>>s;    

        length = strlen(s);    

        for(i=0;i < length ;i++)
        {
                if(s[i] != s[length-i-1])
                {
                        flag = 1;
                        break;
                }
        }    
        if(flag)
        {
                cout<<" "<<s<<" is not a palindrome"<<endl;
        }    
        else
        {
                cout<<" "<<s<< " is a palindrome"<<endl;
        }
        return 0;
}
