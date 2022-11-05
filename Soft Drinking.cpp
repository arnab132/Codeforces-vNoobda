#include <iostream>
#include <algorithm>
 
using namespace std;
 
bool comp(int a, int b)   
{   
    return (a < b);   
}   
 
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >>n>>k>>l>>c>>d>>p>>nl>>np;
    
    if(nl<= k*l )
    {
        if(1<= c*d )
        {
            if(np<= p )
            {
                cout<< min({k*l/nl,c*d/1,p/np},comp)/n;
            }
        }
    }
    
 
    return 0;
}
