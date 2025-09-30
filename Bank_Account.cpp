 #include <iostream>
 using namespace std;
 class creataccount
 {
 private:
    int accountnumber;
    string accountName;
    long long balance;
 public:
    void setaccountnumber(int m)
    {
        accountnumber=m;
    }
    //////////////////////////////////////////
    void setaccountName(string m)
    {
        accountName=m;
    }
    ///////////////////////////////////////////
    void setbalance(double m)
    {
        if(m>=0)
            balance=m;
            else {cout<<"Error enter a valid number";}
    }
    ///////////////////////////////////////////
    string getaccountName()
    {
        return accountName;
    }
    ///////////////////////////////////////////
    int getaccountnumber()
    {
        return accountnumber;
    }
    ////////////////////////////////////////////
    double getbalance()
    {
        return balance;
    }
    ////////////////////////////////////////////
    void deposit(double money){
    if(money<0){cout<<"Error enter a valid number";}
    else{balance+=money;cout<<balance;}
    }
    /////////////////////////////////////////////
    void withdraw(double money){
    if(money>balance||money<0){cout<<"Error enter a valid number";}
    else{balance-=money;cout<<balance;}
    }
    //////////////////////////////////////////////
    void displayInfo(){
    cout<<accountName<<endl<<accountnumber<<endl<<balance<<endl;
    }
    ///////////////////////////////////////////////
};
 int main()
 {
    int control;
    string name ;
    double kash;
    int id;
    int money;
    cout<<"--------Creat Account----------"<<endl;
    creataccount account1;
    cout<<"Enter your name : ";
    getline(cin,name);
    account1.setaccountName(name);
    cout<<endl<<"Enter Your ID : ";
    cin>>id;
    account1.setaccountnumber(id);
    cout<<endl<<"Enter your balance : ";
    cin>>kash;
    account1.setbalance(kash);
    cout<<endl;
    ///////////////////////////////
    cout<<"///////////////////////////Choose a number//////////////////////"<<endl;
    cout<<"1- Deposit "<<endl<<"2- Withdraw "<<endl<<"3- DisplayInfo "<<endl;
    cout<<"////////////////////////////////////////////////////////////////"<<endl;
    while(true){
    cin>>control;
    if(control==1){
            cout<<"Enter Your money : ";
            cin>>money;
             account1.deposit(money);}
    else if(control==2){
            cout<<"Enter Your money : ";
            cin>>money;
            account1.withdraw(money);}
   else if (control==3){
    account1.displayInfo();
   }
   else if (control == 4)
        {
            cout << "Exiting...\n";
            break;
        }
        else
        {
            cout << "Invalid choice! Try again.\n";
        }
    cout<<endl;
    }
 }
