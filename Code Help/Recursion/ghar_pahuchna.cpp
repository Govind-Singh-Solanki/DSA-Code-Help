#include<iostream>

using namespace std;

int reachHome(int dest, int src){

    static int countSteps = 0;
    //Base Case
    if(src == dest)
    return countSteps;

    countSteps++;
    //Recursive Relation
    reachHome(dest, src + 1);
}

int main()
{
    int src, dest;

    cout<<"Enter the destination to reach : ";
    cin>>dest;

    cout<<"Enter the source : ";
    cin>>src;

    int ans = reachHome(dest, src);

    cout<<"Total steps required --> "<<ans<<endl;

    return 0;
}