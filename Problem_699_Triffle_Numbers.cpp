#include<iostream>
#include<math.h>
#include<ctime>
using namespace std;
int main()
{
    long int sum,ans=0,num,counter;
    long int num_div;
    for(long int i=3;i<=10000000;i++)
    {
        num_div=0;
        sum=0;
        counter=-1;

        //Step1 : Calculate divisors and sum them

        for(long int j=2;j<=double(sqrt(i));j++) // check divisors till sqrt(n) O(sqrt(n)) time
        {
            if (i%j == 0)
            {
                // If divisors are equal, print only one
                if (i/j == j)
                {
                    num_div++;
                    sum=sum+j;
                }

                else // Otherwise print both
                {
                    num_div=num_div+2;
                    sum=sum+j+i/j;
                }

            }
        }

        sum=sum+i+1;


        // Step 2: Calculate gcd on a/b


        long int num1,num2,temp=1,gcd;

        num1=sum;
        num2=i;
        while(temp>0)

        {

            temp=num1%num2;
            num1=num2;
            num2=temp;

        }

        gcd=num1;

        //step 3: Check whether it is 3 raise to the power k;
        /*
                1. divide the no. by gcd in order to get its lowest form
                2. check whether no.s other than 3 are not there for eg. for 21=7*3
                   check only till 7 and exit
                3. for cases like 6=3*2 in first loop you might get counter =0 which is wrong
                    therefore for that other if statement is required and for no. less than 3
                    they are not run in the loop
        */

        long int check=i/gcd;

        while(check>2 && check !=3)

        {

            if(check%3==0)
                counter=0;

            else

            {
                counter=1;
                break;
            }

            check=check/3;

        }

        // if check = 3 initially in that case no need to go in the above loop
        if(check==3)
            counter=0;


        if( counter==0 && check!=2)
        {
            ans=ans+i;
            cout<<" for number : "<<i<<" sum : "<<sum<<" gcd : "<<gcd<<" ans : "<<ans<<"\t";

        }



    }
    cout<<endl<<(double)clock();
}
















