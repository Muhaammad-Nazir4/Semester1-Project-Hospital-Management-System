#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
using namespace std;
/*PROTOTYPES OF MY HOSPITAL MANAGEMENT SYSTEM ARE ...............................................................................*/

/* MUTUALLY USED PROTOTYPES OF FUNCTIONS.........................................................................................*/
string different_users_login();
void logo();
void escape();
void thanks();
void congratulation();
void incorrect_role();
void invalid();
/*  PROTOTYPES FOR ADMIN FUNCTIONS...............................................................................................*/
string login_manu();
string menu();
void addpatient();
void viewpatient( );
void viewstaff();
void birthreport();
void deathreport();
void roomrecord();
void feedback();
void sorting();

/*  PROTOTYPES FOR PATIENT FUNCTIONS..............................................................................................*/
string menu1();
string login_manu2();
void patient_personal_detail();
void patient_medical_detail();
void view_my_detail();
void view_my_medical_detail();
void viewdoctors_details();
void recommendation(string dis);
void get_appointments(string dname , string day);
void datareader1();

/*  PROTOTYPES FOR RECEPTIONIST FUNCTIONS...............................................................................................*/
string login_manu3();
string menu2();
void receptionist_view();
void receptionist_view2();

/*GLOBLY DECLARED VARIABLES OF HOSPITAL MANAGEMENT SYSTEM ARE........................................................................*/
const int max_patient = 20;
int patient_count ;
int user_count ;
int count ;
int comment_count ;
 int start = 0;

/*ARREYS FOR MY HOSPITAL MANAGEMENT SYSTEM ARE.......................................................................................*/
string patient_name[max_patient];
string patientf_name[max_patient];
string patient_disease[max_patient];
string patient_gender[max_patient];
string patient_date[max_patient];
float  patient_age[max_patient];
int    patient_room[max_patient];
string patient_group[max_patient];
string nameA[max_patient];
string f_nameA[max_patient];
float    ageA[max_patient]; 
string genderA[max_patient];
string diseaseA[max_patient];
string blood_groupA[max_patient];
string dateA[max_patient];
string comment[max_patient]; 

// START OF FILE HANDLING............................
void datareader();
void patient_count_reader();
void user_count_reader();
void datareader2();
void comment_count_reader();
void datareader3();
void count_reader();
// END OF FILE HANDLING .............................  

//FOR COLORING......................................................................................................................
 HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
