#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cout<<"Enter a string : ";
    cin>>str;

    int i = 0, len = 0;

    while(str[i] != '\0'){

        len++;
        i++;
    }

    cout<<"Length of string is: "<<len<<endl;

    return 0;
}