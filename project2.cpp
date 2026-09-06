// ATM Machine
#include<iostream>
using namespace std;

int main(){
    int acc_no;
    int choice;
    int bankbal = 0;
    int createamount = 0;
    int amount = 0;

    do{
        cout<<"==== ATM ===="<<endl;
        cout<<"1. Create amount"<<endl;
        cout<<"2. Deposite Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Check Balance"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Create account"<<endl;
            cout<<"Enter your Account number: ";
            cin>>acc_no;
            cout<<"Enter amount you want to deposite: ";
            cin>>createamount;
            bankbal = createamount;
            cout<<"Total bank balance is: "<<bankbal<<endl;
        }
        else if(choice==2)
        {
            cout<<"Deposite Money"<<endl;
            cout<<"Enter money to deposite: ";
            cin>>amount;
            bankbal = bankbal + amount;
            cout<<"Total bank balance is: "<<bankbal<<endl;
        }
        else if(choice==3)
        {
            cout<<"Withdraw Money"<<endl;
            cout<<"Enter money to withdraw: ";
            cin>>amount;
            if(bankbal >= amount)
            {
                cout<<"Withdraw Money"<<endl;
                bankbal = bankbal - amount;   
            }
            else
            {
                cout<<"Insufficient balance"<<endl;
            }
            cout<<"Total bank balance is: "<<bankbal<<endl;


        }
        else if(choice==4)
        {
            cout<<"Check bank balance"<<endl;
            cout<<"Total bank balance is: "<<bankbal<<endl;

        }
    }while(choice != 5);


    return 0;
}