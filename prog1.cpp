#include<iostream>
#include<conio.h>
#include<Windows.h>
#include"MMSystem.h"
#include<dos.h>
using namespace std;
class quiz
{
   public: 
   char Name[100];char title[100];          
   char ch2,ch3,ch4;
   double x,x1,x2;int help,help1,help2, y;
   quiz(){ x=0;help=0;}
   void level1();
   void level2(double,int);
   void level3(double,int);
   void close();
   void close1();
   void close2();
   void inti();
   void congrats();
};

void quiz::inti()
{
  cout<<"\n                                  QUIZ CONTEST\n";
  cout<<"\n            BHADRAK ENGINEERING SCHOOL AND TECHNOLOGY,ASURALI,BHADRAK ";
  cout<<"\n                      COMPUTER SCIENCE & ENGINEERING DEPARTMENT";
  PlaySound(TEXT("song14.wav"),NULL,SND_SYNC);
  PlaySound(TEXT("song1.wav"),NULL,SND_SYNC); 
  cout<<"\n\n                                    GAME RULES"; 
  PlaySound(TEXT("song2.wav"),NULL,SND_SYNC);
  cout<<"\n 1. Its a 3 levels Game.";
  PlaySound(TEXT("song3.wav"),NULL,SND_SYNC);
  cout<<"\n 2. There are 2 HELPLINES for the game.";
  PlaySound(TEXT("song4.wav"),NULL,SND_SYNC);
  cout<<"\n        i) 50:50 \n        ii)Expert Advice ";
  PlaySound(TEXT("song5.wav"),NULL,SND_SYNC);
  cout<<"\n 3. You can use 2 HELPLINES for only 3 times during the entire game.";
  PlaySound(TEXT("song6.wav"),NULL,SND_SYNC);
  cout<<"\n 4. Each level has 5 questions";
  PlaySound(TEXT("song7.wav"),NULL,SND_SYNC);
  cout<<"\n 5. Each level has its own weightage";
  PlaySound(TEXT("song8.wav"),NULL,SND_SYNC);
  cout<<" \n       i)   1st Level:5 marks(2.5)";
  PlaySound(TEXT("song9.wav"),NULL,SND_SYNC);
  cout<<" \n       ii)  2nd Level:10 marks(5)";
  PlaySound(TEXT("song10.wav"),NULL,SND_SYNC);
  cout<<" \n       iii) 3rd Level:20 marks(10)";
  PlaySound(TEXT("song11.wav"),NULL,SND_SYNC);
  cout<<"\n 6. If you will give wrong answer then Gameover,otherwise you can QUIT Game";
  PlaySound(TEXT("song12.wav"),NULL,SND_SYNC);
  //PlaySound(TEXT("song13.wav"),NULL,SND_SYNC);
  
  cout<<"\n \n";
  system("pause");
  system("cls");
  PlaySound(TEXT("name.wav"),NULL,SND_SYNC);
  cout<<"\n\n      ENTER YOUR NAME=";
  cin>>Name;
  cout<<"\n      ENTER YOUR SURNAME=";
  cin>>title;
}
void quiz::close()
{
    
   system("cls") ;
   system("color E9");  
   cout<<"\n\n\n\n\n\n\n";
   cout<<"\n                                    RESULT OF CONTEST\n\n\n";
   if(x<=0)
   {  
           cout<<"                           "<<Name<<" "<<title<<" YOU HAVE SCORED 0";} 
   else
   {
      cout<<"                           " <<  Name <<" "<< title <<" YOU HAVE SCORED"<<x; 
      
   
   }  
      
}
void quiz::close1()
{
     
    system("cls") ;  
   system("color E9");
   cout<<"\n\n\n\n\n\n\n";      
     cout<<"\n                                  RESULT OF CONTEST\n\n\n";
   if(x1<=0)
   {  cout<<"                                "<<Name<<" "<<title<<" YOU HAVE SCORED 0";} 
   else
      cout<<"                           " <<  Name <<" "<< title <<" YOU HAVE SCORED"<<x1; 
}
void quiz::close2()
{
     system("cls") ; 
   system("color E9");
   cout<<"\n\n\n\n\n\n\n";       
   cout<<"\n                                   RESULT OF CONTEST\n\n\n";
   if(x2<=0)
   {  cout<<"                                "<<Name<<" "<<title<<" YOU HAVE SCORED 0";
   } 
   else if(x2==175)
   {
                  cout<<"                         " <<  Name <<" "<< title <<" YOU HAVE SCORED"<<x2;
                  PlaySound(TEXT("123.wav"),NULL,SND_SYNC);
                  
   }
             
   else
      cout<<"                          "<< Name<<" "<<title<<" YOU HAVE SCORED"<<x2;  
}
void quiz:: congrats()
{
   system("cls") ;
   system("color C2");
   cout<<"\n\n\n\n\n\n\n";
   cout<<"\n                                 CONGRATULATIONS\n\n\n";
   if(x2==175)
   {  
              cout<<"                         " <<  Name <<" "<< title <<" YOU HAVE SCORED "<<x2;
              
              cout<<"\n\n                                   WEll PLAYED";
              cout<<"\n\n                              YOU WON 1000 RUPESS";
              PlaySound(TEXT("final.wav"),NULL,SND_SYNC); 
              PlaySound(TEXT("fire.wav"),NULL,SND_SYNC);
             
              
          
   }
}     
void quiz:: level3(double p,int q)
{
  x2=p;help2=q;
  system("cls"); 
  system("color 06");
  cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
  cout<<"\n\n   YOU SCORED "<<x2<<" FROM LEVEL 1 AND 2";
  PlaySound(TEXT("start.wav"),NULL,SND_SYNC); 
  cout<<"\n\n This question is an audio clip \n";
  system("pause");
  PlaySound(TEXT("pyarko.wav"),NULL,SND_SYNC);
  cout<<"\n\n Q11)This song is choreographed on which actor?\n a. Anil Kapoor   \n b. Amitabha Bachhan  \n c. Saif Ali Khan   \n d. Sunjay Dutta.";
  cout<<"\n\n\n   Do u want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help2!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help2++;        
               cout<<"\n DO YOU WANT 1.50:50 OR 2. Expert Advice";             //disp 3 helpline
               cout<<"\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls");
                           cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
                           cout<<"\n\n Q11)This song is choreographed on which actor?";        
                           cout<<"\n\n a. Anil Kapoor"; 
                           cout<<"\n\n d. Sunjay Dutta";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level21;
                           break;
                    
                    case 2:
                            system("cls");
                            cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
                            cout<<"\n\n Q11)The Indian Institute of Science is located at which city of India?\n a. Kerala  \n b. Madras  \n c. Bangalore   \n d. New Delhi";
                            cout<<"\n\n Expert Advice=";
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level22; 
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }    
PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);        
Level21:cout<<"\n\n ANS=";
Level22:cin>>ch2;
     if(ch2=='d')
     {
       x2=x2+20;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x2;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
       
     }
    else
    {
       x2=x2-10;  
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is c. Bangalore ";  
       //PlaySound(TEXT("sorry11.wav"),NULL,SND_SYNC);        
       cout<<"\n\n\n\n";
       system("pause");
       close2();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques1 of level2

else                                                                 //dont want to attempt ques just quit frm game
{
    close2();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
}   
  
getch();
cout<<"\n\n\n\n";
system("pause"); 
system("cls");
system("color 06");
cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
PlaySound(TEXT("start.wav"),NULL,SND_SYNC); 
cout<<"\n\n Q12 The members of the Rajya Sabha are elected by? \n a. elected members of the legislative assembly  \n b. Lok Sabha  \n c. the people  \n d. elected members of the legislative council";
cout<<"\n\n\n  Do u want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help2!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help2++;        
               cout<<"\n\n DO YOU WANT 1.50:50 OR 2.Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1: 
                           system("cls");
                           cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
                           cout<<"\n\n Q12)The members of the Rajya Sabha are elected by ?";        
                           cout<<"\n\n a. elected members of the legislative assembly"; 
                           cout<<"\n\n d. elected members of the legislative council";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level23;
                           
                          break;
            
                    case 2:
                            system("cls");
                            cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
                            cout<<"\n\n Q12)The members of the Rajya Sabha are elected by? \n a.elected members of the legislative assembly  \n b. Lok Sabha  \n c.the people   \n d. elected members of the legislative council";
                            cout<<"\n\n Expert Advice=";
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level24; 
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }  
   PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);       
