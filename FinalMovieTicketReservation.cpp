#include<iostream>
#include <list> 
#include <iterator> 
#include<queue>
#include<string>
using namespace std;

//process for dislaying the ticket ids
void showlist(list <int> tid) 
{ 
    list <int> :: iterator t; 
    for(t = tid.begin(); t != tid.end(); ++t)//use the for loop displaying all the ticket ids 
        cout << '\t' << *t; 
    cout << '\n'; 
} 

//void display() for dislaying all the transactions who reserves the ticket using queues 
void display(queue <int> tid, queue <string> p, queue <string> mn,queue <string> ln, queue <int> seats, queue <int> total, queue <string> c,queue <string> e)
{
	//queues for initialization of variables in void display 
	queue <int> ticketid = tid;
    queue <string> person = p;
    queue <string> name = mn;
    queue <string> lastname = ln;
    queue <string> email=e;
	queue <string> contact=c;
    queue <int> s = seats;
    queue <int> t = total;
    
    //use while condition if each variable is not empty and use && to the condition
    while (!ticketid.empty() && !person.empty() && !name.empty() && !lastname.empty() && !s.empty() && !t.empty() && !contact.empty() && !email.empty())
    {
    	//display all the movie transactions using the  front function 
    	cout << "\t\t\t\t\t Movie Ticket ID: " << ticketid.front() <<endl; 
        cout << "\t\t\t\t\t First Name: " << person.front()<<endl;
        cout << "\t\t\t\t\t Last Name: " << lastname.front()<<endl;
        cout << "\t\t\t\t\t Movie name: " << name.front()<<endl;
        cout << "\t\t\t\t\t Contact Number:"<<contact.front()<<endl;
        cout << "\t\t\t\t\t Email Address: "<<email.front()<<endl;
        cout << "\t\t\t\t\t Seats: " << s.front()<<endl;
        cout << "\t\t\t\t\t Total Price: " << t.front()<<endl;
        
        //use the pop fuction to deletes the first element of the queue
        ticketid.pop();
        person.pop();
        name.pop();
        lastname.pop();
        contact.pop();
        email.pop();
        s.pop();
        t.pop();
        cout<<endl<<endl;
    }
    cout<<endl;
}

//void viewmovie() for displaying new movie
void viewmovie(queue <int> mc, queue <string> newm,queue <string> d, queue <int> tp	)
{
	//queues for initialization of the variables
	queue <int> moviecode = mc;
    queue <string> newmovie = newm;
    queue <string> releasedate = d;
    queue <int> ticketprice = tp;
    
    //while condition to check each queues is not empty
    while (!moviecode.empty() && !newmovie.empty() && !releasedate.empty() && !ticketprice.empty() )
    {
    	
    	//to display all the movie using front function 
    	cout << "\t Movie Code:" << moviecode.front() <<endl; 
        cout << "\t Movie Name:" << newmovie.front()<<endl;
        cout << "\t Release Date:" << releasedate.front()<<endl;
        cout << "\t Ticket Price:" << ticketprice.front()<<endl;
        //use the pop fuction to delete the first element of the queue
        moviecode.pop();
        newmovie.pop();
        releasedate.pop();
        ticketprice.pop();
        cout<<endl<<endl;
    }
    cout<<endl;
}
	// void viewmoviecode() for dislaying
void viewmoviecode(list <int> mc) 
{ 
    list <int> :: iterator m; 
    for(m = mc.begin(); m != mc.end(); ++m) 
        cout << '\t' << *m; 
    cout << '\n'; 
} 


