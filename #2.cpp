#include "iostream"

using namespace std;

int main()
{
    long long int n,num,i,fn,fn1=8,fn2=2,s=10;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        while((4*fn1+fn2)<num)
        {
            fn=4*fn1+fn2;
            s+=fn;
            fn2=fn1;
            fn1=fn;
        }
        cout<<s<<endl;
        fn1=8;
        fn2=2;
        s=10;
    }
    return 0;
}