Level23:cout<<"\n\n ANS=";
Level24:cin>>ch2;
     if(ch2=='a')
     {
       x2=x2+20;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x2;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
 
     }
    else
    {
       x2=x2-10;
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is a. elected members of the legislative assembly";
       //PlaySound(TEXT("sorry12.wav"),NULL,SND_SYNC);          
       cout<<"\n\n\n\n";
       system("pause");          
       close2();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques1 of level2

else                                                                 //dont want to attempt ques just quit frm game
{
    close2();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
}   
  
getch();
cout<<"\n\n\n\n\n";
system("pause"); 
system("cls");
system("color 06");
cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
PlaySound(TEXT("start.wav"),NULL,SND_SYNC); 
cout<<"\n\n Q)13 The 'Kota tribal' community belongs to which region?\n a. Andhra Pradesh \n b. Punjab \n c. Tamil Nadu \n d. West Bengal";
cout<<"\n\n\n    Do you want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help2!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n YOU HAVE HELPLINES, DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help2++;        
               cout<<"\n\n DO YOU WANT 1.50:50  2. Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls"); 
                           cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
                           cout<<"\n\n Q)13 The 'Kota tribal' community belongs to which region?";        
                           cout<<"\n\n a. Andhra Pradesh";  
                           cout<<"\n\n c. Tamil Nadu";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level25;

                           break;
     
                    case 2:
                            system("cls");
                            cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
                            cout<<"\n\n Q)13 The 'Kota tribal' community belongs to which region?\n a. Andhra Pradesh \n b. Punjab \n c. Tamil Nadu \n d. West Bengal";
                            cout<<"\n\n Expert Advice=";
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level25; 
                            break;         
             }
          }
                                                                                    //count the use of helpline
       } 
  PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);          
 Level25:cout<<"\n\n ANS=:";
 Level26:cin>>ch2;
     if(ch2=='c')
     {
       x2=x2+20;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x2;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
       
     }
    else
    {
       x2=x2-10; 
        PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is c. Tamil Nadu"; 
       //PlaySound(TEXT("sorry13.wav"),NULL,SND_SYNC);         
       cout<<"\n\n\n\n";
       system("pause");           
       close2();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques1 of level2

else                                                                 //dont want to attempt ques just quit frm game
{
    close2();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
}   
  
getch();
cout<<"\n\n\n\n";
system("pause"); 
system("cls");
system("color 06");
cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
PlaySound(TEXT("start.wav"),NULL,SND_SYNC); 
cout<<"\n\n Q)14 By which country the 2016 UEFA Championship is being hosted ?\n a. Greece \n b. France \n c. Italy \n  d. Switzerland";
cout<<"\n\n\n   Do you want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help2!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help2++;        
               cout<<"\n\n DO YOU WANT 1.50:50  2. Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls");
                           cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- "; 
                           cout<<"\n\n Q14 By which country the 2016 UEFA Championship is being hosted?";        
                           cout<<"\n\n b. France"; 
                           cout<<"\n\n c. Italy";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level27;
                           
                          break;
                    
                    case 2:
                            system("cls");
                            cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
                            cout<<"\n\n Q)14 By which country the 2016 UEFA Championship is being hosted ?\n a. Greece \n b. France \n c. Italy \n  d. Switzerland";
                            cout<<"\n\n Expert Advice="; 
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level28;
                            break;         
             }
          }
                                                                                    //count the use of helpline
       } 
   PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);        
