#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    int l,t,sum=0;

    cin>>t;
    if(t>=1 and t<=25000){

        for(int i=0;i<t;i++){
            cin>>s;
            l= s.length();
            sum= sum+l;
            string sub;
            int v,m=0;

            if((l>=1 and l<= 100000) and sum <= 300000){

                string s1="10",s2="11";

                if(s.find(s1)== -1 and s.find(s2)== -1){
                    cout<<"No"<<endl;
                }
                else{
                    cout<<"Yes"<<endl;
                }

            }
            

        
        }
    }





    return 0;
}