/*MAIN FUNCTIONS OF MY HOSPITAL MANAGEMENT SYSTEM IS.................................................................................*/
main(){
    
    datareader();
    patient_count_reader();
    datareader1();
    user_count_reader();
    datareader2();
    comment_count_reader();
     datareader3();
     count_reader();  
   
/* VARIABLES OF HOSPITAL MANAGEMENT SYSTEM ARE........................................................................................*/
string option1,option2,option3;
string option;
string role;


 option = different_users_login();
 
 
  while( true ){
       
     if (option == "1" )
     { 
/*TO REMOVE THE SCREEN OF PREVIOUS OPTION....................*/
      system ("cls");

        role = login_manu();

 /*START OF  ADMIN OPTIONS...........................................................................................................................*/    
    if ( role == "ADMIN" )
    {
      congratulation();
      escape();
// to remove the previous screen
     system ("cls");
      option1= menu();
      //  VALIDATION................................................
       while( option1 != "1" && option1 != "2" && option1 != "3" && option1 != "4" && option1 != "5" && option1 != "6" 
             && option1 != "7" && option1 != "8" && option1 != "9" ){
      system ("cls");
       logo();
      cout << "YOU SELECTED WRONG OPTION." << endl;
      escape();
       system ("cls");
      option1 = menu(); 
      if ( option1 == "1" || option1 == "2" || option1 == "3" || option1 == "4" || option1 == "5" || option1 == "6" 
             || option1 == "7" || option1 == "8" || option1 == "9" )
      {
      continue;
      } 
       break;  
      } 
      // END OF VALIDATION................................................ 
      //USE OF WHILE LOOP;
       while (option1 == "1" || option1 == "2" || option1 == "3" || option1 == "4" || option1 == "5" || option1 == "6" 
             || option1 == "7" || option1 == "8" || option1 == "9" ){
     
     
      if (option1 == "1")
      {
      system ("cls");
      addpatient();
      option1= menu();         
      }
              
      if (option1 == "2")
      {
      system("cls");
      viewpatient();
      system("cls"); 
      option1= menu();
      }

      if (option1 == "3")
      {
      system("cls"); 
      sorting();
      system("cls"); 
      option1= menu();
      }
  
      if (option1 == "4")
      {
       system("cls");
       viewstaff();   
       system("cls");
       option1= menu( );
 
      }   
      if (option1 == "5")
      {
       system ("cls");
       birthreport();
       system ("cls");
       option1= menu( );
      }
      
      if (option1 == "6")
      {
       system ("cls");
       deathreport();
       system ("cls");
       option1= menu( );
      }

      if (option1 == "7")
      {
       system ("cls");
       roomrecord();
       system ("cls");
       option1= menu( );
      }

     if (option1 == "8")
      { 
       system ("cls");
       cout << "********************************************" << endl;
       for(int i = 0 ; i <= comment_count ; i++ ){
       cout << "\t\t" << comment[i] << "\t\t"  << endl;
       }
      cout <<  "********************************************" << endl;
       escape();
       system ("cls");
        option1= menu( );
      }
      if (option1 == "9")
      {
      system ("cls");
       thanks();
       escape();
       system ("cls");  
       option = different_users_login();
       break;
      }
      }
      }
      // IF USER DOES NOT ENTERED CORRECT ROLE
      else if(role!="ADMIN"){
       incorrect_role();
       escape();
       system ("cls");  
       option = different_users_login();
      }
 
      }
      /*END OF  ADMIN OPTIONS...........................................................................................................................*/    
      /*START OF  PATIENT OPTIONS...........................................................................................................................*/    
     
      if (option == "2" )
      {
           system ("cls");     
        
       role = login_manu2();
      if (role == "PATIENT")
      {
       congratulation();  
       escape();

      system ("cls"); 
      //VALIDATION................................................
      option2= menu1( );
       while( option2 != "1" && option2 != "2" && option2 != "3" && option2 != "4" && option2 != "5" && option2 != "6" 
             && option2 != "7" && option2 != "8" && option2 != "9" ){
      system ("cls");
       logo();
      cout << "YOU SELECTED WRONG OPTION." << endl;
      escape();
       system ("cls");
      option2 = menu1(); 
      if ( option2 == "1" || option2 == "2" || option2 == "3" || option2 == "4" || option2 == "5" || option2 == "6" 
             || option2 == "7" || option2 == "8" || option2 == "9" )
      {
      continue;
      } 
       break;  
      }

      // END OF VALIDATION................................................
      while (option2 == "1" || option2 == "2" || option2 == "3" || option2 == "4" || option2 == "5" || option2 == "6" 
             || option2 == "7" || option2 == "8" || option2 == "9" ){

      if ( option2 == "1" )
      {
      system ("cls");
      patient_personal_detail();
      system("cls");
      option2= menu1( );
      }
       
       if (option2 == "2" )
       {
      system ("cls");
      view_my_detail();
      system ("cls");
      option2= menu1( );
      }

      
      if ( option2 == "3" )
      {
      system ("cls");
      patient_medical_detail();
      system ("cls");
      option2= menu1( );
      } 

      if (option2 == "4" )
     {
      system ("cls");
      view_my_medical_detail();
      system ("cls"); 
      option2= menu1(); 
     }

       if ( option2 == "5" )
      {
      system ("cls");
      viewdoctors_details();
      system ("cls");
      option2= menu1( );  
      }

       if ( option2 == "6" )
      {
      system ("cls");
      logo();
      cout << "Main Menu> User> see recommendation ." << endl;
      cout << "   " << endl;
      string disease;
      cout << " Tell about your disease(write any one from fever,flue, headache,viral infections,stomach,delivery,eye,nose,throat,ear)";
      cin  >> disease;
      recommendation( disease) ;
      system ("cls");
      option2= menu1( );  
       }
      
      if ( option2 == "7" )
      {
      system ("cls");
      logo();
      cout << "Main Menu> User> Appointments ." << endl;
      cout << "   " << endl;
      string doc_name;
      string c_day;
      cout << "Whom do you want to consult(doctor name)? (write dooctor name as Dr.Ali, Dr.Hammad, Dr.Ayesha, Dr.Hania, Dr.Ashraf )" << endl;
      cin >> doc_name;
      while (doc_name != "Dr.Ali" && doc_name != "Dr.Hammad" && doc_name != "Dr.Ayesha" && doc_name != "Dr.Hania" 
      && doc_name != "Dr.Ashraf" ){
            cout << "YOU ENTERED WRONG INPUT." << endl;
            cout << "Whom do you want to consult(doctor name)? (write dooctor name as Dr.Ali, Dr.Hammad, Dr.Ayesha, Dr.Hania, Dr.Ashraf )" << endl;
      cin >> doc_name;
      }

      cout << "which day you want to consult?" << endl;
      cin >> c_day;
      while(c_day != "sunday"&& c_day != "monday"&& c_day != "tuesday"&& c_day != "wednesday"&& c_day != "friday"&& 
      c_day != "thursday" ){
         
         cout << "YOU ENTERED WRONG INPUT." << endl;
         cout << "which day you want to consult?" << endl;
         cin >> c_day;   
      }
      get_appointments( doc_name , c_day); 
      system ("cls");
      option2= menu1( );
      } 
   
      if( option2 == "8" )
      {
        system ("cls");
       feedback();
       system ("cls");
       option2= menu1( );
      }

      if( option2 == "9" )
      {
      system ("cls");
      thanks();
      escape();
      system ("cls");          
       option = different_users_login();
       break;
      }

      }  
       }
    else{
       incorrect_role();
       escape();
       system ("cls");   
       option = different_users_login();   
        } 
      }
  /*END  OF  PATIENT OPTIONS...........................................................................................................................*/    
    
    /*START OF RECEPTIONIST OPTIONS...........................................................................................................................*/ 
     
      if (option == "3" )
      {
           system ("cls");     
        
       role = login_manu3();
    if (role == "RECEPTIONIST")
      {
       congratulation();  
       escape();

       system ("cls"); 
      option3= menu2( );
      //  VALIDATION................................................
       while( option3 != "1" && option3 != "2" && option3 != "3" ){
      system ("cls");
      cout << "YOU SELECTED WRONG OPTION." << endl;
      escape();
       system ("cls");
      option3 = menu2(); 
      if ( option3 == "1" || option3 == "2" || option3 == "3" )
      {
      continue;
      } 
       break;  
      }
      // END OF VALIDATION................................................  
      while (option3 == "1" || option3 == "2" || option3 == "3" ){
      if (option3 == "1"){
      system("cls");
      receptionist_view();
      system("cls");
      option3= menu2( );
      }

       if (option3 == "2"){
      system("cls");
      receptionist_view2();
      system("cls");
      option3= menu2( ); 
      }

       if (option3 == "3"){
           system ("cls");
       thanks();
       escape();
       system ("cls");  
       option = different_users_login();
       break;  
      }
      }
      }
      else if(role!="RECEPTIONIST"){
       incorrect_role();
       escape();
       system ("cls");  
       option = different_users_login();
      }
      }

     /*END  OF RECEPTIONIST OPTIONS...........................................................................................................................*/ 

     /*START OF EXIT OPTION...........................................................................................................................*/     
     
     if (option == "4"){
      thanks();
       break;      
      }
      /*END OF EXIT OPTION...........................................................................................................................*/ 
      //IN CASE IF USER ENTERED OPTION OTHER THAN 1,2,3,4.
    while( option != "1" && option != "2" && option != "3" && option != "4" ){
      
      
      cout << "YOU SELECTED WRONG OPTION." << endl;
      escape();
       system ("cls");
      option = different_users_login(); 
      if (option == "1" || option == "2" || option == "3" || option == "4")
      {
      continue;
      } 
       break;  
      }

} 
}
  
  
/*DEFINITIONS OF FUNCTIONS FOR MY HOSPITAL MANAGEMENT SYSTEM ARE.....................................................................*/

