#include<iostream>
#include<ctime>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    for(long int i=1;i<1000;i++)
    {
        for(long int k=1;k<1000;k++)
        {
            for(long int j=1;j<1000;j++)
            {
                if((i*i+k*k)==j*j)
                {
                    if((i+j+k)==1000)
                    {
                        a=i;
                        b=j;
                        c=k;
                        cout<<" answer :   "<<a*b*c<<"  ,  "<<(double)clock();
                        break;
                    }
                }

            }

        }
    }
}
