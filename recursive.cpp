#include <bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(i<n) {
        cout<<"mahesh\n";
        print(i+1,n);}
    else return;
}

void num(int i,int n){
    // printing number from 1 to N
    if(i<n) {
        cout<<i+1<<" ";
        num(i+1,n);}
    else return;
// reversed N to 1:
    // if(i<n) {
    //     cout<<n<<" ";
    //     num(i,n-1);
    // }
    // else return;

}

int  NnumbersSum(int i,int sum){
// int  NnumbersSum(int n){
    // this is fuctional method:
    // int i=0,sum = 0;
    //     //your code goes here
    //     if(i<n){
    //         sum = n + NnumbersSum(n-1);
    //     }
    //     return sum;
// this is parameter method
    if(i<1) {
        return sum;
    }
    else{
        return NnumbersSum(i-1,sum+i);
    }

}

int fact(int n){
    int f =1;
    // if (n < 0) {
        // cout<<"its should be positive:";
    // }
    if(n==0 || n==1) return 1;
    else {
        f = n * fact(n-1);
    }
    return f;
}

int fibo(int n){
    // int fibo1 =0,fibo2=1,fibo3;

    if(n<=1) return n;
    // if (n==0) return 0;
    // if (n==1) return 1;
    else {
        // cout<<fibo1<<"\n"<<fibo2;
        return fibo(n-1) + fibo(n-2);
    }


}

void revarra(int arr[],int first,int last){
    // using two variables
    if(first>=last) return ;
    swap(arr[first],arr[last]);
    revarra(arr,first+1,last-1);
}

void revarray(int arr[],int i,int n){
    // using single variable
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    revarray(arr,i+1,n);
}

int palindrom(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    palindrom(i+1,s);
}

int main(){
// int n,sum;
// cout<<"enter a number:";
// cin>>n;
// print(0,3);
// num(0,n);

// functional method:
// cout<<NnumbersSum(n);

// parameter method:
// cout<<NnumbersSum(n,0);

// cout<<fibo(n);

//revers array: using recursion
    // int arr[]={1,4,3,4,6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // revarray(arr,0,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    // string s = "madam";
    // int r = palindrom(0,s);
    // if(r==1){
    //     cout<<"the given "<<s<<" is palindrome";
    // }
    // else{cout<<"the given "<<s<<" is not palindrome";}
    cout<<fibo(5);
    return 0;
}