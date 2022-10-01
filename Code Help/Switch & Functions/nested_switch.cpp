#include<iostream>

using namespace std;

int main()
{
    int num = 2;
    char ch = 'B';

    switch(num)
    {
        case 1: cout<<"First!"<<endl;
                break;

        case 2: switch(ch)
                {
                    case 'A': cout<<"First nested case!"<<endl;
                              break;

                    case 'B': cout<<"I am inside nested switch case!"<<endl;
                              break;
                }
                break;

        default: cout<<"I am default!"<<endl;
    }

    return 0;
}