/* DEFINITIONS OF MUTUALLY USED  FUNCTIONS...........................................................................................*/
string different_users_login(){
logo();
string choice;
  cout << "Welcome to Hospital Management System." << endl;
  cout << "____________________________________________" << endl;

 cout << "Login>" << endl;
 cout << "Select one of the following." << endl;
 cout << "1. Admin" << endl;
 cout << "2. User " << endl;
 cout << "3. Receptionist " << endl;
 cout << "4. Exit " << endl;
 cout << "Your option........." << endl;
 cin  >> choice;
 return choice;
}

void logo(){
   SetConsoleTextAttribute( h , 2);
   //THIS LOGO WILL BE CLEAR ON  COMMAND PROMPT................

cout <<"      /\\  \\        / \\  \\         /\\__\\    "  << endl;
cout <<"      \\:\\  \\       |::\\  \\       /:/ _/_    "<< endl;
cout <<"       \\:\\  \\      |:|:\\  \\     /:/ /\\  \\   "<< endl;
cout <<"   ___ /::\\  \\   __|:|\\:\\  \\   /:/ /::\\  \\  "<< endl;
cout <<"  /\\  /:/\\:\\__\\ /::::|_\\:\\__\\ /:/_/:/\\:\\__\\ "<< endl;
cout <<"  \\:\\/:/  \\/__/ \\:\\~~\\  \\/__/ \\:\\/:/ /:/  / "<< endl;
cout <<"   \\::/__/       \\:\\  \\        \\::/ /:/  /  "<< endl;
cout <<"    \\:\\  \\        \\:\\  \\        \\/_/:/  /   "<< endl;
cout <<"     \\:\\__\\        \\:\\__\\         /:/  /    "<< endl;
cout <<"      \\/__/         \\/__/         \\/__/      "<< endl;

  cout << "****************************************************" << endl;
  cout << "*          HOSPITAL MANAGEMENT SYSTEM              *" << endl;
  cout << "****************************************************" << endl; 

SetConsoleTextAttribute( h , 11 );  
}

void escape(){
       cout << "*****************************************************" << endl;
       cout << "*             PRESS ANY KEY TO CONTINUE             *" << endl;
        cout <<"*****************************************************" << endl;
      getch();
}

void thanks(){
  cout << "****************************************************" << endl;
  cout << "*   THANKS FOR USING HOSPITAL MANAGEMENT SYSTEM    *" << endl;
  cout << "****************************************************" << endl;     
}

void congratulation(){
  cout << "********************************************************************" << endl;
  cout << "-------------CONGRATULATIONS YOUR PASSWORD IS CORRECT---------------" << endl;
  cout << "--------------WELCOME TO HOSPITAL MANAGEMENT SYSTEM-----------------" << endl; 
  cout << "********************************************************************" << endl;

}

void incorrect_role(){
 SetConsoleTextAttribute( h , 4);
  cout << "********************************************************************" << endl;
  cout << "-------------------YOU DO NOT ENTER CORRECT ROLE--------------------" << endl;
  cout << "---------------------PLEASE ENTER CORRECT ROLE----------------------" << endl;  
  cout << "********************************************************************" << endl;
 SetConsoleTextAttribute( h , 11);
  }

void invalid(){
       SetConsoleTextAttribute( h , 4);
       cout << "********************************************************************" << endl;
       cout << "--------------------INVALID PASSWORD OR USERNAME--------------------" << endl;
       cout << "--------------PLEASE ENTER VALID PASSWORD OR USERNAME---------------" << endl;
       cout << "********************************************************************" << endl;
        SetConsoleTextAttribute( h , 11);
}


  void datareader2(){
      int number = 0 ;
      string line ;
      fstream file4 ;
      file4.open("feedback.txt" , ios :: in ) ;
      while(!file4.eof()){
           getline(file4 , line) ;
              comment[number]  = line ;
                  number++ ;
            } 
             file4.close() ;
      }
       void comment_count_reader(){
             fstream file ;
             file.open ("comment_count.txt" , ios :: in ) ;
             file >> comment_count ;
             file.close();
       }
/* DEFINITIONS OF ADMIN  FUNCTIONS..................................................................................................*/

string login_manu(){
      string admin;
      string password;
      string role;
      cout << "Login details   " << endl;
      logo();
      cout << "Login>Login details." << endl;
      cout << "____________________________________________" << endl; 
      cout << "Enter username:";
      cin >> admin;
      cout << "Enter your password:";
      cin  >> password;
      cout << "Enter your role:";
      cin >> role;
       if ( admin == "nazir" && password == "123" ){
             return role;
       }
        else{
      invalid();
      escape();
      system ("cls");
      cout << "Login details   " << endl;
      logo();
      cout << "Login>Login details." << endl;
      cout << "____________________________________________" << endl;
      cout << "Enter username:";
      cin >> admin;
      cout << "Enter your password:";
      cin  >> password;
      cout << "Enter your role:";
      cin >> role;
      }
}

string menu(){
      string choice1 ;
      cout << "Main Menu for Admin" << endl;
     logo();
      cout << "Main Menu>Admin>" << endl;
      cout << "Select one of the following............." << endl;
      cout << "1. Add new patient" << endl;
      cout << "2. View record of all patients" << endl;
      cout << "3. View record of all patients in sorted order" << endl;
      cout << "4. Staff record" << endl;
      cout << "5. Birth report" << endl;
      cout << "6. Death report" << endl;
      cout << "7. Room availability" << endl;
      cout << "8. See feedback of users." << endl;
      cout << "9. Exit" << endl;
      cout << " your option......." << endl;
      cin >> choice1;
      return choice1;
}

