#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int aprice=150,cprice=100;
	int aticket,cticket,gross;
	int per;	
    char movie[200];
    cout<<"Enter Movie Name :"<<endl;
    cin>>movie;
    cout<<"Enter total adult ticket sold :"<<endl;
    cin>>aticket;
    cout<<"Enter total child ticket sold :"<<endl;
    cin>>cticket;
    gross=((aprice*aticket)+(cprice*cticket));
    cout<<"Gross Amount : "<<gross<<endl;
    cout<<"Enter Persentage to be donated :"<<endl;
    cin>>per;
    //float p=per/100;
    float amount=gross*per/100;
    float profit=gross-amount;
    cout<<"AMOUNT donated= "<<amount<<endl;
    cout<<"net profit :"<<profit;
    
    
    
}
