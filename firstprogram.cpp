

#include <iostream>

using namespace std;

int main()
{
    cout<<"To find the factorial of any number.";

    int i ,fact=1,n;
    cout<<"Enter any number for factorial = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of "<<n<<" is : "<<fact ;
    
    return 0;
}
