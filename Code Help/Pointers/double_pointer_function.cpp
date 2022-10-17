#include<iostream>

using namespace std;

void update(int **p){


    // cout<<endl<<"1st : "<<p<<endl;       --> address of single pointer
    //changing p
    // p = p + 1;       --> no change

    //changin *p
    // *p = *p + 1;     --> changes address of single pointer as it goes to address stored in p2 and changes it

    //changing **p
    **p = **p + 1;      //--> changes value of variable
}

int main()
{
    int value = 5;

    int *p = &value;

    int **p2 = &p;

    cout<<"Before : "<<value<<endl;
    cout<<"Before : "<<p<<endl;
    cout<<"Before : "<<p2<<endl;
    
    update(p2);

    cout<<endl;

    cout<<"After : "<<value<<endl;
    cout<<"After : "<<p<<endl;
    cout<<"After : "<<p2<<endl;

    return 0;
}