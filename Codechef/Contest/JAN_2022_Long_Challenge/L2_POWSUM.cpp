#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool tocheck(int n){
    if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}



int indexof(int a[],int n){
    int index = 0;

if (n != 1)
{

    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
}
return index;
}
int sum(int a[],int b){
    int sum=0;
    for(int i=0;i<b;i++){

        sum+=a[i];

    }
    return sum;
}
int main(){

    int t;
    cin>>t;

    if(t>=1 and t<=1000){
        for(int i=0;i<t;i++){

            int n,v;
            cin>>n;
            int a[n];

            for(int i=0;i<n;i++){
                cin>>v;
                if(v>=1 and v<=1048576){
                    a[i]=v;
                }

            }
            int g= sum(a,n);
            if(tocheck(g)){
                cout<<"0"<<endl;
            } 
            else{
                int f= ceil(log2(g));
                int rem = pow(2,f) - g;
                int mult = (rem + *min_element(a,a+n))/(*min_element(a,a+n));
                
                int index = indexof(a,n)+1;

                cout<<"1"<<endl;
                cout<<1<<" "<<mult<<endl;
                cout<<index<<endl;




                
            }
            




        }
    }
}