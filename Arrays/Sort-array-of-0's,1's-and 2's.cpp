Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.

Output: 
For each testcase, print the sorted array.

Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 2

Example:
Input :
2
5
0 2 1 2 0
3
0 1 0

Output:
0 0 1 2 2
0 0 1

Explanation:
Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output.

**************************************************************************************************

void sort012(int a[], int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        c0++;
        else if(a[i]==1)
        c1++;
        else c2++;
    }
    int i=0;
        while(c0>0){
            a[i]=0;
            c0--;
            i++;
        }
         while(c1>0){
            a[i]=1;
            c1--;
            i++;
        }
        while(c2>0){
            a[i]=2;
            c2--;
            i++;
        }
    // coode here 
}