int main()
{	
	 list <int> ticketid1s;
	 list <int> moviecode1s;
	 int findmovie;
	 int ticketidss;
   	 int choice1,value;
	 char ch;
	 int choice,reserve,numreserve,seatcapacity, showfl,moviereserve;
  queue <int> ticketids;
  queue <string> persons;
  queue <string> namee;
  queue <string> lastnamee;
  queue <string> emails;
  queue <string> contacts;
  queue <int> seatss;
  queue <int> totalss;
  
  queue <int> moviecodes;
  queue <string> newmovies;
  queue <string> releasedates;
  queue <int> ticketprices;
 
  string person1, lastname1,name1,contact1, emails1;
  int seat1, total2, ticketid1,moviecode1;
 
  string newmovie1,releasedate1;
  int ticketprice1;
	main:

  		string username,password;
		cout<<"\t\t\t\t******************LOG IN******************\n"<<endl;
		cout<<"					   Enter Username:";  
		cin>>username;
		cout<<endl;
		cout<<"					   Enter Password:";
		cin>>password;
		
		if(username=="user"&& password=="pass"){	
		cout<<endl<<endl<<endl;
		cout<<"					   Log in Succesful!"<<endl;
		cout<<endl<<endl;
		cout<<"                      			";system("pause");
		
		goto main1;
			
		}
		while(username!="user" || password!="pass"){
			cout<<endl<<endl;
			cout<<"				      	 Sorry, please Try again"<<endl;
			cout<<endl<<endl;
			cout<<"                      			 ";system("pause");
			system("cls");
			goto main;
		}
	main1:
	system("cls");
	cout<<"\t\t\t\t******************Movie Ticket Reservation******************\n"<<endl;
	cout<<"					Welcome to Movie Ticket Reservation!						  "<<endl;
	cout<<"					Enter >1< View Transactions								  "<<endl;
	cout<<"					Enter >2< Reservation										  "<<endl;
	cout<<"					Enter >3< View Movie Ticket Ids							  "<<endl;
	cout<<"					Enter >4< Insert Movie							  		  "<<endl;
	cout<<"					Enter >5< View Upcoming Movies							  		  "<<endl;
    cout<<"					Enter >0< To Exit 										  "<<endl;
   	cout<<endl<<endl;
	cout<<"					Enter your Choice: ";
	cin>>choice;
	
		switch (choice){
			system("cls");
			case 1:
			cout<<"\n\t\t\t******************** View Movie Reservations ********************"<<endl;
			 display(ticketids,persons, namee,lastnamee, seatss, totalss,contacts, emails);
			cout<<"                      			";system("pause");
			 goto main1;
			 break;
			case 2:
			cout<<"                      			";system("pause");
			system("cls");
				cout<<"				           NOW SHOWING!					     "<<endl;
				cout<<"     \n\t\t\t\t>1<JUMANJI--------------------(P250 pesos) "<<endl;
				cout<<"     \n\t\t\t\t>2<Hello Love,GoodBye---------(200 pesos)	 "<<endl;
				cout<<"		\n\t\t\t\t>3<Joker----------------------(300 pesos)	 "<<endl;
				cout<<"		\n\t\t\t\t>4<Dora and the Lost City of Gold-(300 pesos)	 "<<endl;
				cout<<"		\n\t\t\t\t>5<Frozen 2----------------------(400 pesos)	 "<<endl;
				cout<<endl<<endl;
				
				cout<<"		Please choose a number for your ticket reservation:";
				cin>>numreserve;
				
				
				switch(numreserve){	
				case 1:
				cout<<"                      			 ";system("pause");
				cout<<endl<<endl;
				system("cls");
				name1="Jumanji";
				cout<<" 		Fill in the Details"<<endl<<endl;
				cout<<"		Enter Unique Movie Ticket Number: ";
				cin>>ticketid1;
				cout<<"		Enter your First Name:";
				cin>>person1;
				cout<<"		Enter your Last Name:";
				cin>>lastname1;
				cout<<"		Enter your Contact Number: ";
				cin>>contact1;
				cout<<"		Enter your Email Address: ";
				cin>>emails1;
				cout<<"		Enter the total seats:";
				cin>>seat1;
				cout<<"		Reserve ticket? [1-yes/any number-cancel]: ";
				cin>>reserve;
					
				if(reserve==1){
				
				ticketid1s.push_back(ticketid1);
				ticketids.push(ticketid1);
            	persons.push(person1);
            	namee.push(name1);
            	lastnamee.push(lastname1);
            	seatss.push(seat1);
            	contacts.push(contact1);
            	emails.push(emails1);
            	totalss.push(seat1*250);
            	system("cls");
            	cout<<"	Enjoy!"<<endl<<endl;
            	cout<<"___________________________________________________________"<<endl;
            	cout<<" Name: "<<person1<< " "<<lastname1<<endl;
            	cout<<" Contact Number:"<<contact1<<endl;
            	cout<<" Email Address:"<<emails1<<endl;
            	cout<<" Movie Name:"<<name1<<endl;
            	cout<<" Total Seats: "<<seat1<<endl;
            	cout<<" Costs per Ticket:250.00"<<endl;
            	cout<<" Total Amount:"<<seat1*250<<endl;
            	cout<<"_____________________________________________________________"<<endl;
            	cout<<endl<<"Tickets Reserved."<<endl;
            	system("pause");
            	goto main1;
          	}else{
           	 goto main1;
          }	
		  case 2:
		  		cout<<"                      			 ";system("pause");
				cout<<endl<<endl;
				system("cls");
				name1="Hello Love,Goodbye";
				cout<<"Enter Unique Movie Ticket Number: ";
				cin>>ticketid1;
				cout<<"Enter your First Name:";
				cin>>person1;
				cout<<"Enter your Last Name:";
				cin>>lastname1;
				cout<<"Enter the contact Number: ";
				cin>>contact1;
				cout<<"Enter your Email Address: ";
				cin>>emails1;
				cout<<"Enter the total seats:";
				cin>>seat1;
				cout<<"Reserve ticket? [1-yes/any number-cancel]: ";
				cin>>reserve;
				 if(reserve==1){
				ticketid1s.push_back(ticketid1);
				ticketids.push(ticketid1);
            	persons.push(person1);
            	namee.push(name1);
            	lastnamee.push(lastname1);
            	seatss.push(seat1);
            	contacts.push(contact1);
            	emails.push(emails1);
            	totalss.push(seat1*200);
            	system("cls");
            	cout<<"	Enjoy!"<<endl<<endl;
            	cout<<"___________________________________________________________"<<endl;
            	cout<<" Name: "<<person1<< " "<<lastname1<<endl;
            	cout<<" Contact Number:"<<contact1<<endl;
            	cout<<" Email Address:"<<emails1<<endl;
            	cout<<" Movie Name:"<<name1<<endl;
            	cout<<" Total Seats: "<<seat1<<endl;
            	cout<<" Costs per Ticket: 200.00"<<endl;
            	cout<<" Total Amount:"<<seat1*200<<endl;
            	cout<<"_____________________________________________________________"<<endl;
            	cout<<endl<<"Tickets Reserved."<<endl;
            	system("pause");
            	goto main1;
          	}else{
           	 goto main1;
          }							
	 	case 3:
	 			cout<<"                      			 ";system("pause");
				cout<<endl<<endl;
				system("cls");
				name1="Joker";
				cout<<"Enter Unique Movie Ticket Number: ";
				cin>>ticketid1;
				cout<<"Enter your First Name:";
				cin>>person1;
				cout<<"Enter your Last Name:";
				cin>>lastname1;
				cout<<"Enter the contact Number: ";
				cin>>contact1;
				cout<<"Enter your Email Address: ";
				cin>>emails1;
				cout<<"Enter the total seats:";
				cin>>seat1;
				cout<<"Reserve ticket? [1-yes/any number-cancel]: ";
				cin>>reserve;
				
				if(reserve==1){
				ticketid1s.push_back(ticketid1);
				ticketids.push(ticketid1);
            	persons.push(person1);
            	namee.push(name1);
            	lastnamee.push(lastname1);
            	seatss.push(seat1);
            	contacts.push(contact1);
            	emails.push(emails1);
            	totalss.push(seat1*300);
            		system("cls");
            	cout<<"	Enjoy!"<<endl<<endl;
            	cout<<"___________________________________________________________"<<endl;
            	cout<<" Name: "<<person1<< " "<<lastname1<<endl;
            	cout<<" Contact Number:"<<contact1<<endl;
            	cout<<" Email Address:"<<emails1<<endl;
            	cout<<" Movie Name:"<<name1<<endl;
            	cout<<" Total Seats: "<<seat1<<endl;
            	cout<<" Costs per Ticket: 300.00"<<endl;
            	cout<<" Total Amount:"<<seat1*300<<endl;
            	cout<<"_____________________________________________________________"<<endl;
            	cout<<endl<<"Tickets Reserved."<<endl;
            	system("pause");
            	goto main1;
          	}else{
           	 goto main1;
          }	
          	case 4:
          		cout<<"                      			 ";system("pause");
				cout<<endl<<endl;
				system("cls");
				name1="Dora and The Lost City of Gold";
				cout<<"Enter Unique Movie Ticket Number: ";
				cin>>ticketid1;
				cout<<"Enter your First Name:";
				cin>>person1;
				cout<<"Enter your Last Name:";
				cin>>lastname1;
				cout<<"Enter the contact Number: ";
				cin>>contact1;
				cout<<"Enter your Email Address: ";
				cin>>emails1;
				cout<<"Enter the total seats:";
				cin>>seat1;
				cout<<"Reserve ticket? [1-yes/any number-cancel]: ";
				cin>>reserve;
				
				if(reserve==1){
				ticketid1s.push_back(ticketid1);
				ticketids.push(ticketid1);
            	persons.push(person1);
            	namee.push(name1);
            	lastnamee.push(lastname1);
            	seatss.push(seat1);
            	contacts.push(contact1);
            	emails.push(emails1);
            	totalss.push(seat1*300);
            		system("cls");
            	cout<<"	Enjoy!"<<endl<<endl;
            	cout<<"___________________________________________________________"<<endl;
            	cout<<" Name: "<<person1<< " "<<lastname1<<endl;
            	cout<<" Contact Number:"<<contact1<<endl;
            	cout<<" Email Address:"<<emails1<<endl;
            	cout<<" Movie Name:"<<name1<<endl;
            	cout<<" Total Seats: "<<seat1<<endl;
            	cout<<" Costs per Ticket: 300.00"<<endl;
            	cout<<" Total Amount:"<<seat1*300<<endl;
            	cout<<"_____________________________________________________________"<<endl;
            	cout<<endl<<"Tickets Reserved."<<endl;
            	system("pause");
            	goto main1;
          	}else{
           	 goto main1;
          }
		  	case 5:
		  		cout<<"                      			 ";system("pause");
				cout<<endl<<endl;
				system("cls");
				name1="Frozen 2";
				cout<<"Enter Unique Movie Ticket Number: ";
				cin>>ticketid1;
				cout<<"Enter your Full Name:";
				cin>>person1;
				cout<<"Enter your Last Name:";
				cin>>lastname1;
				cout<<"Enter the contact Number: ";
				cin>>contact1;
				cout<<"Enter your Email Address: ";
				cin>>emails1;
				cout<<"Enter the total seats:";
				cin>>seat1;
				cout<<"Reserve ticket? [1-yes/any number-cancel]: ";
				cin>>reserve;
				
				
				
				if(reserve==1){
				ticketid1s.push_back(ticketid1);
				ticketids.push(ticketid1);
            	persons.push(person1);
            	namee.push(name1);
            	lastnamee.push(lastname1);
            	seatss.push(seat1);
            	contacts.push(contact1);
            	emails.push(emails1);
            	totalss.push(seat1*400);
            	system("cls");
            	cout<<"	Enjoy!"<<endl<<endl;
            	cout<<"___________________________________________________________"<<endl;
            	cout<<" Name: "<<person1<< " "<<lastname1<<endl;
            	cout<<" Contact Number:"<<contact1<<endl;
            	cout<<" Email Address:"<<emails1<<endl;
            	cout<<" Movie Name:"<<name1<<endl;
            	cout<<" Total Seats:"<<seat1<<endl;
            	cout<<" Costs per Ticket:400"<<endl;
            	cout<<" Total Amount:"<<seat1*400<<endl;
            	cout<<"_____________________________________________________________"<<endl;
            	cout<<endl<<"Tickets Reserved."<<endl;
            	system("pause");
            	goto main1;
          	}else{
           	 goto main1;
           	 
          }	
		  	
          default:
          	cout<<"please try again!"<<endl;
          	cout<<endl;
          	system("pause");
            goto main1;
      }
	  case 3:
	  	main2:
	  		  cout<<"                      			 ";system("pause");
			  cout<<endl<<endl;
			  system("cls");
		  	  cout<<"----------------------------------------------"<<endl;
    		  cout<<"[1] Show the First Person who Reserve."<<endl;
  			  cout<<"[2] Show the Last Person who Reserve."<<endl;
  			  cout<<"[3] View All the Movie Tickets."<<endl;
  			  cout<<"[4] Sort all ticket numbers"<<endl;
  			  cout<<"[5] Total Number of Tickets"<<endl;
  			  cout<<"[0] Exit"<<endl;
  			  cout<<"Enter the number of your choice: ";
  			  cin>>showfl;
  			  
  			  switch(showfl){
  			  	cout<<"                      			 ";system("pause");
					cout<<endl<<endl;
					system("cls");
  			  	case 1:
  			  		cout << "\n First who reserve : " << ticketid1s.front()<<endl;
            		goto main2;
  			  		break;
  			  	case 2:
  			  		 cout<<" \n Last who reserve: "<< ticketid1s.back()<<endl;
            		goto main2;
  			  		 break;
  			  	case 3:
  			  		cout << "\n The Movie Ticket Id's are: "<<endl; 
    		  		cout<<"         ";showlist(ticketid1s);
    		  		cout<<endl;
            		goto main2;
    		  		break;
    		  	case 4:
    		  	cout << "\nShow Tickets Id's in Sort': "; 
			    ticketid1s.sort(); 
			    showlist(ticketid1s);
			    goto main2;
    		  	break;
    		  	case 5:
    		  		cout << "Total Number of Tickets: " << ticketid1s.size()<<endl;
			    	goto main2; 
  			  	case 0:
  			  		system("pause");
            		goto main1;
            	
            	default:
            		cout<<"Sorry! wrong input"<<endl;
          	cout<<endl;
          	system("pause");
        	return 0;
				}
			case 4:
			
				cout<<"		Enter New Movie Code: ";
				cin>>moviecode1;
				cout<<"		Enter New Movie:";
				cin>>newmovie1;
				cout<<"		Enter the ReleaseDate(YYYY/MM/DD):";
				cin>>releasedate1;
				cout<<"		Enter Ticket Price: ";
				cin>>ticketprice1;
				cout<<"		Insert Movie? [1-yes/any number-cancel]: ";
				cin>>moviereserve;
				
				
				system("cls");
				if(moviereserve==1){
				moviecode1s.push_back(moviecode1);
				moviecodes.push(moviecode1);
				newmovies.push(newmovie1);
            	releasedates.push(releasedate1);
            	ticketprices.push(ticketprice1);
            	cout<<"________________________________________________________"<<endl;
            	cout<<" Movie Code:"<<moviecode1<<endl;
            	cout<<" Movie Name:"<<newmovie1;
            	cout<<"\n Release Date:"<<releasedate1<<endl;
            	cout<<" Ticket Price: "<<ticketprice1<<endl<<endl;
            	cout<<"________________________________________________________"<<endl;
            	cout<<endl<<"Recorded Succesfully!"<<endl;
            	system("pause");
            	goto main1;
          	}else{
           	 goto main1;
           	 
          }
		  	
          case 5:
          	cout<<"******************** View All Movies ********************"<<endl;
			 viewmovie(moviecodes,newmovies,releasedates,ticketprices);
			 system("pause");
			 goto main1;
			 break;	 
       		case 0:
       		
       		  cout<<"			Thank you for using!"<<endl;
       	 	  cout<<"			Created by: "<<endl;
			  cout<<"			Patricia Mae Namoro ---> Developer"<<endl;
			  cout<<"			Juvy De Liva---> Algorithm"<<endl;
			  cout<<"			Adrian Mores---> Documentation "<<endl;
     		  break;
     		  default:
     		  	 goto main1;
     		  	
		
	}
}
			
	
