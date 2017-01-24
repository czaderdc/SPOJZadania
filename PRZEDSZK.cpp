#include <iostream>
 
using namespace std;
 
int main()
{
    int ile,a,b;
    int cukierki = 1;
    cin>>ile;
    for(int i=0; i<ile; i++)
    {
        cin>>a>>b;
        while(true)
        {
 
            if((cukierki%a == 0) && (cukierki%b==0))
                break;
            else cukierki++;
        }
 
        cout<<cukierki<<"\n";
        cukierki=1;
    }
    return 0;
}
