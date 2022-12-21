#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void display_and_login(){
    ll n;
    ll phn_no, pin_c, k , recent_mny =10000;
    vector<ll>phn_v{0};
    vector<ll>pin_v{0};
    cout<<"\n\t\t\t\t**....Welcome to our mobile banking apps....**\n\n";

    cout<<"Enter a key what you want ?\n\n";

    cout<<"\t\t1. Login. \n\t\t2. Resister. \n\t\t3. Back. \n\n";cin>>n;
    if(n == 1)
    {
        cout<<"Enter your phone number : ";
        cin>>phn_no;
        cout<<"Enter your pin code : ";
        cin>>pin_c;
        for(ll i=0; i<phn_v.size(); i++)
        {
            if( (phn_no != phn_v[i]) && (pin_c != pin_v[i]) )
            {
                ll a, ku;
                cout<<"\nSorry. Your Phone number and pin code doesn't exist in database. Now chose yourself .\n ";
                cout<<"\n\t\t1. Resister. \n\t\t2. Back. \n\n";
                cin>>a;
                if(a== 1)
                {
                    phn_v.push_back(phn_no);
                    k = i;
                    pin_v.push_back(pin_c);
                    cout<<"\nWe are elated to have you join our team. On behalf of the entire organization, we would like to heartily congratulate you!\n\n";
                    cout<<"Please Recharge your account. If you not recharge your bank continue with 1 ."; cin>>ku;
                    if(ku == 1)
                    {
                            cout<<"\n\t\t\t\tThanks for visiting our apps. Have a sweet day.\n\n";
                            //return 0;
                            break;
                    }
                    else
                    {
                        ll zu;
                        cout<<"Enter the amount you recharge now :\t"; cin>>zu;
                        recent_mny = zu;
                    }
                }
                else{
                        cout<<"\n\t\t\t\tThanks for visiting our apps. Have a sweet day.\n\n";
                       // return 0;
                       break;
                        }

                }
             else
             {
                 ll z;
                 cout<<"\nWhat does You want..??";
                 cout<<"\n\n\t\t1. Cash-in. \t\t2. Cash-out. \t\t3. Send Money. \n\n";
                 cout<<"\n\n\t\t4. Mobile Recharge. \t5. Pay Bill. \t\t6. Payment. \n\n";
                 cout<<"\n\n\t\t7. SS to Bank. \t\t8. SS to ATM.   \t9. SS to Another Mobile Bank . \n\n";
                 cout<<"\n\n\t\t10. Bank to SS. \t11. Loans. \t\t12. Check Balance. \n\n";
                 cin>>z;
                 if(z == 1)
                 {
                     ll o;
                     cout<<"How much money you cash in to your bank :\t"; cin>>o;
                     cout<<"\n\t\t\tAfter cash in your bank balance is :\t"<<recent_mny+o<<" Taka"<<endl;
                 }
                 if(z == 2)
                 {
                     ll o;
                     cout<<"How much money you cash out from your bank :\t"; cin>>o;
                     cout<<"\n\t\t\tBefore cash out your bank balance is :\t"<<recent_mny<<" Taka"<<endl;
                     cout<<"\n\t\t\tAfter cash out your bank balance is :\t"<<recent_mny-o<<" Taka"<<endl;
                 }
                 if(z == 3)
                 {
                     ll o;
                     cout<<"How much money you send from your bank :\t"; cin>>o;
                     cout<<"\n\t\t\tBefore Send money from your bank the balance is :\t"<<recent_mny<<" Taka"<<endl;
                     cout<<"\n\t\t\tAfter cash in your bank balance is :\t"<<recent_mny+o<<" Taka"<<endl;
                 }
             }
        }
    }
    else if(n ==2)
    {
        //Resister
    }
    else
    {
        cout<<"\n\t\t\t\tThanks for visiting our apps. Have a sweet day.\n\n";
      //  return 0;
    }
}
int main()
{
    display_and_login();

    return 0;
}

