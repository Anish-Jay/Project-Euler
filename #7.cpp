#include "iostream"

using namespace std;

// using sieve of eratosthenes

int main()
{
    long long int n,num,i=0,j,p;
    long long int prime[1000001];
    for(j=0;j<=1000000;j++)
    {
        prime[j]=1;
    } 
    for(p=2;p*p<=1000000;p++)
    {
        if(prime[p]==1)
        {
            for(j=p*p;j<=1000000;j+=p)
            prime[j]=0;
        }
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        p=0;
        for(j=2;j<=1000000;j++)
        {
            if(prime[j]==1)
            p++;
            if(p==num)
            break;
        }
        cout<<j<<endl;
    }
    return 0;
}
