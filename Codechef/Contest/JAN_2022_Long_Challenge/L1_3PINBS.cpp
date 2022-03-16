/*
You are given a binary string S of length N. Your task is to check if there exists a substring of S

which is the binary representation of a prime number.

Formally, check if there exist integers L
and R such that 1≤L≤R≤N, and the substring SLSL+1SL+2…SR, when treated as a binary integer, is prime.

Print "Yes" if such a substring exists, and "No" if it doesn't

Input Format
The first line of input contains a single integer T
, denoting the number of test cases. The description of T
test cases follows.Each testcase consists of a single line of input, containing a binary string S

    .

Output Format

For each test case, output a single line containing one string — "Yes" or "No",
the answer to the problem.
You may print each character of the answer in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
*/

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