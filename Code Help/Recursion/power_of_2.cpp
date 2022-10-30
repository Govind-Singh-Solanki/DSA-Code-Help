#include<iostream>

using namespace std;

int powerOfTwo(int n){

    //Base Case
    if(n == 0)
    return 1;

    //Recursive Relation
    return 2*powerOfTwo(n-1);

}

int main()
{
    int n;

    cout<<"Enter the power which you want to get of 2 : ";
    cin>>n;

    int ans = powerOfTwo(n);

    cout<<"2 to the power "<<n<<" is --> "<<ans<<endl;

    return 0;
}