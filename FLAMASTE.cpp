#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int flamaster(string lancuch)
{
    int suma=1;
 
    for(int i=0; i<lancuch.length(); i++)
    {
        if(lancuch[i] == lancuch[i+1])
            suma++;
        else
        {
            if(suma <2)
            {
                cout << lancuch[i];                           
                suma = 1;
            }
            else if(suma==2)
            {
                cout << lancuch[i-1]<<lancuch[i];                 
                suma = 1;
            }
            else
            {
                cout << lancuch[i] << suma;                  
                suma = 1;
            }
        }
    }
    cout<<endl;
}
        int main()
        {
            string napis;
            int ile;
            cin>>ile;
            while(ile--)
            {
                cin>>napis;
                transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
                flamaster(napis);
            }
            return 0;
        }
