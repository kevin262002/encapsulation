#include<iostream>

using namespace std;

class Student{
	
	private:
		
		int stu_id;
        char stu_name[20];
        int stu_age;
        char stu_course[20];
        char stu_email[20];
        char stu_city[20];
        char stu_college[20];
	
	public:
		
		void setter();
		void getter();
};

void Student :: setter(){
	
	cout<<"Enter Id : ";
	cin>>stu_id;
	
	cout<<"Enter Name : ";
	cin>>stu_name;
	
	cout<<"Enter Age : ";
	cin>>stu_age;
	
	cout<<"Enter Course : ";
	cin>>stu_course;
	
	cout<<"Enter Course : ";
	cin>>stu_email;
	
	cout<<"Enter City : ";
	cin>>stu_city;
	
	cout<<"Enter College : ";
	cin>>stu_college;
	
}
void Student :: getter(){
	
	cout<<stu_id<<endl;
	cout<<stu_name<<endl;
	cout<<stu_age<<endl;
	cout<<stu_course<<endl;
	cout<<stu_email<<endl;
	cout<<stu_city<<endl;
	cout<<stu_college<<endl;

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
