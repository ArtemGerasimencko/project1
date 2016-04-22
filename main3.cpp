#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int n=1;
    while(n<=sqrt(a))
    {
        int c=a%n;
        int d=a/n;
        if(c==0)
        {
            cout<<n<<" ";
            if(n!=d) cout<<d<<" ";
        }
        n++;
    }
    return 0;
}
