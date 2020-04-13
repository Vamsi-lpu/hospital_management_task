 #include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<string.h>
using namespace std;
int pid=103;
class staff_manage
{	
	public:
    void getdata()
    {
	cout<<"KNOW THE STAFF MEMBER"<<endl;
	cout<<"ID STARTS FROM 1 TO 5"<<endl;
	int id;
	cin>>id;
	switch (id)
	{
		case 1:
		{
			cout<<"NAME - DR. SAI SIRI"<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"CARDIOLOGIST"<<endl;
			cout<<"AGE - 36 "<<endl;
			break;
					
		}
		case 2:
		{
			cout<<"NAME - DR.MOUNIKA"<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NEPHROLOGIST"<<endl;
			cout<<"AGE - 42 "<<endl;
			break;
					
		}
		case 3:
		{
			cout<<"NAME - DR.REVANTH"<<endl;
			cout<<"SEX - MALE"<<endl;
			cout<<"NEUROLOGIST"<<endl;
			cout<<"AGE - 46"<<endl;
			break;
					
		}
		case 4:
		{
			cout<<"NAME - DR.VARUN"<<endl;
			cout<<"SEX - MALE"<<endl;
			cout<<"DERMATOLOGIST"<<endl;
			cout<<"AGE - 50"<<endl;
			break;
					
		}
		case 5:
		{
			cout<<"NAME - DR.MADHAVI "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"GYNECOLOGIST"<<endl;
			cout<<"AGE - 42"<<endl;
			break;
					
		}
		default:
		cout<<"SORRY NO MORE";
		break;
		
}}};
struct app
                            {
                                char symptom[500];
                                char diagnosis[500];
                                char medicine[500];
                                char addmission[30];
                                string ward;
                                int s;
                                char specialist[50];
                            };
           app add;
 struct patient_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char sex[8];
                            char blood_gp[5];
                            char disease_past[50];
                            int id;
                        };

            patient_info ak;
int cost=0;
int main()
{
char fname[20];
time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );

//printing the welcome note
re:
cout<<"\t\t\t\t\t\t       WELCOME \n";       
cout<<"\t\t\t\t\tTHIS IS OUR HOSPITAL MANAGEMENT\n";   
system("pause");
system("cls");
int i;
void doctor(); 
void bill();
staff_manage ob;
b:
cout<<" HOSPITAL MANAGEMENT SYSTEM \n";	
cout<<"Please,  Choose from the following Options: \n";
cout<<"        1  >> DOCTOR'S APPOINTMENT                     \n";
cout<<"        2  >> ADMISSION OF NEW PATIENT               \n";
cout<<"        3  >> PATIENT PROFILE                         \n";
cout<<"        4  >> ADD DIAGNOSIS INFORMTION                          \n";
cout<<"        5  >> STAFF MANAGEMENT                             \n";
cout<<"        6  >> BILLING                                      \n";
cout<<"        7  >> EXIT FROM THE PROGRAM                                    \n";
a:cout<<"Enter your choice: ";cin>>i;
if(i>8||i<1){cout<<"Invalid Choice\n";cout<<"Try again...........\n";goto a;} 
system("cls");
if(i==1)
{
	doctor();
	system("pause");
   system("cls");
   goto b;
}
if(i==2)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<<"\n"<< asctime (timeinfo);
  ofstream pat_file;
  char fname[20];
  cout<<"\nEnter the patient's file name : ";
  cin.ignore();
  gets(fname);
  pat_file.open(fname);
  		if(!fname)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
                        
            cout<<"\n************\n";pat_file<<"\n***************\n";//fn1353 st
            	ak.id=pid++;
            cout<<"\nPatient ID : "<<ak.id;pat_file<<"Patient ID : ";pat_file<<ak.id<<"\n";
			cout<<"\nName : ";pat_file<<"Name : ";gets(ak.name);pat_file<<ak.name<<"\n";
            cout<<"\nAddress : ";pat_file<<"Address : ";gets(ak.address);pat_file<<ak.address<<"\n";
            cout<<"\nContact Number : ";pat_file<<"Contact Number : ";gets(ak.contact);pat_file<<ak.contact<<"\n";
            cout<<"\nAge : ";pat_file<<"Age : ";gets(ak.age);pat_file<<ak.age<<"\n";
            cout<<"\nSex : ";pat_file<<"Sex : ";gets(ak.sex);pat_file<<ak.sex<<"\n";
            cout<<"\nBlood Group : ";pat_file<<"Blood Group : ";gets(ak.blood_gp);pat_file<<ak.blood_gp<<"\n";
            cout<<"\nAny Major disease suffered earlier : ";pat_file<<"Any Major disease suffered earlier : ";gets(ak.disease_past);pat_file<<ak.disease_past<<"\n";
			cout<<"\n************\n";pat_file<<"\n****************\n";
            cout<<"\nInformation Saved Successfully\n";
            }

  system("pause");
  system("cls");
  goto b;

}
if(i==3)
{
    fstream pat_file;
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\nFull Medical History of "<<fname<<"\n";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
}
if(i==4)
{
    fstream pat_file;
    cout<<"\n\nEnter the new patient's file name : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n Information about "<<fname<<"\n";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
			pat_file.close();
			pat_file.open(fname, ios::out | ios::app);
            cout<<"\n";
			cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<"\n";
            int s;
            cout<<"\nSymptoms : "; pat_file<<"Symptoms : ";gets(add.symptom); pat_file<<add.symptom<<"\n";
            cout<<"\nDiagnosis : "; pat_file<<"Diagnosis : ";gets(add.diagnosis); pat_file<<add.diagnosis<<"\n";
            cout<<"\nMedicines : "; pat_file<<"Medicines : ";gets(add.medicine); pat_file<<add.medicine<<"\n";
            cout<<"\nSpecialist : ";pat_file<<"Specialist : ";gets(add.specialist);pat_file<<add.specialist<<"\n";
			cout<<"\nAddmission Required? : "; pat_file<<"Addmission Required? : ";gets(add.addmission); pat_file<<add.addmission<<"\n";
            cout<<"\nType of ward :\n 1.General:\n 2.Private\n ENTER YOUR CHOICE\n"; 
          	cin>>s;
		    switch(s)
            {
            	case 1:
            	cout<<"General Ward";
            	add.ward="General";
            	pat_file<<"Type of ward"; pat_file<<add.ward<<"\n";pat_file<<"\n";
            	break;
            	case 2:
            	cout<<"Private ward";
            	add.ward="Private";
            	pat_file<<"Type of ward"; pat_file<<add.ward<<"\n";pat_file<<"\n";
            	break;
            	default :
            	cout<<"Sorry";
            	break;
            }
            cout<<"\n\n"<<add.ward<<" ward is alloted Successfully\n";
			pat_file.close();
			cout<<"\n\n";
			system("pause");
            system("cls");
			goto b;
		}
}
if(i==5)
{
	ob.getdata();
	system("pause");
   system("cls");
   goto b;
}
if(i==6)
{
	bill();
	system("pause");
   system("cls");
   goto b;
}
if(i==7)
{
system("cls");
cout<<"                              THANK YOU FOR USING                                 \n";
cout<<"                           HOSPITAL MANAGEMENT SYSTEM                                 \n";
}
cout<<"\n";
}