Level27:cout<<"\n\n ANS=";
Level28:cin>>ch2;
     if(ch2=='b')
     {
       x2=x2+20;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x2;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
      
     }
    else
    {
       x2=x2-10;
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);  
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is b. France";
        //PlaySound(TEXT("sorry14.wav"),NULL,SND_SYNC); 
               
       close2();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques1 of level2

else                                                                 //dont want to attempt ques just quit frm game
{
    close2();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
}   
  
getch();
cout<<"\n\n\n\n";
system("pause"); 
system("cls");
system("color 06");
cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
PlaySound(TEXT("start.wav"),NULL,SND_SYNC); 
cout<<"\n\n Q)15 Who is first woman to climb K2 ,world's second heighest mountain peak ?\n a. Junko Tabei \n b. Wanda Rutklewicz \n c. Tamae Watanbe \n d. Chantal Mauduit";
cout<<"\n\n\n   Do u want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help2!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help2++;        
               cout<<"\n\n DO YOU WANT 1.50:50 OR 2. Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls");
                           cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
                           cout<<"\n\n Q)15 Who is first woman to climb K2 ,world's second heighest mountain peak ?";         
                           cout<<"\n\n b. Wanda Rutklewicz"; 
                           cout<<"\n\n d. Chantal Mauduit";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level29;
                           break;
                    
                    case 2:
                            system("cls");
                            cout<<"--------------------------------------------THIRD LEVEL---------------------------------------------- ";
                            cout<<"\n\n Q)15 Who is first woman to climb K2 ,world's second heighest mountain peak ?\n a. Junko Tabei \n b. Wanda Rutklewicz \n c. Tamae Watanbe \n d. Chantal Mauduit";
                            cout<<"\n\n Expert Advice="; 
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level30;
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }  
  PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);       
