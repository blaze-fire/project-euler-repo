#include<iostream>
using namespace std;
#include<math.h>
#include<ctime>

int main()
{
    long long int sum=0,j;
    int count_num=0;
    for(long int i=2;i<2000000;i++)
    {
        j=2;
        while(j<=sqrt(int(i)))
        {
            if(i%j==0)
            {
                count_num=1;
                break;
            }
            else
            {
                count_num=0;
            }
            j++;
        }
        if(count_num==0)
        {
            sum=sum+i;
        }
    }
    cout<<" answer : "<<sum<<" time : "<<(double)clock();
}
