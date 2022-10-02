#include<iostream>

using namespace std;

int main()
{
    int amount;

    cout<<"Enter the amount in Rupees : ";
    cin>>amount;

    int note = 1;

    switch (note)
    {
    case 1: cout<<"Hundred Rupee notes = "<<(amount/100)<<endl;
            amount %= 100;
        
    case 2: cout<<"Fifty Rupee notes = "<<(amount/50)<<endl;
            amount %= 50;
    
    case 3: cout<<"Twenty Rupee notes = "<<(amount/20)<<endl;
            amount %= 20;

    case 4: cout<<"One Rupee notes = "<<(amount/1)<<endl;
            amount %= 1;        
            break;
    }


    return 0;
}