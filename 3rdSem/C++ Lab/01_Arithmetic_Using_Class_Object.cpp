// Experiment 1
// Add, Subtract, Multiply, Divide and Modulus of two numbers using class and object.
#include<iostream>
using namespace std;
class Adder{
    public:
    int num1,num2;
    void inputNumbers(){
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
    }
    void addAndDisplay(){
        int sum=num1+num2;
        cout<<"Sum="<<sum<<endl;
    }
    void subAndDisplay(){
        int sub=num1-num2;
        cout<<"Difference="<<sub<<endl;
    }
    void mulAndDisplay(){
        int pro=num1*num2;
        cout<<"Product="<<pro<<endl;
    }
    void divAndDisplay(){
        int div=num1/num2;
        cout<<"Division="<<div<<endl;
    }
    void modAndDisplay(){
        int mod=num1%num2;
        cout<<"Modulus="<<mod<<endl;
    }
};
int main(){
        Adder obj;
        obj.inputNumbers();
        obj.addAndDisplay();
        obj.subAndDisplay();
        obj.mulAndDisplay();
        obj.divAndDisplay();
        obj.modAndDisplay();
        return 0;
    }