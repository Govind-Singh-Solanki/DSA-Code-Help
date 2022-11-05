#include<iostream>

using namespace std;

int countWays(int steps){

    //Base Case
    //-->agar steps negative m jati hai toh ruk jao qki steps underground nhi hogi
    if(steps < 0)
    return 0;
    //-->agar step number 0 p ho toh vaha jaane ka ek hi tareeka hai, jump karke usi pe
    if(steps == 0)
    return 1;

    //Recursive Relation
    return (countWays(steps-1) + countWays(steps-2));

}

int main()
{
    int nSteps;

    cout<<"Enter total number of stairs to climb : ";
    cin>>nSteps;

    int ans = countWays(nSteps);

    cout<<"Total number of ways to climb there --> "<<ans<<endl;

    return 0;
}