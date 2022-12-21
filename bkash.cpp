#include<bits/stdc++.h>
#include<windows.h>
//#include<fstream>
using namespace std;

typedef long long ll;

ll recent_mny =0, z, n, qn, phn_no, pin_c;

/*struct phn_pin{
    ll phn_num;
    ll pin_cd;
    string name;
};*/
void click_option();

vector<ll> vec_phn {0};
vector<ll> vec_pin {0};
vector<string>vec_str{"A"};

void Back()
{
    system("CLS");
    cout<<"\n\t\t\t\tThanks for visiting our apps. Have a sweet day.\n\n";
}

void cash_in ()
{
    system("CLS");
    ll cash, qn;
    cout<<"How much you want to Cash-in..??\t\n";
    cin>>cash;
    cout<<"\n\n\t\t\tBefore cash in your balance is : "<<recent_mny<<" taka\n";
    cout<<"\n\n\t\t\tAfter cash in your balance is : "<<recent_mny+cash<<" taka\n\n";
    recent_mny = recent_mny+cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void cash_out ()
{
    system("CLS");
    ll cash, qn;
    cout<<"How much you want to Cash-out..??\t\n";
    cin>>cash;
    cout<<"\n\n\t\t\tBefore cash-out your balance is : "<<recent_mny<<" taka\n";
    cout<<"\n\n\t\t\tAfter cash out your balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void send_mny ()
{
    system("CLS");
    ll cash, qn;
    cout<<"How much money you want to Send..??\t\n";
    cin>>cash;
    cout<<"\n\n\t\t\tBefore send your money the balance is : "<<recent_mny<<" taka\n";
    cout<<"\n\n\t\t\tAfter send your money the balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void mbl_crg ()
{
    system("CLS");
    ll cash, qn;
    cout<<"How much money you want to recharge ..??\t\n";
    cin>>cash;
    cout<<"\n\n\t\t\tBefore recharge, the balance is : "<<recent_mny<<" taka\n";
    cout<<"\n\n\t\t\tAfter recharge, the balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void paybill ()
{
    system("CLS");
    ll cash, qn;
    cout<<"Sorry ..! This system is in under construction.\t\n";//cin>>cash;
    //cout<<"\n\n\t\t\tBefore recharge, the balance is : "<<recent_mny<<" taka\n";
    //cout<<"\n\n\t\t\tAfter recharge, the balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void payment ()
{
    system("CLS");
    ll cash, qn;
    cout<<"Sorry ..! This system is in under construction.\t\n";//cin>>cash;
    //cout<<"\n\n\t\t\tBefore recharge, the balance is : "<<recent_mny<<" taka\n";
    //cout<<"\n\n\t\t\tAfter recharge, the balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void ss_bank ()
{
    system("CLS");
    ll cash, qn;
    cout<<"Sorry ..! This system is in under construction.\t\n";//cin>>cash;
    //cout<<"\n\n\t\t\tBefore recharge, the balance is : "<<recent_mny<<" taka\n";
    //cout<<"\n\n\t\t\tAfter recharge, the balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void ss_atm ()
{
    system("CLS");
    ll cash, qn;
    cout<<"Sorry ..! This system is in under construction.\t\n";//cin>>cash;
    //cout<<"\n\n\t\t\tBefore recharge, the balance is : "<<recent_mny<<" taka\n";
    //cout<<"\n\n\t\t\tAfter recharge, the balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void ss_mbl ()
{
    system("CLS");
    ll cash, qn;
    cout<<"Sorry ..! This system is in under construction.\t\n";//cin>>cash;
    //cout<<"\n\n\t\t\tBefore recharge, the balance is : "<<recent_mny<<" taka\n";
    //cout<<"\n\n\t\t\tAfter recharge, the balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void bl_ss ()
{
    system("CLS");
    ll cash, qn;
    cout<<"Sorry ..! This system is in under construction.\t\n";//cin>>cash;
    //cout<<"\n\n\t\t\tBefore recharge, the balance is : "<<recent_mny<<" taka\n";
    //cout<<"\n\n\t\t\tAfter recharge, the balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void loans ()
{
    system("CLS");
    ll cash, qn;
    cout<<"Sorry ..! This system is in under construction.\t\n";//cin>>cash;
    //cout<<"\n\n\t\t\tBefore recharge, the balance is : "<<recent_mny<<" taka\n";
    //cout<<"\n\n\t\t\tAfter recharge, the balance is : "<<recent_mny-cash<<" taka\n\n";
    recent_mny = recent_mny-cash;
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}
void balance ()
{
    system("CLS");
    ll qn;
    cout<<"\n\n\n\t\t\tYour bank has "<<recent_mny<<" taka.\n\n";
    cout<<"\n\nDo you want to stay with us..??\n\n\t\t\t\t1.Yes\n\n\t\t\t\t2. No\n";
    cin>>qn;
    if (qn == 1) click_option();
    else Back();
}

void click_option()
{
    system("CLS");
    cout<<"\nWhat does You want..??";
    cout<<"\n\n\t\t1. Cash-in. \t\t2. Cash-out. \t\t3. Send Money. \n\n";
    cout<<"\n\n\t\t4. Mobile Recharge. \t5. Pay Bill. \t\t6. Payment. \n\n";
    cout<<"\n\n\t\t7. SS to Bank. \t\t8. SS to ATM.   \t9. SS to Another Mobile Bank . \n\n";
    cout<<"\n\n\t\t10. Bank to SS. \t11. Loans. \t\t12. Check Balance. \n\n";
    cout<<"\n\n\t\t\t\t\t13. Back. \n\n";
    ll call;
    cin>>call;
    if(call == 1)
    {
        system("CLS");
        cash_in();
    }
    if(call == 2)
    {
        system("CLS");
        cash_out();
    }
    if(call == 3)
    {
        system("CLS");
        send_mny();
    }
    if(call == 4)
    {
        system("CLS");
        mbl_crg();
    }
    if(call == 5)
    {
        system("CLS");
        paybill();
    }
    if(call == 6)
    {
        system("CLS");
        payment();
    }
    if(call == 7)
    {
        system("CLS");
        ss_bank();
    }
    if(call == 8)
    {
        system("CLS");
        ss_atm();
    }
    if(call == 9)
    {
        system("CLS");
        ss_mbl();
    }
    if(call == 10)
    {
        system("CLS");
        bl_ss();
    }
    if(call == 11)
    {
        system("CLS");
        loans();
    }
    if(call == 12)
    {
        system("CLS");
        balance();
    }
    if(call == 13)
    {
        system("CLS");
        Back();
    }
}
void register_login()
{

    system("CLS");
    cout<<"Enter your phone number : ";
    cin>>phn_no;
    cout<<"Enter your pin code : ";
    cin>>pin_c;
    for(ll i =0; i<vec_phn.size(); i++)
    {
        if((vec_phn[i] == phn_no) && (vec_pin[i] == pin_c))
        {
            system("CLS");
            cout<<"\n\n\t\t\t\t\tCongratulation "<<vec_str[i]<<endl<<endl;
            cout<<"\n\nDo you want to stay with us..? If yes, press 1 for continue or press 2 for back\n";
            ll em;
            cin>>em;
            if (em ==1)
            {

                recent_mny = 0;
                click_option();
            }
            if(em == 2) Back();
        }
        else continue;
    }
    /*system("CLS");
            cout<<"\nSorry. Your Phone number and pin code doesn't exist in database. \n";
            cout<<"\n\nWhat do you want..?? If you exit the apps press 1 ,\n\n";
            cin>>z;
            if (z == 1) Back();
            }*/
}
void Register()
{
    system("CLS");
    string name;
    cout<<"\n\n\t\tEnter Your First Name :\t";
    cin>>name;
    vec_str.push_back(name);
    cout<<"\n\n\t\tEnter Your Phone Number :\t";
    cin>>phn_no;
    vec_phn.push_back(phn_no);
    cout<<"\n\n\t\tEnter Your Pin Code:\t";
    cin>>pin_c;
    vec_pin.push_back(pin_c);
    register_login();
}

void Login()
{
    system("CLS");
    cout<<"Enter your phone number : ";
    cin>>phn_no;
    cout<<"Enter your pin code : ";
    cin>>pin_c;
    for(ll i =0; i<vec_phn.size(); i++)
    {
        if((vec_phn[i] == phn_no) && (vec_pin[i] == pin_c))
        {
            system("CLS");
            cout<<"\n\n\t\t\t\t\tCongratulation "<<vec_str[i]<<endl<<endl;
            cout<<"\n\nDo you want to stay with us..? If yes, press 1\n";
            ll em;
            cin>>em;
            if (em ==1)
            {
                system("CLS");
                click_option();
            }
            else
            {
                system("CLS");
                Back();
            }
        }
        else
        {
            system("CLS");
            cout<<"\nSorry. Your Phone number and pin code doesn't exist in database. \n";
            cout<<"\n\nWhat do you want..??\n\n";
            cout<<"\t\t\t1.Register\n\n";
            cout<<"\t\t\t2. Back\n\n";
            cin>>z;
            if (z == 1) Register();
            else Back();
        }
    }
}

void welcome()
{
    cout<<"\n\t\t\t\t**....Welcome To Our Mobile Banking Apps....**\n\n";

    cout<<"Enter a key what you want ?\n\n";

    cout<<"\t\t1. Login. \n\t\t2. Register. \n\t\t3. Back. \n\n";
    cin>>n;
    if (n == 1) Login();
    if (n ==2) Register();
    if (n ==3) Back();
}

int main()
{
    welcome();
    return 0;
}

