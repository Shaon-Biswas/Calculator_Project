#include<iostream>
using namespace std;
class calculator
{
    private:
    long double num,result;
    int i;
    char opd;

    public:
    void simplecalcu()
    {
        result=0;
        i=0;
        do
        {
            if(i==0)
            {
                cout<<" First enter the number and then the operator and for result press '=' : "<<endl;
                cin>>num;
                result=num;
            }
            if(i==1)
            {
                switch (opd)
                {
                case '+':
                    cin>>num;
                    result=result+num;
                    break;
                case '-':
                    cin>>num;
                    result=result-num;
                    break;
                case '*':
                    cin>>num;
                    result=result*num;
                    break;
                case '/':
                    cin>>num;
                    result=result/num;
                    break;
                case '%':
                    cin>>num;
                    result=(result*num)/100;
                    break;
                default:
                    cout<<"You press the wrong key"<<endl;
                    break;
                }
            }
            cin>>opd;
            if(opd=='=')
            {
                cout<<"The result is: "<<result<<endl;
            } 
            i=1;   
        }while(opd!='=');
    }
    long double simpleInterest()
    {
        long double capital,result,interestrate,time,SI;
        cout<<"Enter 0 what you want to calculate."<<endl;
        cout<<"Enter the initial amount"<<endl;
        cin>>capital;
        cout<<"Rate of interest"<<endl;
        cin>>interestrate;
        cout<<"Duration"<<endl;
        cin>>time;
        cout<<"Simple Interest"<<endl;
        cin>>SI;

        if(capital==0) return (SI*100)/(interestrate*time);
        else if(interestrate==0) return (SI*100)/(capital*time);
        else if(time==0) return (SI*100)/(capital*interestrate);
        else return (capital*interestrate*time)/100;

        return 0;  
    }
};

main()
{
    calculator c;
    char a;
    cout<<"Enter 's' for simple interest related calculation. 'c' for simple calculator."<<endl;
    cin>>a;
    if(a=='c')
    {
        c.simplecalcu();
    }
    else if(a=='s')
    {
        c.simpleInterest();
    }
    return 0;

}