#include<iostream>

using namespace std;

int main()

{

    int x0,y0,x,i=2,k=0;

    cin>>x0>>y0;

    if(y0%x0!=0){

        cout<<0;

        return 0;

    }

    x=y0/x0;

    while(x!=1){

        while(x%i!=0)

            i++;

        k++;

        while(x%i==0)

            x/=i;

    }

    cout<<k*2;

    return 0;

}
