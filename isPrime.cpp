#include<iostream>
#include<math.h>
using namespace std;

int isPrime(int);

main()
{
    long double n;
    long long int k;
    cout << "Input number : ";
    cin >> n;

    n=abs(n);

    if(ceil(n)!=n) cout << "Not Prime Number";
    else
    {
        k=(int)n;
        isPrime(n);
    }
    return 0;
}

int isPrime(int n)
{
    if(n==2) cout << "Prime Number";
    else if(n%2==0||n==1) cout << "Not Prime Number";
    else
    {
        int i,c=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0) { c++; break; }
        }
        if(c==0) cout << "Prime Number";
        else  cout << "Not Prime Number";
    }
}
