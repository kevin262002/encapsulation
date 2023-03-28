#include<iostream>

using namespace std;

class Student{
	
	private:
		
		int cust_id;
        char cust_name[20];
        int cust_age;
        char cust_telecome_brand_name[20];
        char cust_mobile_number[20]; 
        char cust_city[20];
        int cust_simcard_validity;
	
	public:
		
		void setter();
		void getter();
};

void Student :: setter(){
	
	cout<<"Enter Id : ";
	cin>>cust_id;
	
	cout<<"Enter Name : ";
	cin>>cust_name;
	
	cout<<"Enter Age : ";
	cin>>cust_age;
	
	cout<<"Enter Telecome Brand Name : ";
	cin>>cust_telecome_brand_name;
	
	cout<<"Enter Mobile Number : ";
	cin>>cust_mobile_number;
	
	cout<<"Enter City : ";
	cin>>cust_city;
	
	cout<<"Enter Simcard Validity : ";
	cin>>cust_simcard_validity;
	
}
void Student :: getter(){
	
	cout<<cust_id<<endl;
	cout<<cust_name<<endl;
	cout<<cust_age<<endl;
	cout<<cust_telecome_brand_name<<endl;
	cout<<cust_mobile_number<<endl;
	cout<<cust_city<<endl;
	cout<<cust_simcard_validity<<endl;

}

int main(){
	
	Student obj1,obj2,obj3,obj4,obj5;
	
	obj1.setter();
	obj1.getter();
	obj2.setter();
	obj2.getter();
	obj3.setter();
	obj3.getter();
	obj4.setter();
	obj4.getter();
	obj5.setter();
	obj5.getter();
	
	return 0;
}