void addpatient(){
      
      logo();
      patient_count ++;
      fstream file ;
      file.open ("patient_count.txt" , ios ::out) ;
      file << patient_count ;
      file <<endl ;
      file.close() ;

       cout << "Main Menu>Admin>Add patient" << endl;
      cout << "Enter patient name..............." << endl;
      cin  >>patient_name[patient_count];
      cout << "Enter patient father name..............." << endl;
      cin  >>patientf_name[patient_count];
      cout << "Enter disease type...............";
      cin  >> patient_disease[patient_count];

       //USE OF VALIDATIONS
        cout << "Enter  patient blood group..............." << endl;
        cin  >> patient_group[patient_count];
      while( patient_group[patient_count] != "O+" && patient_group[patient_count] != "O-" && patient_group[patient_count] != "A+" && patient_group[patient_count] != "A-"
      && patient_group[patient_count] != "B+" && patient_group[patient_count] != "B-" && patient_group[patient_count] != "AB+" && patient_group[patient_count] != "AB-"){  
      cout << "Enter  patient blood group..............." << endl;
        cin  >> patient_group[patient_count];
      }

       cout << "Enter  patient gender..............." << endl;
       cin  >> patient_gender[patient_count];
      while( patient_gender[patient_count] !="male" && patient_gender[patient_count] != "MALE" &&
              patient_gender[patient_count] != "FEMALE" && patient_gender[patient_count] != "female" ){ 
      cout << "Enter  patient gender..............." << endl;
      cin  >> patient_gender[patient_count];
       }

      cout << "Enter  patient age..............." << endl;
      cin  >> patient_age[patient_count];
       while( patient_age[patient_count] <1   || patient_age[patient_count] > 130){ 
      cout << "Enter  patient age..............." << endl;
      cin  >> patient_age[patient_count];
      }
      cout << "Enter  alloted room no(we can put 0 if there is no alloted room.)..............." << endl;
      cin  >> patient_room[patient_count];
       while( patient_room[patient_count] < 0 || patient_room[patient_count] >9){ 

      cout << "Enter  alloted room no(we can put 0 if there is no alloted room.)..............." << endl;
      cin  >> patient_room[patient_count];
       }

      
       cout << "Enter  date of admit..............." << endl;
       cin  >> patient_date[patient_count];
      
      // file handling.
      fstream file1;
      file1.open ( "patientdata.txt" , ios :: app ) ;
      file1 << patient_name[patient_count] << "," ;
      file1 << patientf_name[patient_count] << "," ;
      file1 << patient_disease[patient_count] << "," ;
      file1 << patient_group[patient_count] << "," ;
      file1 << patient_gender[patient_count] << "," ;
      file1 << patient_age[patient_count] << "," ;
      file1 << patient_room[patient_count] << "," ;
      file1 << patient_date[patient_count] ;
      file1 << endl;
      file1.close ();


      
       escape();
       system ("cls");
      
}
void datareader(){
      int number = 0 ;
      string line ;
      fstream file1 ;
      file1.open("patientdata.txt" , ios :: in ) ;
      while(!file1.eof()){
            getline(file1 , line) ;
            string  temp = "" ;
            int commaas = 1;
            for (int i = 0 ; line[i] != '\0' ; i++){
                  if (line[i] == ','){
                        commaas ++ ;
                        continue ;
                  }
                  if (commaas == 1){
                   patient_name[number] =  patient_name[number] + line[i] ;
                  }
                  if (commaas == 2){
                   patientf_name[number] =  patientf_name[number] + line[i] ;
                  }
                  if (commaas == 3){
                   patient_disease[number] =  patient_disease[number] + line[i] ;
                  }
                  if (commaas == 4){
                   patient_group[number] =  patient_group[number] + line[i] ;
                  }
                  if (commaas == 5){
                   patient_gender[number] =  patient_gender[number] + line[i] ;
                  }
                  if (commaas == 6){
                        temp = temp + line[i] ;
                   patient_age[number] = stoi(temp);
                  }
                  if (commaas == 7){
                        temp = temp + line[i] ;
                   patient_room[number] =  stoi(temp) ;
                  }
                   if (commaas == 8){
                  patient_date[number] = patient_date[number] + line[i] ;
                  }
                 
            }
                number ++ ;
      }

                      file1.close() ;
}

       void patient_count_reader(){
             fstream file4 ;
             file4.open ("patient_count.txt" , ios :: in ) ;
             file4 >> patient_count ;
             file4.close();

       }
void viewpatient( ){
     logo();
      cout << "Main Menu>Admin>Patients records" << endl;
      cout << "  " << endl;

      cout << "name" << "\t\t" << "father name" << "\t" << "disease"<< "\t\t" << "age"  << "\t\t" << "blood group" << "\t\t" << "gender" << "\t\t\t" << "date of admit"<< "\t\t" << "room" << endl;
      cout << "   " << endl;
      for (int j = 0 ; j <=patient_count ; j++ ){
            
      cout << patient_name[j]  << "\t\t" << patientf_name[j] << "\t\t" <<patient_disease[j] << "\t\t" <<  patient_age[j] << "\t\t\t" << patient_group[j] << "\t\t" << patient_gender[j] << "\t\t" << patient_date[j]<< "\t\t" <<  patient_room[j]<< endl;
       
      }
      cout << endl;
     
      escape();
      system ("cls");
}