Level29: cout<<"\n\n ANS=";
Level30: cin>>ch2;
     if(ch2=='b')
     {
       x2=x2+20;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x2;
       congrats();
       cout<<"\n\n\n\n";
       system("pause");
     }
    else
    {
       x2=x2-10;
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);  
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is b. Wanda Rutklewicz ";   
      // PlaySound(TEXT("sorry15.wav"),NULL,SND_SYNC);          
       close2();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques1 of level2

else                                                                 //dont want to attempt ques just quit frm game
{
    close2();
    cout<<"\n\n\n\n\n";
    system("pause");
    exit(0);
}   
  

}
void quiz:: level2(double m,int n)
{
    x1=m;help1=n;
  system("cls"); 
  system("color 30");
  cout<<"--------------------------------------SECOND LEVEL------------------------------------ ";
  cout<<"\n\n         YOU SCORED "<<x1<<" FROM LEVEL 1";
  PlaySound(TEXT("start.wav"),NULL,SND_SYNC); 
  cout<<"\n\n Q6)Which of the following is the lightest metal?\n a. Mercury  \n b. Lithium \n c. Lead  \n d. Silver";
  cout<<"\n\n\n  Do you want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help1!=3)                                                                            //Bounded the helpline
     {         
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help1++;        
               cout<<"\n\n DO YOU WANT 1.50:50 OR 2. Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls"); 
                           cout<<"--------------------------------------SECOND LEVEL------------------------------------ ";
                           cout<<"\n\n Q6)Which of the following is the lightest metal?";        
                           cout<<"\n\n b. Lithium";   
                           cout<<"\n\n c. Lead";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level11;
                           break;
          
                    case 2:
                            system("cls");
                            cout<<"--------------------------------------SECOND LEVEL------------------------------------ ";
                            cout<<"\n\n Q6)Which of the following is the lightest metal??\n a. Mercury  \n b. Lithium  \n c. Lead  \n d. Silver";
                            cout<<"\n\n  Expert Advice="; 
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level12;
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }     
 PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
 Level11:cout<<"\n\n ANS=";     
 Level12:cin>>ch2;
     if(ch2=='b')
     {
       x1=x1+10;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x1;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
       
     }
    else
    {
       x1=x1-5; 
        
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is b. Lithium ";  
      // PlaySound(TEXT("sorry6.wav"),NULL,SND_SYNC);        
       cout<<"\n\n\n\n";
       system("pause");
       close1();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques1 of level2

else                                                                 //dont want to attempt ques just quit frm game
{
    close1();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
}   
  
getch();
cout<<"\n\n\n\n";
system("pause"); 
system("cls");
system("color 30");
cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
PlaySound(TEXT("start.wav"),NULL,SND_SYNC); 
cout<<"\n\n Q7) During World War II, when did Germany attack France? \n a. 1941 \n b. 1940  \n c. 1942  \n d. 1943";
cout<<"\n\n\n   Do you want to continue,if yes press 'y' otherwise press 'n'=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help1!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help1++;        
               cout<<"\n\n DO YOU WANT 1.50:50 OR 2. Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls");
                           cout<<"-------------------------------------------SECOND LEVEL------------------------------------ "; 
                           cout<<"\n\n Q7)During World War II, when did Germany attack France?" ;       
                           cout<<"\n\n b. 1940"; 
						   cout<<"\n\n d. 1943";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level13;
                           break;
                    
                    case 2:
                            system("cls");
                            cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
                            cout<<"\n\n Q7)During World War II, when did Germany attack France?? \n a. 1941 \n b. 1940  \n c. 1942  \n d. 1943";
                            cout<<"\n\n  Expert Advice=";
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level14; 
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }  
PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);          
Level13: cout<<"\n\n ANS=";
Level14:cin>>ch2;
     if(ch2=='b')
     {
       x1=x1+10;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x1;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
       
     }
    else
    {
       x1=x1-5; 
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);  
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is b. 1940 ";  
       //PlaySound(TEXT("sorry7.wav"),NULL,SND_SYNC);        
       cout<<"\n\n\n\n";
       system("pause");        
       close1();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques2 of level2

else                                                                 //dont want to attempt ques just quit frm game
{
    close1();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
}   
  
