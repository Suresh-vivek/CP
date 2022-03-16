#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    long long int k;

    if(t>=1 and t<=100){
        int sum=0;

        for(int i=0;i<t;i++){
            cin>>n>>k;

            sum+=n;

            if((n>=1 and n<= 300000) and (n%2==0) and sum<= 300000){
                int a[n],b[n],val=1;


                for(int i=0;i<n;i++){
                    a[i]= val;
                    val++;

                }

                for(int i=0;i<k;i++){
                    int y=0,x=1;
                    for(int j=0;j<n;j++){
                        if(j< n/2){
                            b[j]=a[y];
                            
                            y+=2;
                        }
                        else{
                            b[j]=a[x];
                            
                            x+=2;
                        }
                        
                    }
                    for(int i=0;i<n;i++){
                        a[i]= b[i];
                    }
                    

                }
                for(int i=0;i<n;i++){
                    cout<<b[i]<<" ";
                }
                cout<<endl;
            }

        }

        


    }


    return 0;
}