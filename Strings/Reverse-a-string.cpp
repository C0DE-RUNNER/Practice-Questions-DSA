
Given a string S as input. You have to reverse the given string.

Input: First line of input contains a single integer T which denotes the number of test cases. T test cases follows, first line of each test case contains
a string S.

Output: Corresponding to each test case, print the string S in reverse order.

Constraints:
1 <= T <= 100
3 <= length(S) <= 1000

Example:
Input:
3
Geeks
GeeksforGeeks
GeeksQuiz

Output:
skeeG
skeeGrofskeeG
ziuQskeeG

***************************************************************************************************

#include <iostream>
#include<cstring>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        char temp;
        cin>>s;
        for(int i=0, j=s.length()-1; i<j; i++,j--){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
        cout<<s<<endl;
    }
	//code
	return 0;
}
