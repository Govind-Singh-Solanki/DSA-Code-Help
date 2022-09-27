#include<iostream>

using namespace std;

int main()
{
    int temperature;
    cout<<"Enter the temperature in Fahrenheit : ";
    cin>>temperature;

    float converted_temperature;

    converted_temperature = ((temperature - 32)*5)/9; 

    cout<<"Temperature in degree Celsius is : "<<converted_temperature<<endl;

    return 0;
}