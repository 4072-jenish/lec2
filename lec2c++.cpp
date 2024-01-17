#include<iostream>
#include<string.h>

using namespace std;

class Hotel{

 private:
    int id;
	char name[100];
	char type[100];
	int rate;
	char adress[100];
	int est;
	int staff;
	int room;
	
	public:
		
		void setdata(){
			
			cout<<"Enter Hotel id :-"<< endl;
			cin>>id;
			cout<<"Enter Hotel name :-"<< endl;
			cin>>name;
			cout<<"Enter Hotel type :-"<< endl;
			cin>>type;
			cout<<"Enter Hotel rate :-"<< endl;
			cin>>rate;
			cout<<"Enter Hotel adress :-"<< endl;
			cin>>adress;
			cout<<"Enter Hotel establishin year :-"<< endl;
			cin>>est;
			cout<<"Enter Hotel staff count :-"<< endl;
			cin>>staff;
			cout<<"Enter Hotel room count :-"<< endl;
			cin>>room;
		}
		void getdata(){
			
			cout<<" Hotel id :-" <<id << endl;
			cout<<" Hotel name :-" <<name << endl;
			cout<<" Hotel type :-" <<type << endl;
			cout<<" Hotel rate :-" <<rate << endl;
			cout<<" Hotel adress :-" <<adress << endl;
			cout<<" Hotel establish year :-" <<est << endl;
			cout<<" Hotel staff count :-" <<staff << endl;
			cout<<" Hotel room count :-" <<room << endl;
		}
	
};

  int main(){
  	
  	int i,n;
  	Hotel h[n]; 
  	
  	
  	cout<<"Enter Hotel count"<<endl;
  	cin>>n;
  	
  	for(i=0;i<n;i++){
  		
  	   h[i].setdata();
  	   h[i].getdata();
  		
	  }
  	
  	return 0;
  } 



















































