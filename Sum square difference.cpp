#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    long int square_sum=0,sum_square=0;

    for (int i=1;i<=100;i++)
    {
        square_sum=square_sum+i*i;
    }
    for(int j=1;j<=100;j++)
    {
        sum_square=sum_square+j;
    }
    cout<<" answer : "<<(sum_square*sum_square-square_sum);

}
