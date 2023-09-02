#include<iostream>
#include<stdlib.h>
using namespace std;
class tollbooth
{
    private:
        int tcars;
        double tcash;
    public:
        tollbooth()
        {
            tcars=0;
            tcash=0;
        }
        void payingcar()
        {
            tcars++;
            tcash=tcash+0.5;
        }
        void nonpaycar()
        {
            tcars++;
        }
        display()
        {
            cout<<tcars<<endl;
            cout<<tcash<<endl;
        }
} ;
int main()
{
    int ch;
    tollbooth toll;

    do
    {
        cout<<"enter 1 to count a paying car"<<endl;
        cout<<"enter 2 to count a non paying car"<<endl;
        cout<<"enter 3 to show total no of cars and cash"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            toll.payingcar();
            break;
        case 2:
            toll.nonpaycar();
            break;
        case 3:
            toll.display();
            exit(0);
        default:
            cout<<"invalid choice";
        }
    }
    while(1);
    return 0;
}

