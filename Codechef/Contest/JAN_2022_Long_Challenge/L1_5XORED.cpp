#include <iostream>
using namespace std;

int main(){

    int t,sum;
    cin>>t;
    sum=0;

    if(t>=1 and t<=250000){
        for(int i=0;i<t;i++){

            int n,x;
            cin>>n>>x;
            sum+=n;

            if((n>=1 and n<=100000) and (x>=1 and x<=500000) and sum<=300000){
                int a[n];

                if(n==1){
                    a[0]=x;
                }
                else if(n==2){
                    
                        a[0]=x;
                        a[1]=0;  
                }

                else{
                    for(int i=0;i<n-1;i++){
                        a[i]=i+1;
                    }
                    int k=n+1;
                    int xora =0;
                    if((n-1)% 4 == 0){
                        xora = n-1;
                    }
                    else if((n-1)%4 == 1){
                        xora = 1;
                    }
                    else if((n-1)%4 == 2){
                        xora= n;
                    }
                    else{
                        xora = 0;
                    }
                    while((xora^k) != x){
                        if(k<=500000){
                            k++;
                        }
                        else{
                            break;
                        }
                    }
                    a[n-1]= k;
                }

                for(int i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;



            }
        }
    }

    return 0;
}