void viewstaff(){
logo();
      cout << "Main Menu>Admin>Staff record" << endl;
      cout << "--------------------------------------------------DOCTOR'S RECORD----------------------------------------------------" << endl;
      cout << "   " << endl;

      cout  << "Name" << "\t\t" << "Age" << "\t\t" << "CNIC" << "\t\t" << "Specialist" << "\t\t" << "Phone no" << endl;
      cout << "   " << endl;
      cout  << "Dr.Ali" << "\t\t" << "40" << "\t" << "3310366032355" << " \t" << "flue,fever,viral diseases" << " \t" << "03106550274" << endl;
      cout  << "Dr.Hammad" << "\t" << "30" << "\t" << "3310366672356" << "\t\t" << "surgeon" << "\t\t\t" << "03106550273" << endl;
      cout  << "Dr.Ayesha" << "\t" << "29" << "\t" << "3310034567890" << "\t\t" << "eye specialist" << "\t\t" << "03230870971" << endl;
      cout  << "Dr.Hania" << "\t" << "31" << "\t" << "3310234567895" << "\t\t" << "ENT specialist" << "\t\t" << "03230870970" << endl;
      cout  << "Dr.Hania"  << "\t" << "41" << "\t" << "3310892847848" << "\t\t" << "in emergency" << "\t\t" << "03245678999" << endl;

      cout << "   " << endl;
      cout << "--------------------------------------------------NURSE'S RECORD----------------------------------------------------" << endl;                                            
      cout << "   " << endl;
      cout << "Name" << "\t\t" << "Phone no"    << "\t\t" << "Name"  << "\t\t" << "Phone no" << endl;
      cout << "   " << endl;
      cout << "Hina" << "\t\t" << "03123456782" << "\t\t" << "Maria" << "\t\t" << "03245678998" << endl;
      cout << "Saba" << "\t\t" << "03248978678" << "\t\t" << "Sonia" << "\t\t" << "03234567889" << endl;
        
      cout << "   " << endl;
      cout << "--------------------------------------------------OTHER STAFF RECORD----------------------------------------------------" << endl;  
      cout << "   " << endl;                 
      cout << "Name" << "\t\t" << "\t\t" <<  "As" << endl; 
      cout << "   " << endl;
      cout << "Ali Ahmad" << "\t\t" << "\t" <<  "receptionist" << endl; 
      cout << "Saeed" << "\t\t" << "\t\t" <<  "sweeper" << endl; 
      cout << "Nasir" << "\t\t" << "\t\t" <<  "sweeper" << endl; 
      cout << "Rasheed" << "\t\t" << "\t\t" <<  "security guard" << endl;
      escape();
}

void birthreport(){
     logo();
      cout << "Main Menu>Admin>Birth report" << endl;
       cout << "   " << endl;
   
        cout  << "Gender of Baby" << " " << "Condition" << "\t " << "Father Name" << " \t" << "Mother Name" << "\t " << "Phone no" << endl;
         cout << "   " << endl;
        
        cout  << "Boy" << "\t\t" << "normal" << "\t\t" << "Sufiyan" << "\t\t" << "Madiha" << "\t\t" << "03246667789" << endl;
        cout  << "Girl" << "\t\t" << "normal" << "\t\t" << "Ashraf" << "\t\t" << "Mahim" << "\t\t" << "03124567890 " << endl;
        cout  << "Boy" << "\t\t" << "normal" << "\t\t" << "Faisal" << "\t\t" << "Aliza" << "\t\t" << "03144567899" << endl;
        cout  << "Girl" << "\t\t" << "normal" << "\t\t" << "Rehan" << "\t\t" << "Nasira" << "\t\t" << "03245678909" << endl;
        cout  << "Girl" << "\t\t" << "normal" << "\t\t" << "Ahmad" << "\t\t" << "Adan" << "\t\t" << "03064264748" << endl;
       
        
      escape();

}
void deathreport(){
     logo();
      cout << "Main Menu>Admin>Death report" << endl;
   
        cout << "   " << endl;
        cout  << "Death person" << "\t\t\t " << "Father Name" << " \t" << "Mother Name" << "\t " << "Phone no" << endl;
        cout << "   " << endl;
        
        cout  << "Boy" << "\t\t"  << "\t\t" << "Sufiyan" << "\t\t" << "Madiha" << "\t\t" << "03246667789" << endl;
        cout  << "Girl" << "\t\t" << "\t\t" << "Ashraf" << "\t\t" << "Mahim" << "\t\t" << "03124567890 " << endl;
        cout  << "Boy" << "\t\t"  << "\t\t" << "Faisal" << "\t\t" << "Aliza" << "\t\t" << "03144567899" << endl;
        cout  << "Girl" << "\t\t" << "\t\t" << "Rehan" << "\t\t" << "Nasira" << "\t\t" << "03245678909" << endl;
        cout  << "Girl" << "\t\t" << "\t\t" << "Ahmad" << "\t\t" << "Adan" << "\t\t" << "03064264748" << endl;
        
         
       escape();
      
}

void roomrecord(){
    logo();
      cout << "Main Menu>Admin>Room record" << endl;
       cout << "   " << endl;
      cout << "Room no"  << "\t\t\t\t" << "For"               << endl;
       cout << "   " << endl;

      cout << " Room9" << "\t\t\t" << "Admin"             << endl;
      cout << " Room10" << "\t\t\t" << "Dr. Hammad"        << endl;
      cout << " Room11" << "\t\t\t" << "Dr. Hania"         << endl;
      cout << " Room12" << "\t\t\t" << "Dr. Ayesha"        << endl;
      cout << " Room13" << "\t\t\t" << "Dr. Ali"           << endl;
      cout << " Room14" << "\t\t\t" << "Dr. Ashraf"        << endl;
      cout << " Room15" << "\t\t\t" << "operation Theater" << endl;
      cout << " Ward1" << "\t\t\t" << "Patients"          << endl;
      cout << " Ward2" << "\t\t\t" << "Patients"          << endl;
      cout << " Ward" << "\t\t\t" << "Patients"        << endl;
      cout << "      " << endl;
      cout << " ROOM 1 TO 8 ARE FOR PATIENT'S ALLOTEMENT. " << endl;
       escape();   
}



/* DEFINITIONS OF PATIENT  FUNCTIONS................................................................................................*/

string login_manu2(){
      string user;
      string pass;
      string role;
      cout << "Login details   " << endl;
      logo();
      cout << "Login>Login details." << endl;
      cout << "____________________________________________" << endl;
      cout << "Enter username:";
      cin >> user;
      cout << "Enter your password:";
      cin  >> pass;
      cout << "Enter your role:";
      cin >> role;
        if ( user == "ali" && pass == "321" ){
             return role;
       }
        else{
       invalid();
       escape();
      system ("cls");
      cout << "Login details   " << endl;
      logo();
      cout << "Login>Login details." << endl;
      cout << "____________________________________________" << endl;
      cout << "Enter username:";
      cin >> user;
      cout << "Enter your password:";
      cin  >> pass;
       cout << "Enter your role:";
       cin >> role;
      }  
}

