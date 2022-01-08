/*
Kepler’s Law states that the planets move around the sun in elliptical orbits with the sun at one focus. 
Kepler's 3rd law is The Law of Periods, according to which:

The square of the time period of the planet is directly 
proportional to the cube of the semimajor axis of its orbit.

You are given the Time periods (T1,T2) and Semimajor Axes (R1,R2) of two planets orbiting the same star.

Please determine if the Law of Periods is satisfied or not, i.e, if the constant of proportionality of both planets is the same.

Print "Yes" (without quotes) if the law is satisfied, else print "No".


Input Format

The first line of input contains a single integer T
, denoting the number of test cases. The description of T
test cases follows.
Each test case consists a single line of input, containing four space-separated integers
 T1,T2,R1,R2
.

Output Format

For each test case, output a single line containing one string — "Yes" or "No" 
(without quotes); the answer to the problem.

You may print each character of the answer in uppercase or lowercase 
(for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

CONSTRAINTS

1 <= T <= 10000
1<= T1,T2,R1,R1 <=10

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int t;
	double T1,T2,R1,R2;
	
	cin>>t;
	
	
	if(t>=1 and t<= 10000){
	for(int i = 0 ; i<t ; i++){
	
	
	    cin >> T1>>T2>>R1>>R2;
	    double p1,p2;
	    
	    if((T1 >=1 and T1<=10) and (T2>=1 and T2<=10) and (R1 >=1 and R1<=10) and (R2>=1 and R2<=10) ){
	        
	        p1 = pow(T1,2)/pow(R1,3);
	        p2 = pow(T2,2)/pow(R2,3);
	        
	        if(p1 == p2){
	            cout<< "yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	        
	    }
	
	}
	}
	return 0;
}