getch();
cout<<"\n\n\n\n";
system("pause"); 
system("cls");
system("color 30");
cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
PlaySound(TEXT("start.wav"),NULL,SND_SYNC); 
cout<<"\n\n Q8)Golden Temple, Amritsar is India's ?\n a. Smallest Gurudwara    \n b. oldest Gurudwara	\n c. largest Gurdwara  \n d. None of the above";
cout<<"\n\n\n\n Do u want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help1!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n YOU HAVE HELPLINES, DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help1++;        
               cout<<"\n\n DO U WANT 1.50:50 OR  2.Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls"); 
                           cout<<"-------------------------------------------SECOND LEVEL------------------------------------ "; 
                           cout<<"\n\n Q8) Golden Temple, Amritsar is India's ?";        
                           cout<<"\n\n a. Smallest Gurudwara  ";	
                           cout<<"\n\n c. largest Gurdwara";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level15;
                           break;
                    
                    case 2:
                            system("cls");
                            cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
                            cout<<"\n\n Q8) Golden Temple, Amritsar is India's ?\n a. Smallest Gurudwara    \n b. oldest Gurudwara	\n c. largest Gurdwara  \n d. None of the above";
                            cout<<"\n\n Expert Advice="; 
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level16;
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }  
    PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);   
Level15:cout<<"\n\n ANS="; 
Level16:cin>>ch2;
     if(ch2=='c')
     {
       x1=x1+10;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x1;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
       
     }
    else
    {
       x1=x1-5; 
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is c. largest Gurdwara ";
       //PlaySound(TEXT("sorry8.wav"),NULL,SND_SYNC);            
       cout<<"\n\n\n\n";
       system("pause");
       close1();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques2 of level2

else                                                                 //dont want to attempt ques just quit frm game
{
    close1();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);

}   
  
getch();
cout<<"\n\n\n\n\n";
system("pause"); 
system("cls");
system("color 30");
cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
PlaySound(TEXT("start.wav"),NULL,SND_SYNC);
cout<<"\n\nQ9) Hockey was introduced in the Asian Games in? \n a. 1970 in Bangkok\n b. 1962 in Jakarta \n c. 1966 in Bangkok \n d. 1958 in Tokyo";
cout<<"\n\n\n  Do u want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help1!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO:";
        cin>>ch3;
          if(ch3=='y')
          {
               help1++;        
               cout<<"\n\n DO U WANT 1.50:50 OR 2. Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls"); 
                           cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
                           cout<<"\n\nQ9) Hockey was introduced in the Asian Games in ?";        
                           cout<<"\n\n b. 1962 in Jakarta"; 
                           cout<<"\n\n d. 1958 in Tokyo";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level17;
                           break;
                    
                    case 2:
                            system("cls");
                            cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
                            cout<<"\n\nQ9)Hockey was introduced in the Asian Games in ? \n a. 1970 in Bangkok\n b. 1962 in Jakarta \n c. 1966 in Bangkok \n d. 1958 in Tokyo";
                            cout<<"\n\n Expert Advice="; 
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level18;
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }  
 PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);         
Level17:cout<<"\n\n ANS="; 
Level18:cin>>ch2;
     if(ch2=='d')
     {
       x1=x1+10;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x1;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
     
     }
    else
    {
       x1=x1-5; 
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is d. 1958 in Tokyo  "; 
       //PlaySound(TEXT("sorry9.wav"),NULL,SND_SYNC);            
       cout<<"\n\n\n\n";         
       cout<<"\n\n\n\n";
       system("pause");
       close1();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques2 of level2

else                                                                 //dont want to attempt ques just quit frm game
{
    close1();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
}   
  
getch();
cout<<"\n\n\n\n";
system("pause"); 
system("cls");
system("color 30");
cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
PlaySound(TEXT("start.wav"),NULL,SND_SYNC);
cout<<"\n\nQ10) Plants receive their nutrients mainly from?\n a. chlorophyll \n b. atmosphere \n c. soil \n d. light";
cout<<"\n\n\n   Do u want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
       if(help1!=3)                                                                            //Bounded the helpline
       {        
                
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help1++;      
               cout<<"\n DO YOU WANT 1.50:50 OR 2. Expert Advice";             //disp 3 helpline
               cout<<"\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls");
                           cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
                           cout<<"\n\nQ10)Plants receive their nutrients mainly from?";         
                           cout<<"\n\n b. atmosphere"; 
                           cout<<"\n\n c. soil ";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level19;
                           break;
                    
                    case 2:
                            system("cls");
                            cout<<"-------------------------------------------SECOND LEVEL------------------------------------ ";
                            cout<<"\n\nQ10)Plants receive their nutrients mainly from?\n a. chlorophyll \n b. atmosphere \n c. soil \n d. Light";
                            cout<<"\n\n Expert Advice"; 
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level20;
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }   
   PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);      
