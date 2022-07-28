// This program is simply based on loops,here we used switch case loop.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int order,no_deals;
    cout<<"|*--------------------MENU--------------------*|"<<"\n";
    cout<<"\n";
    cout<<"[1]  Chicken Biryani                      Rs 150 /-"<<"\n";
    cout<<"[2]  Butter Chicken                       Rs 200 /-"<<"\n";
    cout<<"[3]  Paneer Tikka                         Rs 180 /-"<<"\n";
    cout<<"[4]  Mutton Curry                         Rs 250 /-"<<"\n";
    cout<<"[5]  Chicken Burger                       Rs 120 /-"<<"\n";
    cout<<"[6]  Soft Drink                           Rs 100 /-"<<"\n";
    cout<<"\n";
    
    cout<<"Please select the order number: ";
    cin>>order;
    cout<<"Please enter the number of deals: ";
    cin>>no_deals;
    cout<<"\n";
    switch(order){
        case 1:
            cout<<"Order: Chicken Biryani."<<"\n";
            cout<<"Number of deals: "<<no_deals<<"\n";
            cout<<"Price of each deal: Rs 150/-"<<"\n";
            cout<<"Total Price: "<<"Rs "<<150*no_deals<<" "<<"/-"<<"\n";
            cout<<"\n";
            cout<<"~~------THANK YOU FOR COMING------~~"<<"\n";
            break;
        case 2:
            cout<<"Order: Butter Chicken."<<"\n";
            cout<<"Number of deals: "<<no_deals<<"\n";
            cout<<"Price of each deal: Rs 200/-"<<"\n";
            cout<<"Total Price: "<<"Rs "<<200*no_deals<<" "<<"/-"<<"\n";
            cout<<"\n";
            cout<<"~~------THANK YOU FOR COMING------~~"<<"\n";
            break;
        case 3:
            cout<<"Order: Paneer Tikka."<<"\n";
            cout<<"Number of deals: "<<no_deals<<"\n";
            cout<<"Price of each deal: Rs 180/-"<<"\n";
            cout<<"Total Price: "<<"Rs "<<180*no_deals<<" "<<"/-"<<"\n";
            cout<<"\n";
            cout<<"~~------THANK YOU FOR COMING------~~"<<"\n";
            break;
        case 4:
            cout<<"Order: Mutton Curry."<<"\n";
            cout<<"Number of deals: "<<no_deals<<"\n";
            cout<<"Price of each deal: Rs 250/-"<<"\n";
            cout<<"Total Price: "<<"Rs "<<250*no_deals<<" "<<"/-"<<"\n";
            cout<<"\n";
            cout<<"~~------THANK YOU FOR COMING------~~"<<"\n";
            break;
        case 5:
            cout<<"Order: Chicken Burger."<<"\n";
            cout<<"Number of deals: "<<no_deals<<"\n";
            cout<<"Price of each deal: Rs 120/-"<<"\n";
            cout<<"Total Price: "<<"Rs "<<120*no_deals<<" "<<"/-"<<"\n";
            cout<<"\n";
            cout<<"~~------THANK YOU FOR COMING------~~"<<"\n";
            break;
        case 6:
            cout<<"Order: Butter Chicken."<<"\n";
            cout<<"Number of deals: "<<no_deals<<"\n";
            cout<<"Price of each deal: Rs 100/-"<<"\n";
            cout<<"Total Price: "<<"Rs "<<100*no_deals<<" "<<"/-"<<"\n";
            cout<<"\n";
            cout<<"~~------THANK YOU FOR COMING------~~"<<"\n";
            break;
    }
    return 0;
}