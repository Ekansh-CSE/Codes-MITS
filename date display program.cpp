#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the date in the format dd mm yy\n";
	cin>>a>>b>>c;
	if(a==1 or a==21 or a==31){
		cout<<a<<"st";
	}
	else if(a==2 or a==22){
		cout<<a<<"nd";
	}
	else if(a==3 or a==23){
		cout<<a<<"rd";
	}
	else{
	
	cout<<a<<"th";
	}
	if (b==1){
		cout<<" january ";
	}
	else if(b==2){
		cout<<" february ";
	}
	else if(b==3){
		cout<<" march ";
	}
	else if(b==4){
		cout<<" april ";
	}
	else if(b==5){
		cout<<" may ";
	}
	else if(b==6){
		cout<<" june ";
	}
	else if(b==7){
		cout<<" july ";
	}
	else if(b==8){
		cout<<" august ";
	}
	else if(b==9){
		cout<<" september ";
	}
	else if(b==10){
		cout<<" october ";
	}
	else if(b==11){
		cout<<" november ";
	}
	else if(b==12){
		cout<<" december ";
	}
	else{
		cout<<"please enter the correct month\n";
	}
	cout<<"20"<<c;
	return 0;
}