Level19:cout<<"\n\n  ANS="; 
Level20:cin>>ch2;
     if(ch2=='c')
     {
       x1=x1+10;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x1;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
       system("cls");
       cout<<"\n\n\n             YOU HAVE USED "<<help1<< " HELPLINES IN YOUR 2ND LEVEL "; 
       cout<<"\n\n\n\n";
       system("pause");
       level3(x1,help1);
     }
    else
    {
       x1=x1-5; 
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);  
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is c. Soil"; 
      // PlaySound(TEXT("sorry10.wav"),NULL,SND_SYNC);        
       cout<<"\n\n\n\n";
       system("pause");
       close1();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
    
  }                                                                   //End of Ques5

else                                                                 //dont want to attempt ques just quit frm game
{
    close1();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
    
}
   
}


void quiz::level1()
{
  system("cls");   
  system("color 5F");  
  cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
  PlaySound(TEXT("start.wav"),NULL,SND_SYNC);  
 // cout<<"\n This is an audio clipping \n";
  //system("pause");
 // PlaySound(TEXT("Odia.wav"),NULL,SND_SYNC);

  cout<<"\n\n Q1)Which of the following approach is adapted by C++?\n a. Top-down \n b. Bottom-up \n c. Right-left \n d. Left-right";//Ques1
  cout<<"\n\n\n  Do you want to continue , if yes press 'y' otherwise press 'n' to EXIT=";
  //PlaySound(TEXT("confm.wav"),NULL,SND_SYNC);                      
  cin>>ch4;
  if(ch4=='y')
  {
      if(help!=3)                                                                            //Bounded the helpline
      {         
        cout<<"\n\n    YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n    PRESSS 'y' FOR YES AND 'n' FOR NO=";
        //PlaySound(TEXT("help.wav"),NULL,SND_SYNC);
        cin>>ch3;
          if(ch3=='y')
          {
               help++;       
               cout<<"\n\n  DO YOU WANT 1.50:50 OR  2.Expert Advice"; 
              // PlaySound(TEXT("option.wav"),NULL,SND_SYNC);            //disp 2 helpline
               cout<<"\n\n  Option=";
               cin>>y;
                
            switch(y)
            {
                    case 1: 
                           system("cls");
                           cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
                           cout<<"\n\n Q1)Which of the following approach is adapted by C++?";        
                           cout<<"\n\n b. Bottom-up";   
                           cout<<"\n\n c. Right-left";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level1;
                           break;
                    case 2:
                            system("cls");
                            cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
                            cout<<"\n\n Q1) Which of the following approach is adapted by C++? \n a. Top-down \n b. Bottom-up \n c. Right-left  \n d. Left-right ";
                            cout<<"\n\n   Expert Advice="; 
                             PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level2;
                            break;         
             }
          }
                                                                                   //count the use of helpline
       }   
      PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC); 
Level1:cout<<"\n\n   Ans=";
Level2:cin>>ch2;
     if(ch2=='b')
     {
       x=x+5;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
       
       
     }
    else
    {
       x=x-2.5; 
       //delay(70);
       Sleep(2000);
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);          
       cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is b. Bottom-up ";
       PlaySound(TEXT("sorry1.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n\n";
       system("pause");
       close();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques1

else                                                                 //dont want to attempt ques just quit frm game
{
    close();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
}   
  
getch();
cout<<"\n\n\n\n\n";
system("pause"); 
system("cls");
system("color 5F");
cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
PlaySound(TEXT("start.wav"),NULL,SND_SYNC);  
cout<<"\n\nQ2)During which festival would you be most likely to hear chants of 'Ganpati Bappa Moriya'? \n a. Durga Visarjan  \n b. Vaishno Devi Yatra  \n c. Amarnath Yatra \n d. Ganesh Chaturthi";// start of 2nd ques
cout<<"\n\n\n Do you want to continue,if yes press 'y' otherwise press 'n' for EXIT=";

cin>>ch4;
if(ch4=='y')
{
   if(help!=3)                                                                            //Bounded the helpline
   {         
             
     cout<<"\n\n  YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";
     cout<<"\n\n  PRESSS 'y' FOR YES AND 'n' FOR NO=";
     
     cin>>ch3;
       if(ch3=='y')
       {
          help++;          
          cout<<"\n\n DO YOU WANT 1.50:50 OR 2.Expert Advice";
          
          cout<<"\n\n Option=";
          cin>>y;
          
      switch(y)
      {
        case 1: 
              system("cls");
              cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
              cout<<"\n\n Q2) During which festival would you be most likely to hear chants of 'Ganpati Bappa Moriya'?";        
              cout<<"\n\n a. Durga Visarjan  ";
              cout<<"\n\n d. Ganesh Chaturthi ";
              PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
              goto Level3;
              break;
        
        case 2:
              system("cls");
              cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
              cout<<"\n\nQ2) During which festival would you be most likely to hear chants of 'Ganpati Bappa Moriya'? \n a. Durga Visarjan   \n b. Vaishno Devi Yatra  \n c. Amarnath Yatra \n d. Ganesh Chaturthi";
              cout<<"\n\n  Expert Advice="; 
              PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
              goto Level4;
              break;         
      }
    }
      
   } 
PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
Level3:cout<<"\n\n ANS=";
Level4:cin>>ch2;
      if(ch2=='d')
      {
           x=x+5;
           PlaySound(TEXT("right.wav"),NULL,SND_SYNC); 
           cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x;
            PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
            PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
      }
      else
      {
           x=x-2.5; 
           PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC); 
           cout<<"\n\n\n          Sorry, wrong answer."<<"Right ans is  d. Ganesh Chaturthi";
           //PlaySound(TEXT("sorry2.wav"),NULL,SND_SYNC);         
           cout<<"\n\n\n\n";
           system("pause");
           close();
           cout<<"\n\n\n\n";
           system("pause");
           exit(0);
        } 
   }                                                                            //end of 2nd ques

  else                                                                          // if u waana quit
  {
      close(); 
      cout<<"\n\n\n\n";
      system("pause");
      exit(0);                                                                 
      
  }   
  
getch();
cout<<"\n\n\n\n\n";
system("pause"); 
system("cls");
system("color 5F");
cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
PlaySound(TEXT("start.wav"),NULL,SND_SYNC); 
cout<<"\n\n Q3) Maulana Abul Kalam Azad's Birthday on 11 November is celebrated in India as what?\n a. National Integration Day  \n b. National Education Day \n c. National Minority Day   \n d. National Sports Day";//Start of 3rd ques
cout<<"\n\n\n   Do you want to continue,if yes press 'y' otherwise press 'n'for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n  YOU HAVE HELPLINE,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n  PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help++;        
               cout<<"\n\n DO U WANT 1.50:50 OR  2.Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1: 
                           cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
                           system("cls");
                           cout<<"\n\n Q3) Maulana Abul Kalam Azad's Birthday on 11 November is celebrated in India as what?";        
                           cout<<"\n\n a. National Integration Day"; 
                           cout<<"\n\n b. National Education Day ";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level5;
                          break;
            
                    case 2:
                            cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
                            system("cls");
                            cout<<"\n\n Q3)Maulana Abul Kalam Azad's Birthday on 11 November is celebrated in India as what?\n a. National Integration Day \n b. National Education Day \n c. National Minority Day  \n d. National Sports Day";
                            cout<<"\n\n Expert Advice="; 
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level6;
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }
      PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);     
