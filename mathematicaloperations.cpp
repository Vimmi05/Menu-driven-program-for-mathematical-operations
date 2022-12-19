#include <iostream>
using namespace std;

int factorial(int x){
    int fact;
    fact=1;
    if(x==0 || x==1)
    fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    cout<<"The factorial of the given number is ";
    return fact;
}

void fibonacci(int y){
    int t1,t2,nextterm;
    t1=-1;
    t2=1;
    for(int i=0;i<y;i++){
    nextterm=t1+t2;
    t1=t2;
    t2=nextterm;
    cout<<nextterm <<" ";
    }
}

void odd_even(int n){
    if(n%2==0){
        cout<<"The given number is even. ";
    }
    else{
        cout<<"The given number is odd. ";
    }
}

void sum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of n natural numbers is "<<sum;
}

int main(){
    char prog_num;
    cout<<"1. Find the factorial of a given number. "<<endl;
    cout<<"2. Print the fibonacci series upto a given number. "<<endl;
    cout<<"3. Find if the given number is even or odd. "<<endl;
    cout<<"4. Sum of n numbers. "<<endl;
    cout<<"5. Exit from programs. "<<endl;
    cout<<endl;
    
    do{
        cout<<"Enter the program number : ";
        cin>>prog_num;
        switch(prog_num){
            case '1':
                 int num1;
                 cout<<"Enter the number : ";
                 cin>>num1;
                 cout<<factorial(num1);
                 cout<<endl;
                 break;
            case '2':
                 int num2;
                 cout<<"Enter the number : ";
                 cin>>num2;
                 fibonacci(num2);
                 cout<<endl;
                 break;
            case '3':
                 int num3;
                 cout<<"Enter the number : ";
                 cin>>num3;
                 odd_even(num3);
                 cout<<endl;
                 break;
            case '4':
                 int num4;
                 cout<<"Enter the number : ";
                 cin>>num4;
                 sum(num4);
                 cout<<endl;
                 break;
            case '5':
                 exit(0);
            default:
                 cout<<"Please enter a valid choice. ";
                 cout<<endl;
        }
    }
    while(prog_num!=5);
    return 0;
}
