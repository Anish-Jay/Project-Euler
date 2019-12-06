//can be improvised
#include "iostream"

using namespace std;

int main()
{
    long long int t,i,j,n,N,k,div=0,prod,rem,temp,max;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>N>>k>>n;
        max=0;
        temp=n;
        j=0;
        div=10^k;
        while(k>=0)
        {
            prod=1;
            n/=10^(j++);
            n%=div;
            while(n>0)
            {
                rem=n%10;
                if(rem==0)
                {
                    prod=0;
                    break;
                }
                prod*=rem;
                n/=10;
            }
            if(max<prod)
            max=prod;
            k--;
            n=temp;
        }
        cout<<max<<endl;
    }
    return 0;
}
