#include<bits/stdc++.h>

using namespace std;

void reverseString(string str){

    int i = 0, j = str.length()-1;

    while(i < j){

        swap(str[i++], str[j--]);
    }

    cout<<"Reversed String is: "<<str<<endl;
}

int main()
{
    string str;

    cout<<"Enter a string to reverse: ";
    cin>>str;

    cout<<"Original String is: "<<str<<endl;

    reverseString(str);

    return 0;
}