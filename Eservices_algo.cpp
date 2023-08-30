#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;
int m,db,w,d,e,l,subsr;
float sr,num,y,pl,rd;
class dbm5
{
	public:
		int size5;
		int length5;
		float *E;
};
class dbm4
{
	public:
		int size4;
		int length4;
		float *D;
};
class dbm3
{
	public:
	    int size3;
		int length3;
		int *C;
};
class dbm2
{
	public:
		int size2;
		int length2;
		string *B;
};
class dbm
{
	public:
		int size;
		int length;
		int *A;
};
void add()
{
	int day,month,year,sod;
	string yn;
	cout<<"Enter date "<<endl;
	cout<<"Day  ";
	cin>>day;
	cout<<"Month ";
	cin>>month;
	cout<<"Year ";
	cin>>year;
	cout<<"Enter the status of deal"<<endl;
	cout<<"yes or no"<<endl;
	cin>>yn;
	sod=(year*10000)+(month*100)+(day);
	if (strncasecmp(yn.c_str(),"yes",3) == 0) 
			{
				pl=((y+1)/(l))*100;
			}
			else
			{
				pl=(y/(l))*100;
			}
	if(l==1)
	{
		cout<<"fwdgesguifydgulkqclgucs"<<endl;
			if (strncasecmp(yn.c_str(),"yes",3) == 0) 
			{
				pl=100;
			}
			else
			{
				pl=0;
			}
	}
	rd=(pl/20.0);
	
	if(sr==1)
	{
		if(subsr==1)
		{
			ofstream ofs("c1.txt",ios::app);
		    ofs<<l<<" "<<sod<<" "<<yn<<" "<<pl<<" "<<rd<<endl;
		}
		else if(subsr==2)
		{
			ofstream ofs("c2.txt",ios::app);
		    ofs<<l<<" "<<sod<<" "<<yn<<" "<<pl<<" "<<rd<<endl;
		}
		else if(subsr==3)
		{
			ofstream ofs("c3.txt",ios::app);
		    ofs<<l<<" "<<sod<<" "<<yn<<" "<<pl<<" "<<rd<<endl;
		}
		else if(subsr==4)
		{
			ofstream ofs("c4.txt",ios::app);
		    ofs<<l<<" "<<sod<<" "<<yn<<" "<<pl<<" "<<rd<<endl;
		}
		else if(subsr==5)
		{
			ofstream ofs("c5.txt",ios::app);
		    ofs<<l<<" "<<sod<<" "<<yn<<" "<<pl<<" "<<rd<<endl;
		}
	}
}
void edit()
{
	cout<<"1.Add \n2.Insert \n3.Delete \n4.search \n5.Get \n6.Set \n7.Max \n8.Min \n9.Display \n10.Menu \n11.Exit"<<endl;
	cin>>e;
	switch(e)
	{
		case 1:
			{
				add();
				break;
			}
		case 2:
			{
				add();
				break;
			}
		case 3:
			{
				add();
				break;
			}
	}
}
void menu()
{
	cout<<"Enter key"<<endl;
	cout<<"1.Data Bank \n2.Exit \n"<<endl;
	cin>>m;
}
int exit()
{
	cout<<"exit"<<endl;
	return 0;
}
void display(class dbm report,class dbm2 report2,class dbm3 report3,class dbm4 report4,class dbm5 report5)
{
	for(int i=0;i<report.length;i++)
	{
		cout<<report3.C[i]<<" "<<report.A[i]<<" "<<report2.B[i]<<" "<<report4.D[i]<<" "<<report5.E[i]<<endl;
	}
	cout<<"success rate is "<<((y/(l-1))*100)<<endl;
}
void data(int d)
{
	class dbm report;
	report.A=new int[100];
	class dbm2 report2;
	report2.B=new string[100];
	class dbm3 report3;
	report3.C=new int[100];
	class dbm4 report4;
	report4.D=new float[100];
	class dbm5 report5;
	report5.E=new float[100];
	switch(subsr)
	{
		case 1:
			{
				ifstream ifs("c1.txt");
				if(!ifs)
				{
					cout<<"File cannot opened"<<endl;
				}
				if(ifs)
				{
					cout<<"Elements are copied from the file"<<endl;
				}
				int i=0;
				while(!ifs.eof())
				{
					ifs>>report3.C[i];
					ifs>>report.A[i];
					ifs>>report2.B[i];
					ifs>>report4.D[i];
					ifs>>report5.E[i];
					i++;
				};
				report.length=i;
				l=report.length;
				int j;
				float vy=0,vn=0,p;
				for(j=0;j<l;j++)
				{
					if (strncasecmp(report2.B[j].c_str(),"yes",3) == 0) 
					{
        				vy++;
					}
					else
					{
						vn++;
					}
					p=((vy/(j+1))*100);
					report4.D[j]=p;
				}
				pl=((vy/(l-1))*100);
				y=vy;
				if(ifs.eof())
					{
						cout<<"End of the file reached"<<endl;
					}
					ifs.close();
					break;
			}
			case 2:
			{
				ifstream ifs("c2.txt");
				if(!ifs)
				{
					cout<<"File cannot opened"<<endl;
				}
				if(ifs)
				{
					cout<<"Elements are copied from the file"<<endl;
				}
				int i=0;
				while(!ifs.eof())
				{
					ifs>>report3.C[i];
					ifs>>report.A[i];
					ifs>>report2.B[i];
					ifs>>report4.D[i];
					ifs>>report5.E[i];
					i++;
				};
				report.length=i;
				l=report.length;
				int j;
				float vy=0,vn=0,p;
				for(j=0;j<l;j++)
				{
					if (strncasecmp(report2.B[j].c_str(),"yes",3) == 0) 
					{
        				vy++;
					}
					else
					{
						vn++;
					}
					p=((vy/(j+1))*100);
					report4.D[j]=p;
				}
				pl=((vy/(l-1))*100);
				y=vy;
				if(ifs.eof())
					{
						cout<<"End of the file reached"<<endl;
					}
					ifs.close();
					break;
			}
			case 3:
			{
				ifstream ifs("c3.txt");
				if(!ifs)
				{
					cout<<"File cannot opened"<<endl;
				}
				if(ifs)
				{
					cout<<"Elements are copied from the file"<<endl;
				}
				int i=0;
				while(!ifs.eof())
				{
					ifs>>report3.C[i];
					ifs>>report.A[i];
					ifs>>report2.B[i];
					ifs>>report4.D[i];
					ifs>>report5.E[i];
					i++;
				};
				report.length=i;
				l=report.length;
				int j;
				float vy=0,vn=0,p;
				for(j=0;j<l;j++)
				{
					if (strncasecmp(report2.B[j].c_str(),"yes",3) == 0) 
					{
        				vy++;
					}
					else
					{
						vn++;
					}
					p=((vy/(j+1))*100);
					report4.D[j]=p;
				}
				pl=((vy/(l-1))*100);
				y=vy;
				if(ifs.eof())
					{
						cout<<"End of the file reached"<<endl;
					}
					ifs.close();
					break;
			}
			case 4:
			{
				ifstream ifs("c4.txt");
				if(!ifs)
				{
					cout<<"File cannot opened"<<endl;
				}
				if(ifs)
				{
					cout<<"Elements are copied from the file"<<endl;
				}
				int i=0;
				while(!ifs.eof())
				{
					ifs>>report3.C[i];
					ifs>>report.A[i];
					ifs>>report2.B[i];
					ifs>>report4.D[i];
					ifs>>report5.E[i];
					i++;
				};
				report.length=i;
				l=report.length;
				int j;
				float vy=0,vn=0,p;
				for(j=0;j<l;j++)
				{
					if (strncasecmp(report2.B[j].c_str(),"yes",3) == 0) 
					{
        				vy++;
					}
					else
					{
						vn++;
					}
					p=((vy/(j+1))*100);
					report4.D[j]=p;
				}
				pl=((vy/(l-1))*100);
				y=vy;
				if(ifs.eof())
					{
						cout<<"End of the file reached"<<endl;
					}
					ifs.close();
					break;
			}
			case 5:
			{
				ifstream ifs("c5.txt");
				if(!ifs)
				{
					cout<<"File cannot opened"<<endl;
				}
				if(ifs)
				{
					cout<<"Elements are copied from the file"<<endl;
				}
				int i=0;
				while(!ifs.eof())
				{
					ifs>>report3.C[i];
					ifs>>report.A[i];
					ifs>>report2.B[i];
					ifs>>report4.D[i];
					ifs>>report5.E[i];
					i++;
				};
				report.length=i;
				l=report.length;
				int j;
				float vy=0,vn=0,p;
				for(j=0;j<l;j++)
				{
					if (strncasecmp(report2.B[j].c_str(),"yes",3) == 0) 
					{
        				vy++;
					}
					else
					{
						vn++;
					}
					p=((vy/(j+1))*100);
					report4.D[j]=p;
				}
				pl=((vy/(l-1))*100);
				y=vy;
				if(ifs.eof())
					{
						cout<<"End of the file reached"<<endl;
					}
					ifs.close();
					break;
			}
	}
	if(d==1)
	{
		display(report,report2,report3,report4,report5);
	}
	else if(d==2)
	{
		edit();
	}
}

