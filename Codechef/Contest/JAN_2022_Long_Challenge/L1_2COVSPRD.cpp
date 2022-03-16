/*
A disease is spreading through ChefLand!

The disease spreads as follows:

At the end of day 0, a single person is infected with the disease.
During the next 10 days, the number of infected people doubles each day, until the disease has spread  
to all people in ChefLand.
From day 11 onwards, the number of infected people triples each day, until the disease has spread to
 all people in ChefLand.

You are given the population of ChefLand N
and a day D. How many people in ChefLand are infected at the end of day D?
Input Format
The first line of input contains a single integer T, denoting the number of test cases. 
The description of T test cases follows.
Each test case consists of a single line containing two space-separated integers N
and D — the population of ChefLand and the day for which you need to find the number of infected people, respectively.

Output Format
For each test case, print one line containing a single integer — the number of infected people in  
ChefLand at the end of day D

.

Constraints :
1<= T <= 300
1 <= N <= 100000000
0 <= D <= 100000000
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	long long int p,d,o,r;
	
	cin >>t;
	
	if(t>=1 and t<=300){
	    for(int i=0;i<t;i++){
	        cin >> p>>d;
	        
	        if((p>=1 and p <=100000000) and (d>=0 and d<=100000000)){
	            
                // Corner case
	            if(d==0){
	                o = 1;
	                cout<<o<<endl;
	                
	            }
	            else if(d >=1 and d<=10 ){
	                o = pow(2,d);
	                if(o >= p){
	                    o=p;
	                    cout<<o<<endl;
	                }
	                else{
	                    cout<<o<<endl;
	                }
	            }
	            else if(d>=11 and d<=44){
	                
	                o= 1024* pow(3,d-10);
	                if(o >= p){
	                    o=p;
	                    cout<<o<<endl;
	                }
	                else{
	                    cout<<o<<endl;
	                }
	                
	            }

                // Extreme case 1024*(3^ 34) >= 2^64 Maximum size of Long long integer
	           else{
	               cout << p<<endl;
	           }
	            
	            
	        }
	    }
	}
	return 0;
}
