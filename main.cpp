#include<iostream>
#include<fstream>
#define MAX(a,b) (a)>(b)?(a):(b)
using namespace std;
int main()
{
    ifstream in("INPUT.TXT");
    ofstream out("OUTPUT.TXT");
    char ch;
    int temp=0;
    int ans=0;
    while(in)
    {
        in.get(ch);
        cout<<ch;
        if(ch=='0')
        {
            ans=MAX(ans,temp);
            temp=0;
        }
        else
            temp++;
    }
    out<<ans;
    cout<<ans;
}