void civilServ(int n)
{
	switch(n)
	{
		case 1:
			{
				cout<<"c1 File"<<endl;
				cout<<"Enter key"<<endl;
				cout<<"1.Data dispaly \n2.Data editing\n3.menu \n4.Exit \n"<<endl;
				cin>>d;
				if(d==1 || d==2)
					data(d);
				else if(d==3)
				    menu();
				else if(d==4)
				    exit();
				else
				    cout<<"Invalid key "<<endl;
				break;
			}
			case 2:
			{
				cout<<"c2 File"<<endl;
				cout<<"Enter key"<<endl;
				cout<<"1.Data dispaly \n2.Data editing\n3.menu \n4.Exit \n"<<endl;
				cin>>d;
				if(d==1 || d==2)
					data(d);
				else if(d==3)
				    menu();
				else if(d==4)
				    exit();
				else
				    cout<<"Invalid key "<<endl;
				break;
			}
			case 3:
			{
				cout<<"c3 File"<<endl;
				cout<<"Enter key"<<endl;
				cout<<"1.Data dispaly \n2.Data editing\n3.menu \n4.Exit \n"<<endl;
				cin>>d;
				if(d==1 || d==2)
					data(d);
				else if(d==3)
				    menu();
				else if(d==4)
				    exit();
				else
				    cout<<"Invalid key "<<endl;
				break;
			}
			case 4:
			{
				cout<<"c4 File"<<endl;
				cout<<"Enter key"<<endl;
				cout<<"1.Data dispaly \n2.Data editing\n3.menu \n4.Exit \n"<<endl;
				cin>>d;
				if(d==1 || d==2)
					data(d);
				else if(d==3)
				    menu();
				else if(d==4)
				    exit();
				else
				    cout<<"Invalid key "<<endl;
				break;
			}
			case 5:
			{
				cout<<"c5 File"<<endl;
				cout<<"Enter key"<<endl;
				cout<<"1.Data dispaly \n2.Data editing\n3.menu \n4.Exit \n"<<endl;
				cin>>d;
				if(d==1 || d==2)
					data(d);
				else if(d==3)
				    menu();
				else if(d==4)
				    exit();
				else
				    cout<<"Invalid key "<<endl;
				break;
			}
			case 6:
			{
				cout<<"add workers in progress \n"<<endl;
			}
			case 7:
			{
				menu();
				break;
			}
			case 8:
				{
					exit();
					break;
				}
			default :
				{
					cout<<"Invalid key "<<endl;
				}
	}
}
void civil()
{
	cout<<"1.C1 \n2.C2\n3.C3 \n4.c4 \n5.c5 "<<endl;
	cout<<"6.Add civil workers"<<endl;
	cout<<"7.menu"<<endl;
	cout<<"8.exit \n"<<endl;
	cin>>w;
	subsr=w;
	num=sr+(w/10.0);
	civilServ(w);
}
void painter()
{
	cout<<"painter ";
}
void electrician()
{
	cout<<"electrician ";
}
void iron()
{
	cout<<" iron";
}
void carpenter()
{
	cout<<"carpenter ";
}
void plumber()
{
	cout<<"plumber ";
}
void glazing()
{
	cout<<" glazing";
}
void tile()
{
	cout<<"tile ";
}
void services(int db)
{
	switch(db)
	{
		case 1:
			{
				cout<<"Civil Workers list"<<endl;
				civil();
				break;
			}
			case 2:
			{
				cout<<"Painters list"<<endl;
				painter();
				break;
			}
			case 3:
			{
				cout<<"Electrician list"<<endl;
				electrician();
				break;
			}
			case 4:
			{
				cout<<"Iron Workers list"<<endl;
				iron();
				break;
			}
			case 5:
			{
				cout<<"Carpenters list"<<endl;
				carpenter();
				break;
			}
			case 6:
			{
				cout<<"Plumbers list"<<endl;
				plumber();
				break;
			}
			case 7:
			{
				cout<<"Glazing worker list"<<endl;
				glazing();
				break;
			}
			case 8:
			{
				cout<<"Tile Workers list"<<endl;
				tile();
				break;
			}
			case 9:
			{
				menu();
				break;
			}
			case 10:
			{
				exit();
				break;
			}
			default :
				{
					cout<<"Invalid key "<<endl;
				}
	}
}
int dataBank()
{
	cout<<"Enter key "<<endl;
	cout<<"1.Civil Work \n2.Painter \n3.Electrician \n4.Iron Work \n5.Carpenter \n6.Plumber \n7.Glazing \n8.Tile Work \n9.menu \n10.Exit \n"<<endl;
	cin>>db;
	sr=db;
	services(db);
	return 0;
}
void menu_cases(int m)
{
	switch(m)
	{
		case 1:dataBank();
		break;
		case 2:exit();
		break;
		default :
			{
				cout<<"Invalid number"<<endl;
				menu();
			}
	}
}

int main()
{
	while(m!=2)
	{
		menu();
		menu_cases(m);
	}
	
	
	return 0;
}
