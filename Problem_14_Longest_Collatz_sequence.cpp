#include <iostream>
#include<math.h>
#include<ctime>
#include<vector>
#include<map>

using namespace std;

int main()
{
    long int num,largest_num;
    long int counter,largest=0;
    for (long int i=1;i<114000;i++)

    {
        num=i;
        counter=0;

        while(num!=1)

        {
            if(num%2 ==0)
                num=num/2;

            else
                num=3*num+1;

            counter++;
        }

        if(counter>largest)
            {
                largest=counter;
                largest_num=i;
            }

    }
    cout<<largest<<"  ,  "<<largest_num<<" time : "<<(double)clock();
}