string menu1(){
string choice2 ;
   cout << "Main Menu for User " << endl;
   
      logo();
      cout << "Main Menu>User.>" << endl;
       cout << "   " << endl;
      cout << "Select one of the following." << endl;
      cout << "1. Edit your personal details" << endl;
      cout << "2. View your personal details"  << endl;
      cout << "3. Edit your medical history" << endl;
      cout << "4. View your medical history" << endl;
      cout << "5. See Available doctors" << endl;
      cout << "6. See recommendation" << endl;
      cout << "7. Taking appointments" << endl;
      cout << "8. Give feedback" << endl;
       cout <<"9. Exit" << endl;
      cout << "Your options................" << endl; 
      cin  >> choice2;
       return choice2;
}



void patient_personal_detail(){
       user_count++ ;
      fstream file ;
      file.open ("user_count.txt" , ios ::out) ;
      file << user_count ;
      file <<endl ;
      file.close() ;
       logo();
      cout << "Main Menu> User> Personal details ." << endl;
      cout << "   " << endl;
      cout << "Enter your name.........................." << endl;
      cin  >> nameA[user_count];
      cout << "Enter your father name..................." << endl;
      cin  >> f_nameA[user_count];
      cout << "Enter your gender........................." << endl;
      cin  >> genderA[user_count];
      while( genderA[user_count] !="male" && genderA[user_count] != "MALE" &&
              genderA[user_count] != "FEMALE" && genderA[user_count] != "female" ){ 
      cout << "Enter  patient gender..............." << endl;
      cin  >> genderA[user_count];
       }

       fstream  file2;
       file2.open("personaldata.txt" , ios :: app) ;
       file2 <<  nameA[user_count] << " , " ;
       file2 <<  f_nameA[user_count] << " , " ;
       file2 <<  genderA[user_count] ;
       file2 <<  endl;
       file2.close();

      
      escape();  
}


void view_my_detail(){
       logo();
       
      cout << "Main Menu> User> View personal details history ." << endl;
      cout << "   " << endl; 
      cout << "name" << "\t\t\t" << "father name"  <<  "\t\t" << "gender" << endl;
      cout << "   " << endl;
      for (int i = 0 ; i <= user_count  ; i++){
cout << nameA[i]  << "\t\t" << "           " << f_nameA[i]  << "\t\t" << genderA[i] << endl;
      }
      
      escape();
     
}






void patient_medical_detail(){
       count ++;
      fstream file ;
      file.open ("count.txt" , ios ::out) ;
      file << count ;
      file <<endl ;
      file.close() ;
      
       logo();
      cout << "Main Menu> User> medical history ." << endl;
      cout << "   " << endl;
      cout << "Enter your disease type................................";
      cin  >> diseaseA[count];
      cout << "Enter your blood group.................................";
      cin  >> blood_groupA[count];

       while( blood_groupA[count] != "O+" && blood_groupA[count] != "O-" && blood_groupA[count] != "A+" && blood_groupA[count] != "A-"
         && blood_groupA[count] != "B+" && blood_groupA[count] != "B-" && blood_groupA[count] != "AB+" && blood_groupA[count] != "AB-"){  
      cout << "Enter  patient blood group..............." << endl;
        cin  >> blood_groupA[count];
      }
      cout << "Enter date of previous appointment(if dont then press '0').....................";
      cin  >> dateA[count];

      fstream  file3;
       file3.open("medicaldata.txt" , ios :: app) ;
       file3 <<  diseaseA[count] << " , " ;
       file3 <<  blood_groupA[count] << " , " ;
       file3 <<  dateA[count]  ;
       file3 <<  endl;
       file3.close(); 
     
      escape();    

}


void view_my_medical_detail(){
      logo();  
     cout << "Main Menu>Admin>view_my_medical_ records" << endl;
     cout << "  " << endl;
     cout <<  "disease"<< "\t\t"  << "blood group" << "\t" << "date of admit" << endl;
     cout << "   " << endl;
     for (int i = 0 ; i <= count ; i++){
     cout  << diseaseA[i] << "\t\t" << blood_groupA[i]  << "\t\t" << dateA[i] << endl;
     }
     escape();
}
     

     void viewdoctors_details(){
       logo();
      cout << "Main Menu> User> Available doctors ." << endl;
      cout << "   " << endl;
      cout << "Name of Doctors " << "\t" << "Specialist" << "\t\t\t" << "Timing"  << endl;
      cout << "   " << endl;
      cout << "Dr. Hammad" << "\t\t" << "surgeon" << "\t\t\t\t" << "12pm__8pm"  << endl;
      cout << "Dr. Hania" << "\t\t" << "ENT specialist" << "\t\t\t" << "9am__1pm"  << endl;
      cout << "Dr. Ali" << "\t\t" << "fever, flue and viral infections" << "\t" << "9am__1pm, 3pm-6pm"  << endl;
      cout << "Dr. Ayesha" << "\t\t" << "eye specialist" << "\t\t\t" << "9am__1pm"  << endl;
      cout << "Dr. Ashraf" << "\t\t" << "in emergency" << "\t\t\t" << "9pm__4am"  << endl;
       escape();
     }

void recommendation(string dis){
 if (dis == "fever" || dis == "flue" ||  dis == "headache" || dis == "viral  infections"|| dis == "stomach"  )
       {
             cout <<"you are recommended to go to Dr. Ali in room 5" << endl;
       }
       else if (dis == "delivery"  )
       {
             cout <<"you are recommended to go to Dr. Ashraf  in room 7 or Dr.Hammad in room 2." << endl;
       }
       else if (dis == "eye"  )
       {
             cout <<"you are recommended to go to Dr. Ayesha  in room 4 ." << endl;
       }
       else if (dis == "ear" || dis == "nose" || dis == "throat" )
       {
             cout <<"you are recommended to go to Dr. Ayesha  in room 3 ." << endl;
       }
       escape();
}
       //FOR TAKING APPOINTMENTS
