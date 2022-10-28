#include<iostream>

using namespace std;

int findFactorial(int n){

    //Base Case
    if(n == 0)
    return 1;       //we know 0! is 1 and we need to stop here

    //Recursive Relation
    return n*findFactorial(n-1);        //relation is n * (n - 1)

}

int main()
{
    int n;

    cout<<"Enter the number to find factorial of : ";
    cin>>n;

    int factorial = findFactorial(n);

    cout<<"Factorial of "<<n<<" is --> "<<factorial<<endl;

    return 0;
}