Level5:cout<<"\n\n ANS="; 
Level6:cin>>ch2;
     if(ch2=='b')
     {
       x=x+5;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
       
     }
    else
    {
       x=x-2.5;   
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n  Sorry, wrong answer , Right ans is b. National Education Day .";
      // PlaySound(TEXT("sorry3.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n\n";
       system("pause");
       close();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
  }                                                                   //End of Ques3

else                                                                 //dont want to attempt ques just quit frm game
{
    close();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
    
}   
getch();
cout<<"\n\n\n\n\n";
system("pause"); 
system("cls");
system("color 5F");
cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
PlaySound(TEXT("start.wav"),NULL,SND_SYNC);
cout<<"\n\n Q4.Who wrote the line: ' A thing of beauty is a joy forever'?\n a. Robert Browing  \n b. John Keats  \n c. P.B.Shelley \n d. William Wordsworth"; 
cout<<"\n\n\n  Do you want to continue,if yes press 'y' otherwise press 'n'=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
     if(help!=3)                                                                            //Bounded the helpline
     {         
               
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n  PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help++;        
               cout<<"\n\n DO U WANT 1. 50:50 OR  2. Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls");
                           "-------------------------------------FIRST LEVEL----------------------------------------- ";  
                           cout<<"\n\n Q4.Who wrote the line: ' A thing of beauty is a joy forever'?";        
                           cout<<"\n\n b. John Keats";   
                           cout<<"\n\n d. William Wordsworth";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level7;
                          break;
                    
                    case 2:
                            system("cls");
                            "-------------------------------------FIRST LEVEL----------------------------------------- "; 
                            cout<<"\n\n Q4.Who wrote the line: ' A thing of beauty is a joy forever'??\n a. Robert Browing  \n b. John Keats  \n c. P.B.Shelley \n d. William Wordsworth";
                            cout<<"\n\n  Expert Advice="; 
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level8;
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }     
 PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
 Level7:cout<<"\n\n ANS=";
 Level8:cin>>ch2;
     if(ch2=='b')
     {
       x=x+5;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC); 
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);

     }
    else
    {
       x=x-2.5;
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n  Sorry, wrong answer , Right ans is b. John Keats .";
      // PlaySound(TEXT("sorry4.wav"),NULL,SND_SYNC);           
       cout<<"\n\n\n\n";
       system("pause");
       close();
       cout<<"\n\n\n\n";
       system("pause");
      exit(0);
    }
  }                                                                   //End of Ques4