void doctor()
{
cout<<"SELECT FROM THESE FIVE\n";
cout<<"             1  >> CARDIOLOGIST                                  \n";
cout<<"             2  >> NEPHROLOGIST                                  \n";
cout<<"             3  >> DERMATOLOGIST                                    \n";
cout<<"             4  >> NEUROLOGIST                                   \n";
cout<<"             5  >> GYNECOLOGIST                                   \n";
	int i;
	cin>>i;
	switch (i)
	{
		case 1:
		cout<<"DR. SAI SIRI\n TIME :- 10 am TO 2 pm "<<endl;
		break;
		case 2:
		cout<<"DR. MOUNIKA\n TIME :- 11 am TO 3 pm "<<endl;
		break;
		case 3:
		cout<<"DR. VARUN\n TIME :- 9 am TO 12 pm "<<endl;
		break;
		case 4:
		cout<<"DR. REVANTH\n TIME :- 1 pm TO 4 pm "<<endl;
		break;
		case 5:
		cout<<"DR. MADHAVI\n TIME :- 2 pm TO 5 pm "<<endl;
		break;
		default :
		cout<<"THANK YOU"<<endl;
		break;
	}
	cout<<"APPOINTMENT GRANTED\n";
	cout<<"DO YOU WANT TO CANCEL YOUR APPOINMENT "<<endl;
	cout<<"TYPE YES OR NO"<<endl;
	string s;
	cin>>s;
	if(s=="YES")
	cout<<"YOUR APPOINMENT HAS BEEN CANCELLED"<<endl;
	else
	cout<<"THANK YOU"<<endl;
}
		void bill()
{
    
	cost=500; //admisiion fees(300)+medicine fees(200)
	//ward cost
	if(add.ward=="General")
	cost+=2000; //general ward cost (2000)
	else if(add.ward=="Private")
	cost+=5000; //private ward cost (5000)
	//Appointment Cost
	if(strcmpi(add.specialist,"CARDIOLOGIST")==0)
	cost+=2500;  
	else if(strcmpi(add.specialist,"NEPHROLOGIST")==0)  
	cost+=1500;
	else if(strcmpi(add.specialist,"DERMATOLOGIST")==0)  
	cost+=1000;                          
 	else if(strcmpi(add.specialist,"NEUROLOGIST")==0)  
	cost+=3000;  
	else if(strcmpi(add.specialist,"GYNECOLOGIST")==0)  
	cost+=2000;
	cout<<"YOUR TOTAL BILL IS:"; 
	cout<<cost<<endl;                                
}


	
	
	
	

