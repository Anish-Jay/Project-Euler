#include "iostream"

using namespace std;

// using sieve of eratosthenes

int main()
{
    int n,num,i,j,p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        int prime[num+1];
        for(j=0;j<=num;j++)
        {
            prime[j]=1;
        }
        
        for(p=2;p*p<=num;p++)
        {
            if(prime[p]==1)
            {
                for(j=p*p;j<=num;j+=p)
                prime[j]=0;
            }
        }

        for(j=num;j>=2;j--)
        {
            if(prime[j]==1 && num%j==0)
            {
                cout<<j<<endl;
                break;
            }
        }
    }
    return 0;
}
