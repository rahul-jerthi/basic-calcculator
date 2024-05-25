#include <iostream>
using namespace std;
int main(){

int choise,num1,num2;
cout<<"Enter first number: ";
cin>>num1;
cout<<"Enter second number: ";
cin>>num2;

cout<<"Enter your choise:--\n";
cout<<"1. ADD \n";
cout<<"2. SUB \n";
cout<<"3. MUL \n";
cout<<"4. DIV \n";
cin>>choise;

if (choise==1)
{
    cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<num1+num2;
}

else if (choise==2)
{
    cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2;
}

else if (choise==3)
{
    cout<<"Multiplaction of "<<num1<<" and "<<num2<<" is "<<num1*num2;
}

else if (choise==4)
{
    cout<<"Division of "<<num1<<" and "<<num2<<" is "<<num1/num2;
}

return 0;    
}