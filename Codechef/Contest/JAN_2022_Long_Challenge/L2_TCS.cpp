/*
Two friends, Dragon and Sloth, are writing a computer science examination series. There are three subjects in this series: DSA, TOC, and DM. Each subject carries 100

marks.

You know the individual scores of both Dragon and Sloth in all 3

subjects. You have to determine who got a better rank.

The rank is decided as follows:

    The person with a bigger total score gets a better rank
    If the total scores are tied, the person who scored higher in DSA

gets a better rank
If the total score and the DSA
score are tied, the person who scored higher in TOC

    gets a better rank
    If everything is tied, they get the same rank.

Input Format

    The first line of input contains a single integer T

, denoting the number of test cases. The description of T
test cases follows.
The first line of each test case contains three space-separated integers denoting the scores of 
Dragon in DSA
, TOC and DM
respectively.
The second line of each test case contains three space-separated integers denoting the scores of 
Sloth in DSA
, TOC and DM

    respectively.

Output Format

    For each test case, if Dragon got a better rank then output "Dragon", else if Sloth got a better rank then output "Sloth". If there was a tie then output "Tie". Note that the string you output should not contain quotes.
    The output is case insensitive. For example, If the output is "Tie" then "TiE", "tiE", "tie", etc are also considered correct.

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	if(t>=1 and t<= 1000){
	    for(int i=0 ; i<t;i++){
	        
	        int d1,t1,m1,d2,t2,m2;
	        
	        cin>>d1>>t1>>m1;
	        cin>>d2>>t2>>m2;
	        
	        int sum1= d1 + t1 +m1;
	        int sum2 = d2+t2+m2;
	        
	        if(sum1 > sum2){
	            cout<<"Dragon"<<endl;
	        }
	        else if(sum1 < sum2){
	            cout<<"Sloth"<<endl;
	        }
	        else{
	            if(d1>d2){
	                cout<<"Dragon"<<endl;
	            }
	            else if(d1<d2){
	                cout<<"Sloth"<<endl;
	            }
	            else if((d1==d2) and t1>t2){
	                cout<<"Dragon"<<endl;
	            }
	            else if((d1 == d2) and t1 <t2){
	                cout<<"Sloth"<<endl;
	            }
	            else if((d1 == d2) and (t1 == t2) and m1 >m2){
	                cout<<"Dragon"<<endl;
	            }
	            else if((d1 == d2) and (t1 == t2) and m1 <m2){
	                cout<<"Sloth"<<endl;
	            }
	            else{
	                cout<<"Tie"<<endl;
	            }
	        }
	        
	        
	    }
	}
	return 0;
}
