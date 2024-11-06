// DAA =1
#include <iostream>
using namespace std;

int iter_fib(int n){
    int a=0, b=1,c=1;
    if (n==0) return 0;
    if (n==1) return 1;

    for(int i=2;i<n;i++){
        a=b;
        b=c;
        c=a+b;
    }
    return c;
}
int rec_fib(int n){
    
    if (n==0) return 0;
    if (n==1) return 1;

    return rec_fib(n-1)+rec_fib(n-2);

    
}
int main(){
    int n;
    cout<<"Enter the valuue of n :";
    cin>>n;
    cout<<n<<"in fibonacci series ite"<<iter_fib(n)<<endl;
    cout<<n<<"in fibonacci series rec"<<rec_fib(n);
    return 0;
}

/*•  Iterative Approach (fibonacci_iterative):
•	Time Complexity: The iterative approach runs a loop from 2 to nnn, making it an O(n)O(n)O(n) solution.
•	Space Complexity: The space complexity is also O(n)O(n)O(n) because it uses an array dp of size nnn to store Fibonacci numbers up to nnn.
•  Recursive Approach (fibonacci_recursive):
•	Time Complexity: The recursive approach with memoization has a time complexity of O(n)O(n)O(n) because each Fibonacci number is calculated only once and stored in the cache dictionary.
•	Space Complexity: The space complexity for the recursive approach is O(n)O(n)O(n) for the cache, plus the stack space used by the recursive calls, which is also O(n)O(n)O(n) in the worst case.
*/