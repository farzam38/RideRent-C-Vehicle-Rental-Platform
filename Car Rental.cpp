//  Submitted To : Sir Ameer Gillani
//  Submitted By :  
//                 SP22-BCS-191 (Farzam Imdad)
//                 SP22-BCS-160 (Ghulam Ali)
//                 SP22-BCS-186 (Kashaf)
//                 SP22-BCS-179 (Zainab Naeem)
//                 SP22-BCS-192 (Rida Nayab) 
//                 Car Rental System

#include<iostream>
#include<fstream>
using namespace std;
    void login();
    void registr();
 struct Cars {
    string make [10] = {"Toyota","Honda","Suzuki","MG","KIA","back"};
    string model [10]= {"2019","2021","2018","2021","2022"};
    string color [10]={"Black","White","Blue","Red Vine","Silver"};
    string max_speed [10]={"180Km/h ","160 Km/h","110 Km/h","200 Km/h","230 Km/h"};
    string milage [10]={"20000 Km ","15000 Km","25000 Km","17000 Km","3000 Km"};
    int price [10] ={300000,2500000,2000000,5500000,50000000} ;
    int price2 [10] ={2000,2500,1000,5500,4000} ;
    int date [10] = {2018,2005,2008,2010,2014};
    char Return;
   };
   struct Info {
   string Name [20];
   string Natio_ID [20] ;
   int payment_acc [ 20] ;
   int payment_acc2 [ 20] ;
   int tenure[20];
   int phone [20];
   string address[100] ;
   };
   //Declaring struct
 Cars car ;
 Info info ;
 //First output
   void Menu ()
 {
   int num=1;
 for(int i=0 ;i<6;++i)
 {
 	cout<<"\t\t\t";
    cout<<"Enter " <<num<<"\t- To Select  "<<car.make[i]<<endl;
	num++ ;
	}      
 }
 //function for buying system
 void Details (int theChoice)
 // details of cars being slected
  {
   	system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<car.make[theChoice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : "<<car.model[theChoice-1]<<endl;
     cout<<"\t\t\tColor : "<<car.color[theChoice-1]<<endl;
     cout<<"\t\t\tMilage : "<<car.milage[theChoice-1]<<endl;
     cout<<"\t\t\tPrice : "<<car.price[theChoice-1]<<"Rs"<<endl;
  }
   //function for renting system
   void Details2 (int theChoice)
  {
   	system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<car.make[theChoice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : "<<car.model[theChoice-1]<<endl;
     cout<<"\t\t\tColor : "<<car.color[theChoice-1]<<endl;
     cout<<"\t\t\tTop Speed : "<<car.max_speed[theChoice-1]<<endl;
     cout<<"\t\t\tPrice : "<<car.price2[theChoice-1]<<"Rs Per Day"<<endl;
  }
   //check info credit
   //check the price of cars of buying system
   void check (int j)
  {
      if(info.payment_acc[j]  >= car.price[j])
           cout<<"\n\n\n\t\t\tPurchased Successfully!! "<< "Enjoy Your New Ride!!"<<endl;
           else
              cout<<"\n\n\n\t\t\tNot Available " <<endl;

  }
  //check the price of cars of renting system
  void check2 (int j)
  {
      if(info.payment_acc2[j]  >= car.price2[j])
           cout<<"\n\n\n\t\t\tRented Successfully!! "<< "Enjoy Your Ride!!"<<endl;
  }
 //User Inputcpo
  void user_input (int theChoice)
   {
   	system("CLS");
        int j=theChoice-1 ;
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF CAR\n\n\n\n";
       cout<<"\t\t\tEnter Your Name : ";
       cin>>info.Name[j];
       cout<<"\t\t\tEnter Your National ID : ";
       cin>>info.Natio_ID[j] ;
       cout<<"\t\t\tPayment Amount: " ;
       cin>>info.payment_acc[j] ;
       cout<<"\t\t\tPhone Number: " ;
       cin>>info.phone[j] ;
       cout<<"\t\t\tAddress: " ;
       cin>>info.address[j] ;
     check( j ) ;
   }
   void user_input2 (int theChoice)
   {
   	system("CLS");
        int j=theChoice-1 ;
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF CAR\n\n\n\n";
       cout<<"\t\t\tEnter Your Name : ";
       cin>>info.Name[j];
       cout<<"\t\t\tEnter Your National ID : ";
       cin>>info.Natio_ID[j] ;
       cout<<"\t\t\tPhone Number: " ;
       cin>>info.phone[j] ;
       cout<<"\t\t\tAddress: " ;
       cin>>info.address[j] ;
       cout<<"\t\t\tTenure (Days): " ;
       cin>>info.tenure[j] ;
       cout<<"\t\t\tTotal Amount: "<< car.price2[j]* info.tenure[j] <<"Rs" ;
     check2( j ) ;
   }
    int main()
{	
	 cout<<"\t\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\t\tCAR RENTAL & DEALING SYSTEM \n";
     cout<<"\t\t\t\tWelcome to Our Company ,Choose from the menu : "<<endl;
     cout<<"\t\t\t\t----------------------------------------------\n";   
    //login page 
	 int choice;
      cout<<"** WELCOME **"<<endl;
      cout<<"MENU: "<<endl;
      cout<<"1. Login"<<endl;
      cout<<"2. Register" <<endl;
      cout<<"3. Exit"<<endl;
      cout<<"Enter Your Choice: "<<endl;
      cin>>choice;
      cout<<endl;
        switch(choice)
         {
            case 1:
              login();
              break;
            case 2:
             registr();
             break;
            case 3:
          	//case 3 for exit
          	  system("cls");
          	  cout<<"thank you"<<endl;
			  return 0;
			  break;
			  //default is used in switch if user chooses wrong choice then it will clear the screeen and will go back to menu
		  default:
		  system("cls");   
		  cout<<"You have made a mistake, Please try again.";
		  main();
         }  
}
		 int main2()
		 {        //renting and buying system
        string decide ;
        cout<<"\n\n\n\n\t\t\t\t\tCAR RENTAL & DEALING SYSTEM \n";
        cout<<"\n\n\n\n\n\t\t\t\t\t\t Select 1 for Buying"<<endl;
        cout<<"\n\n\n\t\t\t\t\t\t Select 2 for Rent"<<endl;
        cout<<"\n\n\n\t\t\t\t\t\t select 3 to go back"<<endl;
        int i;
        cin>>i;
        system("cls");
        switch (i)
		   {
   	    case 1:
            cout<<"\t\t\t----------------------------------------------\n";
            cout<<"\t\t\t\tCAR RENTAL & DEALING SYSTEM \n";
            cout<<"\t\t\tWelcome to Our Company ,Choose from the menu : "<<endl;
            cout<<"\t\t\t----------------------------------------------\n";
            while(decide!="exit")
            {
                Menu();
                cout<<"\n\n\n\t\t\tYour Choice: ";
                int theChoice ;
                cin>>theChoice ; 
				Details(theChoice) ; 
			     	if (theChoice==6)
                {
				    system("cls");
                    main2();
                    break;   
                }
            cout<<"\n\n\n\t\t\tAre You Sure, you want to Buy this Car? (yes /no /exit ) : ";
            cin>>decide ;
            if(decide=="yes")
			{
                user_input(theChoice);
                cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
                cin>>decide;
                if (decide=="no")
                main2();
				break ;
                system("CLS");
            }
            else
			{
            if(decide=="n")
            {     
      	    system("CLS");
			continue ;
            }
                        else if  (decide=="exit")
                        {
    	                system("CLS");
     	               // cout<<"\n\n\n\t\t\tCoded By Group no 3";
                        break ;
                        }
                        }
    }
    break; 
    case 2:
    	 cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tCAR RENTAL & DEALING SYSTEM \n";
     cout<<"\t\t\tWelcome to Our Company ,Choose from the menu : "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
	 while(decide!="exit")
     {
         Menu();
    cout<<"\n\n\n\t\t\tYour Choice: ";
	 int theChoice ;
     cin>>theChoice ;
     Details2(theChoice);
   	if (theChoice==6)
                {
				    system("cls");
                    main2();
                    break;   
                }   
	// Details2(theChoice);
       cout<<"\n\n\n\t\t\t Are You Sure, you want to rent this Car? (yes/no/exit) : ";
       cin>>decide ;
	  if(decide=="y") 
	  {
        user_input2(theChoice);
		cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
        cin>>decide;
		if (decide=="n")
		 break ;
		system("CLS");
     }
   else {
      if(decide=="n")
      {
      	system("CLS");
          	continue;
		  break ;
      }
     else if  (decide=="exit")
     {
    	system("CLS");
    	main2();
     	cout<<"\n\n\n\t\t\t Coded By Our Group";
         break ;
     }
   }
     }
     case 3:
     	main();
    break;
   }
   return 0;
}
     void login()
   {
    int count;
    string user, pass,u,p; 
    system("cls");
    cout<<"Please Enter the following details: "<<endl; 
    cout<<"Username:";
	cin>>user;
    cout<<"Password:";
    cin>>pass;
    ifstream input("database.txt");
	while(input>>u>>p)
    {
      if(u==user &&p==pass)
     {    
       count =1;
       system("cls");
     }
     input.close(); 
     if(count== 1)
     {
       cout<<"Hello "<<user<< "  LOGIN SUCCESSFULL";
       //cin.get();
	   main2();
     }
     else
     {
      cout<<"LOGIN ERROR Please check your username and password. "<<endl;
      main();     
     }
    }
}
    void registr()
   {
     string reguser, regpass, ru, pu;
     system("cls");
      cout<<"Enter the Username: ";
      cin>>reguser; 
	  cout<<"Enter the Password: ";
      cin>>regpass;
      ofstream reg;
      reg.open("database.txt"); 
	  reg<<reguser<<" "<<regpass<<endl;
      system("cls"); 
      cout<<"\nRegistration Successful. "<<endl;
      main();
}
