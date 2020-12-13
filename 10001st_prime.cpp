#include<iostream>
#include<ctime>
#include<math.h>
using namespace std;

int main()
{
    long int a[20000],j;
    int count_num=0,counter=0;
    for (long int i=2;i<=1000000;i++)
    {
        j=2;
        while(j<i/2)
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
            a[counter]=i;
            counter++;
        }

        if (counter==10002)
        {
            cout<<a[counter-1];
            break;
        }

    }

    //for(int j=0;j<counter;j++)
    //{
      //  cout<<a[j]<<"     ,      ";
    //}

}
