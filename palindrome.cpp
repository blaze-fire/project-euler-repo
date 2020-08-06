#include<iostream>

using namespace std;

int main()
{
    int ans,num,temp,rev,count_num=0;
    long int a[10000];
    for (int i=1;i<1000;i++)
    {
        for(int j=1000;j>i;j--)
        {
            ans=i*j;
            num=ans;
            rev=0;
            while(num>0)
            {
                temp=num%10;
                rev=rev*10+temp;
                num=num/10;
            }
            if(rev==ans)
            {
                a[count_num]=rev;
                count_num++;
            }
        }
    }
    for(int i=1;i<=count_num;i++)
    {
        if(a[0]<a[i])
        {
           a[0]=a[i];
        }
    }
    cout<<"largest element : "<<a[0];
}
