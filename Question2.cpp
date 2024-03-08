/*
Chef and Water Bottles

Chef has N empty bottles where each bottle has a capacity of X litres.
There is a water tank in Chefland having K litres of water. Chef wants to fill the empty bottles using the water in the tank.

Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely.

Input Format

First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, three integers N,X, and K.

Output Format

For each test case, output in a single line answer, the maximum number of bottles Chef can fill completely.

LINK - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    int N,X,K, count=0, val;
	    cin >> N >>X >> K;
	    
	    for(int i =1; i<=N; i++){
	       val = i * X;
	        if(val <= K){
	            count++;
	        }
	    }
	    cout << count <<endl;
	}
	
    return 0;
}
