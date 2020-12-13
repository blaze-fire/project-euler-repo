#include<iostream>
#include<math.h>
#include<ctime>
using namespace std;
int main()
{
    long int sum=0;
    int num_div;
    for(long int i=1;i<100000;i++)
    {
        num_div=0;
        sum=sum+i;
        for(long int j=2;j<=int(sqrt(sum));j++) // check divisors till sqrt(n) O(sqrt) time
        {
            if (sum%j == 0)
            {
                // If divisors are equal, print only one
                if (sum/j == j)
                    num_div++;

                else // Otherwise print both
                    num_div=num_div+2;
            }
        }
        if(num_div>498)  // (500-2)as we are exluding 1 and the no. itself as divisor
        {
            cout<<sum<<" time : "<<(double)clock();
            break;
        }

    }
}