else                                                                 //dont want to attempt ques just quit frm game
{
    close();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
    
} 
getch();
cout<<"\n\n\n\n\n";
system("pause"); 
system("cls"); 
system("color 5F");
cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
PlaySound(TEXT("start.wav"),NULL,SND_SYNC);  
cout<<"\n\n Q5)When was the first cricket Test match played? \n a. 1873  \n b. 1877 \n c. 1870  \n d. 1788";
cout<<"\n\n\n  Do you want to continue,if yes press 'y' otherwise press 'n' for EXIT=";                      //Do u want to attempt this ques
  cin>>ch4;
  if(ch4=='y')
  {
       if(help!=3)                                                                            //Bounded the helpline
       {        
                
        cout<<"\n\n YOU HAVE HELPLINES,DO YOU TAKE HELPLINE";                                                    //Take Helpline
        cout<<"\n\n PRESSS 'y' FOR YES AND 'n' FOR NO=";
        cin>>ch3;
          if(ch3=='y')
          {
               help++;      
               cout<<"\n\n DO YOU WANT 1. 50:50 OR 2. Expert Advice";             //disp 3 helpline
               cout<<"\n\n Option=";
               cin>>y;
               
            switch(y)
            {
                    case 1:
                           system("cls");
                           cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
                           cout<<"\n\n Q5)When was the first cricket Test match played?";         
                           cout<<"\n\n c. 1870";  
                           cout<<"\n\n d. 1788";
                           PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                           goto Level9;
                          break;
                    
                    case 2:
                            system("cls");
                            cout<<"-------------------------------------FIRST LEVEL----------------------------------------- "; 
                            cout<<"\n\n Q5)When was the first cricket Test match played? \n a. 1873  \n b. 1877 \n c. 1870\n d. 1788";
                            cout<<"\n\n  Expert Advice="; 
                            PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
                            goto Level10;
                            break;         
             }
          }
                                                                                    //count the use of helpline
       }     
 PlaySound(TEXT("30kbc.wav"),NULL,SND_SYNC);
 Level9:cout<<"\n\n ANS=";
 Level10:cin>>ch2;
     if(ch2=='c')
     {
       x=x+5;
       PlaySound(TEXT("right.wav"),NULL,SND_SYNC);
       cout<<"\n\n\n           YOUR ANS IS CORRECT"<<" AND YOUR CURRENT SCORE IS "<<x;
       PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
       PlaySound(TEXT("congo.wav"),NULL,SND_SYNC);
       system("cls");
       cout<<"\n\n\n             YOU HAVE USED "<<help<< " HELPLINES IN YOUR 1ST LEVEL "; 
       //cout<<"\n\n\n                   DO YOU GO FOR LEVEL2";
       //cout<<"\n\n         If yes press 'y',otherwise press 'n' for EXIT="; 
       //cin>>lc2;
       cout<<"\n\n\n\n";
       system("pause");
       //if(lc2==y)
       //{
           //cout<<"YOU HAVE USED HELPLINES IN YOUR 1ST LEVEL="<<help;      
           level2(x,help);
      // } 
      // else
       //{
         //cout<<"\n\n\n\n"; 
         //system("pause");  
         //close();
         //cout<<"\n\n\n\n";
         //system("pause");  
        // exit(0);
       //}   
     }
    else
    {
       x=x-2.5; 
       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);   
       cout<<"\n\n\n  Sorry, wrong answer , Right ans is c. 1870 .";      
       //PlaySound(TEXT("sorry5.wav"),NULL,SND_SYNC);   
       cout<<"\n\n\n\n";
       system("pause");
       close();
       cout<<"\n\n\n\n";
       system("pause");
       exit(0);
    }
    
  }                                                                   //End of Ques5

else                                                                 //dont want to attempt ques just quit frm game
{
    close();
    cout<<"\n\n\n\n";
    system("pause");
    exit(0);
    
}
   

 
}


int main()
{
   
   quiz q;
   q.inti();  
   q.level1();
   return 0; 
}

