/*
Problems
Given an integer array A of size N, find sum of elements in it.

Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, print the sum of all elements of the array in separate line.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Ai <= 100
Example:
Input:
2
3
3 2 1
4
1 2 3 4
Output:
6
10

*/

#include <stdio.h>

int main() {
    
    int T,N,i,sum_result=0,temp=0;
    
    // printf("Enter the numbers of test case\n");
    scanf("%d",&T);
       const int j=T;
        int sum[j];
    
    if(1<=T&&T<=100){
       
       while(T!=0){
           
        // printf("Enter the number of elments on a array\n");
           scanf("%d",&N);
           
           int array[N];
           
           for(i=0;i<N;i++){
               scanf("%d",&array[i]);
               sum_result+=array[i];
           }
           sum[temp]=sum_result;
           temp++;
           T--;
       }
       for(i=0;i<j;i++){
           
           printf("%d",sum[i]);
       }
       
       
    }else{
        printf("Test Case cannot be more than 100 and less then one");
    }
	//code
	return 0;
}