void get_appointments(string dname , string day){
      string agree;
if ( dname == "Dr.Ali" && day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday"  ) 
            {
             cout << "Dr.Ali is specific for fever, flue and viral infections." << endl;
             cout << "Dr.Ali is free  , so you can get appointment . " << endl;
             
             cout << "Dr.Ali's charges will be 1000 for only checking. Are you sure you want to get appointment? (write 'yes' if you agree to get appointment) " << endl;
             cin  >> agree;

             if ( agree == "yes" ) 
             {
                   cout << "your appointment with Dr.Ali is confirmed on " << day << "\t" << "during the hour as described in dooctors menu"  << endl;
             }
             else 
             {
                   cout << "you can't get appointmment." << endl;
             }
}

            else if (dname == "Dr.Ali" && day == "sunday") 
            {
             cout << "Dr.Ali is not present on sunday in hospital.You cannot get appointment" << endl;
            } 


else if ( dname == "Dr.Ayesha" && day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday"   )
            {
             cout << "Dr.Ayesha is specific for eye related problems" << endl;
             cout << "Dr.Ayesha  is free  , so you can get appointment . " << endl;
             string agree;
             cout << "Dr.Ayesha's charges will be 2000 for only checking. Are you sure you want to get appointment? (write 'yes' if you agree to get appointment) " << endl;
             cin  >> agree;

             if ( agree == "yes" )
              {
                   cout << "your appointment with Dr.Ayesha is confirmed on " << day << "\t" << "during the hour as described in doctors menu"  << endl;
             }

               else
                {
                   cout << "you can't get appointmment." << endl;
             }

 }

else if (dname == "Dr.Ayesha" && day == "sunday" ||   day == "saturday"  || day == "friday" )
            {
             cout << "Dr.Ayesha is not present on friday , saturday and sunday in hospital.You cannot get appointment." << endl;
            } 

      
 else if ( dname == "Dr.Hania" && day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday"  || day == "friday"  )
            {
             cout << "Dr.Hania is specific for ENT related problems" << endl;
             cout << "Dr.Hania  is free  , so you can get appointment . " << endl;
             string agree;
             cout << "Dr.Hania's charges will be 2000 for only checking. Are you sure you want to get appointment? (write 'yes' if you agree to get appointment) " << endl;
             cin  >> agree;

             if ( agree == "yes" ) 
             {
                   cout << "your appointment with Dr.Hania is confirmed on " << day << "\t" << "during the hour as described in doctors menu"  << endl;
             }
             
             else 
             {
                   cout << "you can't get appointmment." << endl;
             }
}
       
 else if (dname == "Dr.Hania" && day == "sunday" ||   day == "saturday"   ) 
            {
             cout << "Dr.Hania is not present on  saturday and sunday in hospital.You cannot get appointment." << endl;
} 
      
       
 else if ( dname == "Dr.Hammad" && day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday"  || day == "friday"  )
            {
             cout << "Dr.Hammad is surgeon ,  specific for delivery . " << endl;
             cout << " you can get appointment . " << endl;
             string agree;
             cout << "Dr.Hammad's charges will be 40000 for delivery. Are you sure you want to get appointment? (write 'yes' if you agree to get appointment) " << endl;
             cin  >> agree;
             if ( agree == "yes" ) 
             {
                   cout << "your appointment with Dr.Hammad is confirmed on " << day << "during the hour as described in doctors menu"  << endl;
             }
             else {
                   cout << "you can't get appointmment." << endl;
             }
}

else if (dname == "Dr.Hammad" && day == "sunday" ||   day == "saturday"   )
            {
             cout << "Dr.Hammad is not present on  saturday and sunday in hospital but in replacement of Dr. Hammad , Dr.Ashraf is present for delivery cases." << endl;
             cout << "Are you want to consult with Dr.Ashraf?(press 'y' for confirming)" << endl;
             char agree1;
             cin >> agree1;

             if (agree1 == 'y')
             {
                  cout << "your appointment with Dr.Ashraf is confirmed on " << day << "\t" << "during the hour as described in doctors menu"  << endl;
             }

             else 
             {
                   cout << "you can't get appointmment." << endl;
             }
} 

else if ( dname == "Dr.Ashraf" &&  day == "tuesday" || day == "wednesday" || day == "thursday"  || day == "friday" || day == "sunday" ||   day == "saturday" )
            {
             cout << "Dr.Ashraf is specific for delivery" << endl;
             cout << "Dr.Ashraf  is free  , so you can get appointment . " << endl;
             string agree;
             cout << "Dr.Ashraf's charges will be 40000 for delivery. Are you sure you want to get appointment? (write 'yes' if you agree to get appointment) " << endl;
             cin  >> agree;

             if ( agree == "yes" )
              {
                   cout << "your appointment with Dr.Ashraf is confirmed on " << day << "\t" << "during the hour as described in doctors menu"  << endl;
             }
             else 
             {
                   cout << "you can't get appointmment." << endl;
             }
}

else if (dname == "Dr.Ashraf" && day == "monday"   ) 
            {
             cout << "Dr.Ashraf is not present on  monday in hospital.You cannot get appointment." << endl;
} 
      
             escape();
}

void feedback(){
       comment_count++ ;
        fstream file ;
      file.open ("comment_count.txt" , ios ::out) ;
      file << comment_count ;
      file <<endl ;
      file.close() ;
      logo();
       cout << "Main Menu> User> feedback ." << endl;
       cout << "   " << endl;
       cout << "May Allah bless you with good health.  (Ameen)"  << endl; 
       cout << "_________________________________________________________" << endl;
       cout << "Give feedback about hospital management system..........." << endl;
       cout << "-------GIVE FEEDBACK FROM FOLLOWING WORDS................" << endl;
       cout << ".......GOOD ....... BAD........EXCELLENT.......POOR......" << endl;
       cin  >> comment[comment_count];
       while (comment[comment_count] != "GOOD" && comment[comment_count] != "POOR" &&
             comment[comment_count] != "EXCELLENT" && comment[comment_count] != "BAD" ){
             cout << "Give feedback about hospital management system..........." << endl;
              cin  >> comment[comment_count];
             }
             fstream file4;
             file4 . open ("feedback.txt" , ios :: app ) ;
             file4 << comment[comment_count]  ;
             file4  << endl;
             file4 .close() ;
      
          
}

     //USE OF SORTING
     
void sorting(){
      float max = -10;
      string show_disease , show_name , show_fname , show_gender , show_date , show_group ;
      int show_room ;
      int idx;
     
      for(int i = start ; i <  patient_count ; i++){
        if ( patient_age[i] > max ) {
              max =  patient_age[i] ;
              show_name = patient_name[i];
              show_fname = patientf_name[i];
               show_disease = patient_disease[i];
               show_gender  = patient_gender[i];
                show_date = patient_date[i];
                show_group = patient_group[i];
                idx = i ;
        } 

      }
       patient_age[idx] = patient_age[start] ;
        patient_age[start] = max ;             

       
        patient_name[idx] = patient_name[start];
         patient_name[start] =   show_name ;             

        
        patientf_name[idx] = patientf_name[start] ;
        patientf_name[start] = show_fname ;               

       
        patient_disease[idx] = patient_disease[start] ;
        patient_disease[start] =   show_disease ;                  

       
        patient_gender[idx] = patient_gender[start] ;
        patient_gender[start] =  show_gender ;                 

        
        patient_date[idx] = patient_date[start] ;
         patient_date[start] =  show_date ;             

       
        patient_group[idx] = patient_group[start] ;
         patient_group[start] =  show_group ;
         
            logo();
            cout << "Main Menu>Admin>Sorted Patient Records" << endl;
            cout << "  " << endl;
            cout << "name" << "\t\t" << "father name" << "\t" << "disease"<< "\t\t" << "age"  << "\t" << "blood group" << "\t\t" << "gender" << "\t\t" << "date of admit"<< "\t\t" << "room" << endl;
            cout << "   " << endl;
            for (int i=0;i<=patient_count;i++){
            cout << patient_name[i]  << "\t\t" << patientf_name[i] << "\t\t" <<patient_disease[i] << "\t\t" <<  patient_age[i] << "\t\t" << patient_group[i] << "\t\t" << patient_gender[i] << "\t\t" << patient_date[i]<< "\t\t" <<  patient_room[i]<< endl; 
                
            }       
            escape();
            start++ ;
     
}

/* DEFINITIONS OF RECEPTIONIST  FUNCTIONS..................................................................................................*/

string login_manu3(){
      string user;
      string pass;
      string role;
      cout << "Login details   " << endl;
      logo();
      cout << "Login>Login details." << endl;
      cout << "____________________________________________" << endl;
      cout << "Enter username:";
      cin >> user;
      cout << "Enter your password:";
      cin  >> pass;
      cout << "Enter your role:";
      cin >> role;
        if ( user == "nasir" && pass == "456" ){
             return role;
       }
        else{
       invalid();
       escape();
      system ("cls");
      cout << "Login details   " << endl;
      logo();
      cout << "Login>Login details." << endl;
      cout << "____________________________________________" << endl;
      cout << "Enter username:";
      cin >> user;
      cout << "Enter your password:";
      cin  >> pass;
       cout << "Enter your role:";
       cin >> role;
      }  
}

string menu2(){
string choice3 ;
      cout << "Main Menu for Receptionist " << endl;
   
      logo();
      cout << "Main Menu > Receptionist . >" << endl;
      cout << "   " << endl;
      cout << "Select one of the following." << endl;
      cout << "1. View entered personal of patients"  << endl;
      cout << "2. View entered medical of patients"  << endl;
      cout << "3. Exit" << endl;
      cout << "Your options................" << endl; 
      cin  >> choice3;
       return choice3;
}

void receptionist_view( ){
     logo();
      cout << "Main Menu > Receptionist > View personal record" << endl;
      cout << "  " << endl;

     cout << "name" << "\t\t" << "father name" << "\t\t" << "gender" << endl;
     cout << "   " << endl;
     for (int j = 0 ; j<=user_count ; j++ ){
     cout << nameA[j]  << "\t\t" << f_nameA[j] << "\t\t" << genderA[j] <<  endl;
}
      cout << endl;
      escape();
      system ("cls");
}
void receptionist_view2( ){
     logo();
      cout << "Main Menu > Receptionist > View medical record" << endl;
      cout << "  " << endl;

     cout << "disease"<< "\t\t" << "blood group" << "\t\t" << "date of admit"  << endl;
     cout << "   " << endl;
     for (int j = 0 ; j<=count ; j++ ){
     cout << diseaseA[j] << "\t\t" << blood_groupA[j] << "\t\t\t" << dateA[j] <<  endl;
}
      cout << endl;
      escape();
      system ("cls");
}

//....................................................................................................................................
void datareader1(){
      int number = 0 ;
      string line ;
      fstream file1 ;
      file1.open("personaldata.txt" , ios :: in ) ;
      while(!file1.eof()){
            getline(file1 , line) ;
            string  temp = "" ;
            int commaas = 1;
            for (int i = 0 ; line[i] != '\0' ; i++){
                  if (line[i] == ','){
                        commaas ++ ;
                        continue ;
                  }
                  if (commaas == 1){
                   nameA[number] =  nameA[number] + line[i] ;
                  }
                  if (commaas == 2){
                   f_nameA[number] = f_nameA[number] + line[i] ;
                  }
               
                  
                   if (commaas == 3){
                   genderA[number] = genderA[number] + line[i] ;
                  }
                  }
                  
                number ++ ;  
            }
               
        file1.close() ;
      }

                     


       void user_count_reader(){
             fstream file4 ;
             file4.open ("user_count.txt" , ios :: in ) ;
             file4 >> user_count ;
             file4.close();

       }

       //............................................................................................................
     void datareader3(){
      int number = 0 ;
      string line ;
      fstream file3 ;
      file3.open("medicaldata.txt" , ios :: in ) ;
      while(!file3.eof()){
            getline(file3 , line) ;
            string  temp = "" ;
            int commaas = 1;
            for (int i = 0 ; line[i] != '\0' ; i++){
                  if (line[i] == ','){
                        commaas ++ ;
                        continue ;
                  }
                 
                 
                  if (commaas == 1){
                   diseaseA[number] =  diseaseA[number] + line[i] ;
                  }
                  if (commaas == 2){
                   blood_groupA[number] = blood_groupA[number] + line[i] ;
                  }
                   if (commaas == 3){
                   dateA[number] = dateA[number] + line[i] ;
                  }
                 
                 
            }
                number ++ ;
      }

                      file3.close() ;
}

       void count_reader(){
             fstream file ;
             file.open ("count.txt" , ios :: in ) ;
             file >> count ;
             file.close();

       }