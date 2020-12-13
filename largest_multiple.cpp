#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    int count_dig=0,count_num=0;
    long int a[10000];
    for (long int i=1000;i<1000000000;i++)
    {
        for(int j=2;j<21;j++)
        {
            if(i%j==0)
            {
                count_dig=0;
            }
            else
            {
                count_dig=1;
                break;
            }
        }
        if(count_dig==0)
        {
            a[count_num]=i;
            count_num++;
            break;
        }

    }
    for(int i=0;i<=count_num;i++)
    {
        cout<<"   ,    "<<a[i]<<"  time : "<<(double)clock();
    }
}
