#include "iostream"

using namespace std;

long long int sum_series(long long int n)
{
    return (n*(n+1))/2;
}

int main()
{
   long long int n,num,i,s=0;
   cin>>n;
        
   for(i=0;i<n;i++)
   {
       cin>>num;
       //use math formula to avoid unnecessary looping
       s+=3*sum_series((long long int)(num-1)/3);
       s+=5*sum_series((long long int)(num-1)/5);
       s-=15*sum_series((long long int)(num-1)/15); 
       cout<<s<<endl;
       s=0;
   }
   
   return 0;
}
