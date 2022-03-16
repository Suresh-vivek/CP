/*
You have a total of 3N balls of colours Red, Blue and Green. There are exactly N

balls of each colour.

These 3N
balls are now distributed to 3 boxes such that each box contains exactly N

balls. You are given the contents of each box.

You would like the 1st
box to contain all the red balls, the 2nd box to contain all the green balls, and the 3rd

box to contain all the blue balls. Note that the given order of boxes is important here — it is not enough for each box to contain only balls of a single colour.

To achieve this, you can perform the following operation several (possibly, zero) times:

    Pick any two distinct boxes, pick any one ball from each of these two boxes, and swap them.

Determine the minimum number of operations required to satisfy the given condition.
Input Format

    The first line of input contains a single integer T

, denoting the number of test cases. The description of T
test cases follows.
Each test case consists of 4
lines of input.
The first line of each test case contains a single integer N
, denoting the number of balls of each colour.
The i
-th of the next three lines contains three space-separated integers Ri,Gi and Bi — 
the number of red, green, and blue balls in the i-th box respectively.

Output Format

For each test case, output a single line containing one integer — the minimum number of operations required such that the given condition is satisfied.

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    if(t>=1 and t<=1000){
        for(int i=0;i<t;i++){

            int n;
            cin>>n;

            if(n>=1 and n<=1000){
                int b1r,b1g,b1b,b2r,b2g,b2b,b3r,b3g,b3b;
                cin>>b1r>>b1g>>b1b;
                cin >> b2r >>b2g >> b2b;
                cin >> b3r >> b3g >>b3b;
                
                int r= b1r + b2r +b3r;
                int g= b1g + b2g + b3g;
                int b= b1b + b2b +b3b;

                if(((b1r+b1g+b1b)==n) and ((b2r+b2g+b2b)==n) and ((b3r+b3g+b3b)==n) and (r==n) and (g==n) and (b==n) and (b1r >= 0 and b1g >=0 and b1b >=0 and b2r >=0 and b2g >=0 and b2b>=0 and b3r>=0 and b3g>=0 and b3b>=0) and (b1r <= n and b1g <=n and b1b <=n and b2r <=n and b2g <=n and b2b<=n and b3r<=n and b3g<=n and b3b<=n)){

                        int ans=0;
                        int rsum=b1g + b1b + b2b;
                        int lsum = b2r + b3r+b3g;
                        
                        if(b1r==n and b2g == n and b3b==n){
                            cout<<ans<<endl;
                        }
                        else{
                            cout<<max(rsum,lsum)<<endl;
                        }
                    

                }


                

                

            }
        }
    }
    return 0;
}