#include<iostream>

using namespace std;

void b(int& y){

    cout<<y<<endl;
}

void a(int& i){

    cout<<i<<endl;
    b(i);
}

int main()
{
    int x = 7;

    a(x);

    return 0;
}