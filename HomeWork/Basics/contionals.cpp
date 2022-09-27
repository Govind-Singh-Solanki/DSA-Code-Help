#include<iostream>

using namespace std;

int main()
{
    char ch = 'a';
    cout<<"Enter a character : ";
    cin>>ch;

    cout<<ch<<endl;

    if(ch >= 'a' && ch <= 'z')
    {
        cout<<"This is Lower-Case!"<<endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout<<"This is Upper-Case!"<<endl;
    }
    else
        cout<<"This is Numeric!"<<endl;

    return 0;
}
