#include <iostream>
#include <algorithm>
 
using namespace std;
 
 
int main()
{
    int x;
    cin >>x;
    
    int c1,r1;
    c1=x/5;
    r1=x%5;
    
    if(r1==0)cout<<c1;
    else{
        cout<<c1+1;
    }
}
