//                             //
//  KBC PROJECT IN C++ LANGUAGE//
//                             //
//                             //
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void welcome_screen();
void exitscreen();
void KBC();
void KBCl();
void initialise();
void showrules();
void prtques();
void getchoice();
void getans(char);
void crtanspg();
void endpg();
void wrnganspg();
void game();
void line();
void qnos();
void menu();
void prtlifeline();
void amt_calc();
void lifelines();
void add_new();
void display_rec();
void delete_rec_name();
void delete_rec_pno();
void delete_all();
void search_rec_pno();
void search_rec_noq();
void search_rec_name();

void welcomescreen()
{
clrscr();
cout<<""
<<"\n                    .,,:,:,                           .,,:,::.          "     
<<"\n   :r;rrvr777i7v7ri:i7vLYYYL1Ji      .rir;v7r77rrv7;i::r7vLLJ7UUv       "     
<<"\n   @@ONF55vLYLi:.ii,.        .2q,    LBMZk2FvLYL7i,:r,,         ;ML     "     
<<"\n                LB@:r7YLjL:     Or                .B@i,:LFqGv     2Z    "     
<<"\n               5BL       .Yk:    8:              rOX  :7iiiuB@2    78   "     
<<"\n             iX8i           vS,   O. iYuFUuv.   1X1 75:      .@G.   Fj  "
<<"\n            Yuji   ..      :7ZP@riBBri     iqL krL Xr  :Fq    1:G,   @  "     
<<"\n           j7:r ,jXv;Pr  u5i   B@J     JJ    U@ u.G   ;8 YU   M  B   Lu "
<<"\n          71 Z.Jr,   ,B B;     @S     LU,O    Bq,N   .B  J7  2U  70  .O "     
<<"\n         :O @B8.     iF :Z    P ru    B  M    Z Z.   B:  8 .P5    @   @ "     
<<"\n         @ 7v  Z:    N:  @   jF N.   iO :G   rLiv   :8  :@v7      YJ  B."     
<<"\n        E: B   G.    8  B.  Yq  M    0. M   :0 B    N:            iX  B "
<<"\n       :M u7   M    :J.O.  FX  FJ    @vU  ,52 rL    B             .Z  M."     
<<"\n       8  M   uJ    @BL   Gv   @     i    XMi P    vE              @  @ "     
<<"\n		   		      BY PARAS                               "
<<"\n      .O iN   B     Bi  v8.   :E     :;i    iM8    S7       iq    .q  O "     
<<"\n      Zi Zi  :G         @     ki    @i:v0    BM    O.      .0Bi   iS .E "     
<<"\n      B  M   P:         U7    B    ;E   G.   Ju    G.     ,M Ei   Jv 1v "     
<<"\n     ,E .8   M     Bi    B   iO    ki   M    uU    J0    7q  M    @  B  "
<<"\n     vL ,5  jF    u@1    N;  qi    M   i8    @1     O;:2ki  M:   :B :G  "
<<"\n     1i 7v  M     O M     M  G    .8  :B    :BO      ii,   87    E: O.  "     
<<"\n     P: :u .N    .E 2u    Ei N    Su 5E    :G ur         rE:    ,8 iN   "     
<<"\n     ki .E LL    Uv  M     Xq7    L8L:    1B   OU     ,7EY      @  @    "     
<<"\n     ki  M q     Or  O,     B          .J@kX:   r52v15L:       S; Er    "     
<<"\n     7u  krB     :@: ,@    u@u,:i:::7LU7@   @                 u2 v5     "     
<<"\n     ,O   G@   ,LF,   r5rrU@.r@v:ii:.   X   N;               F5 iN      "
<<"\n      @.  iBJ;uJ:        :k  u:         vS   B.             0v ;8       "     
<<"\n      iO   rP           u1  Oi           @   .M:          ;X. JE        "
<<"\n       07   :q7      i2u, :M,            :M    1k:     ,JSr  Eu         "     
<<"\n        Bi    iujJYjY7   kU               uN    .JJJJYJj:  iq:          "     
<<"\n         E5            2F:                 7M,           iZr            "     
<<"\n          7NL:     .7k2:                    .0k:     .:21v              "
<<"\n            :vu25UYvi                         .rJu1Uuvr.                "
<<"\n\t\t\t\tWELCOME			"
<<"\n\t\t\t\t	TO			"	
<<"\n\t\t\t\t	  KBC GAME		"
<<"\n\t\t\t\t		  A work by PARAS"
<<"\n\t\t\t\tCOMPUTER SCIENCE PROJECT	"				
<<"\n\t\t\t\t	in C++ language		";
getch();
clrscr();
}
int qn,qno,changeqs,doubleans,tf;
int amt;
void initialise()
{
qn=0;
amt=0;
changeqs=1;
doubleans=1;
tf=1;
qno=0;
}
struct date
{int dd,mm,yy;};
class record
{
char name[40];
int amt_won,age,no_of_ques;
date date_of_play;
public:
int pno,lifelines_used;
void getdata()
{
cout<<"Enter details of Player\n";
cout<<"Enter Name:";
	gets(name);
cout<<"Enter date of play\n";
cout<<"date:";	cin>>date_of_play.dd;
cout<<"month:";	cin>>date_of_play.mm;
cout<<"year:";	cin>>date_of_play.yy;
cout<<"Enter Age:";
	cin>>age;
game();
amt_won=amt;
no_of_ques=qno;
}
void showdata()
{
cout<<"\nPlayer no:"<<pno;
cout<<"\nName:"<<name;
cout<<"\nDate of play(dd/mm/yy):";
	cout<<date_of_play.dd<<" ";
	cout<<date_of_play.mm<<" ";
	cout<<date_of_play.yy<<" ";
cout<<"\nAge:"<<age;
cout<<"\nQuestions answered:"<<no_of_ques;
cout<<"\nAmount won:"<<amt_won<<" thousand";
}
char getpno()
{
return pno;
}
char *getname()
{
return name;
}
int getques()
{
return no_of_ques;
}
}rec,p;

void KBC()
{
cout<<""
<<"\n                        :i:ir,                             "
<<"\n     ,,.:..       :.,,  7:iXr :,:,,.      ....:::i;ii::     "
<<"\n    rMWB0,     ..;iii7 rii7X 2008BB0Z2i. .@MMMMMMMMMMMMMMS, "
<<"\n   .MWBB0X2XSX7rXi::i i7;rX       :8B@M0 MMMMa      ,ZMWZr, "
<<"\n   @MMM8Sa2aZaX77rir i82SaX.      rMMMM ZMMMM7              "
<<"\n  BM@a7       i0Z8@Z  ;2MMMMMMMMMMMMMMr ,XWMMMMMMMM;        "
<<"\n          .i:ii.     iiii;;;;;:,::      :ii;;ri         "
<<"\n\t\t\t\t\t\t_ _        _  _  _  _  _  "
<<"\n\t\t\t\t\t\t |_| |_|  |_||_||_||_||_   "
<<"\n\t\t\t\t\t\t_|_|  _|  |  | ||\\ | | _|"
<<"\n";
}
void add_new()
{
 int pn=1;
 ifstream fi("record.txt");
 p.getdata();
 while(fi.read((char*)&rec,sizeof(rec)))pn++;
 p.pno=pn;
 fi.close();
 ofstream fo("record.txt",ios::app);
 fo.write((char*)&p,sizeof(rec));
 fo.close();
 p.showdata();
 getch();
 menu();
}

void display_rec()
{
ifstream fi("record.txt");
while(fi.read((char*)&rec,sizeof(rec)))
	{rec.showdata();
	cout<<"\n";
	}
getch();
fi.close();
menu();
}

void delete_all()
{
ofstream fo("record.txt",ios::trunc);
fo.close();
cout<<"\n\t\tAll records deleted!!";
getch();
menu();
}
void delete_rec_pno()
{
ifstream fi("record.txt");
 ofstream fo("temp.txt");
 int pn; char found='f',confirm='n';
 cout<<"Enter player no whose record is to be deleted : ";
 cin>>pn;
 while(fi.read((char*)&rec,sizeof(rec)))
 {
  if(rec.getpno()==pn)
   {
   rec.showdata();
   found='t';
   cout<<"Do you want to delete the record?";
   cin>>confirm;
   if(confirm=='n')
	fo.write((char*)&rec,sizeof(rec));
   else cout<<"\n\tRecord Deleted!!!";
   getch();
   }
  }
  if(found=='f')
  cout<<"\nRecord not found!!!";
  getch();
  fi.close(); fo.close();
  remove("record.txt");
  rename("temp.txt","record.txt");
menu();
}
void delete_rec_name()
{
ifstream fi("record.txt");
 ofstream fo("temp.txt");
 char name[40],found='f',confirm='n';
 cout<<"Enter player name whose record is to be deleted : ";
 gets(name);
 while(fi.read((char*)&rec,sizeof(rec)))
 {
  if(!strcmpi(rec.getname(),name))
   {
   rec.showdata();
   found='t';
   cout<<"Do you want to delete the record?";
   cin>>confirm;
   if(confirm=='n')
	fo.write((char*)&rec,sizeof(rec));
   else cout<<"\n\tRecord Deleted!!!";
   getch();
   }
  }
  if(found=='f')
  cout<<"\nRecord not found!!!";
  getch();
  fi.close(); fo.close();
  remove("record.txt");
  rename("temp.txt","record.txt");
menu();
}

void search_rec_pno()
 {
 int pn,f=0;
 cout<<"Enter player record no to be showed:";
 cin>>pn;
 ifstream fi("record.txt");
 while(fi.read((char*)&rec,sizeof(rec)))
 if(rec.getpno()==pn)
 {
  rec.showdata();f=1;break;
 }
 if(f==0)
 cout<<"record not found";
 getch();
 fi.close();
menu();

}
void search_rec_noq()
 {
  int noq,f=0;
  cout<<"Enter no of questions answered by player to show the records:";
  cin>>noq;
  ifstream fi("record.txt");
  while(fi.read((char*)&rec,sizeof(rec)))
  if(rec.getques()==noq)
  {
   rec.showdata();f=1;
  }
  if(f==0)
   cout<<"no record found";
   getch();
 fi.close();
menu();
}
void search_rec_name()
 {
  int f=0;
  char name[40];
  cout<<"Enter name whose record is to be found:";
  gets(name);
  ifstream fi("record.txt");
  while(fi.read((char*)&rec,sizeof(rec)))
  if(!strcmpi(rec.getname(),name))
  {
  rec.showdata();f=1;
  }
  if(f==0)
   cout<<"no record found";
   getch();
 fi.close();
menu();
}

void endpg()
{
clrscr();
cout<<"\t\t\t     THANKYOU FOR PLAYING\n ";
KBC();
cout<<"\n";
line();
cout<<"\t\t\t\tCONGRATULATIONS!!!";
line();
cout<<"\n\t\t\tYOU WON ";
amt_calc();
cout<<amt<<" THOUSAND RUPEES!!!";
cout<<"\n\n\n";
}
void line()
{
cout<<"\n";
for(int i=1;i<81;i++)
cout<<"-";
}
void amt_calc()
{
switch(qno)
{
case 1:amt=2; break;
case 2:amt=4; break;
case 3:amt=8; break;
case 4:amt=16;break;
case 5:amt=32;break;
case 6:amt=64;break;
case 7:amt=120;break;
case 8:amt=250;break;
case 9:amt=500;break;
case 10:amt=1000;break;
case 11:amt=2000;break;
case 12:amt=3000;break;
case 13:amt=5000;break;
case 14:amt=7000;break;
case 15:amt=9000;break;
}
}
void prtlifeline()
{
cout<<"\t\t\t\tLIFELINES";
line();
if(changeqs==1)	cout<<"1.Change The Ques";
if(doubleans==1)	cout<<"\t\t\t2.40:20";
if(tf==1)	cout<<"\t\t\t\t3.T/F";
line();
}
void uselifeline(char ans)
{
int lno;
cout<<"Which lifeline do you want to use??";
cin>>lno;
l:switch(lno)
{
case 1:if(qn%2==0) qn-=qn;
	else qn+=qn;changeqs--;
	prtques();
	break;
case 2: doubleans--;
	cout<<"Enter your 2 answers:";
	char x,y;
	cout<<"\n1."; 	cin>>x;
	cout<<"2.";	cin>>y;
	if(toupper(ans)==toupper(x) || toupper(ans)==toupper(y))
	crtanspg();
	else	wrnganspg();
	break;
case 3: tf--;  char tof;
	cout<<"\n OPTION A is correct.It is"
	"\nT. TRUE "
	"\nF. FALSE	";
	cin>>tof;
	if(toupper(ans)=='A' && (tof=='T' || tof=='t'))
		crtanspg();
	else if(toupper(ans)!='A' && (tof=='F' || tof=='f'))
		crtanspg();
	else wrnganspg();
	break;
default:cout<<"Wrong selection.Choose correct Lifeline\n";goto l;
}
}
void getchoice(char ans)
{
cout<<"\nEnter Your CHOICE"
"\nA.Give the ans"
"\nL.Use a lifeline"
"\nE.Exit\t";
char ch;
cin>>ch;
if(toupper(ch)=='E')
{endpg();}
else if(toupper(ch)=='L')
     {  uselifeline(ans);
     }
else getans(ans);
}
void crtanspg()
{
clrscr();
KBC();
cout<<"\n";
line();
cout<<"\t\t\t\tCONGRATULATIONS!!"    ;
line();
cout<<"\n\t\t\tYOUR ANSWER is CORRECT";
cout<<"\n\t\t\tYou won ";
qno++;
amt_calc();
cout<<amt<<" THOUSAND RUPEES!!!";
getch();
prtques();
}
void wrnganspg()
{
clrscr();
KBC();
cout<<"\n";
line();
cout<<"\t\t\t\t\tSORRY!!BUT YOUR ANSWER IS WRONG!!!!";
getch();
clrscr();
endpg();
}

void getans(char ans)
{char a;
cout<<"\nEnter your answer:";
cin>>a;
if (toupper(ans)==toupper(a))
	{crtanspg();}
else
	{wrnganspg();}
}
void showrules()
{
clrscr();
KBC();
cout<<"The quiz contains 15 questions.Each question contain 4 options(A,B,C & D) out of which only one is correct and the player has to select the correct option.If the player selects the correct optins then he/she moves further to the next ques but if the selected option is wrong then the record is saved and exit.";
line();
cout<<"\t\t\t\tLifelines";
line();
cout<<"\nThere are three lifelines provided to the player."
"\n\n1.Change the question                                  "
"\n  In this a new ques from the ques set no will be provided to the player."
"\n2.40:20"
"\n  In this lifeline the player is allowed to choose two options for "
"the ques."
"\n3.T/F   "
"\n  This lifeline changes the question and puts it with one of the option"
" as \n  possible answer and player has to tell whether the option is correct "
"or not.";
}
void qnos()
{
randomize();;
int r;
r=random(2);
qn=(2*qno)+r+1;
getch();
}
void prtques()
{qnos();
char ans;
KBCl();
switch(qn)
{
case 1:
cout<<"\nThe major tribal group in Bihar?"
"\nA. Santhals			B. todas"
"\nC. Bhils           		D. Lechpas";
ans='A';
break;
case 2:
cout<<"\nWhich does not belong to the UN?"
"\nA. FAO			B. ILO "
"\nC. WHO	                D. ASEAN";
ans='D';
break;
case 3:
cout<<"\nThe Battle of Plassey was fought in"
"\nA. 1757                      B. 1775"
"\nC. 1576                      D. 1761";
ans='a';
break;
case 4:
cout<<"\nThe currency of Yugoslavia is	"
"\nA. pound			B. peso  "
"\nC. dinar                        D. Lira";
ans='a';
break;
case 5 :
cout<<"\nThe branch of science dealing with tumors "
"\nA. Sereology                    B. Oncology    "
"\nC. Chromology                   D. Urology      ";
ans='b';
break;
case 6:
cout<<"\nArt 370 of the Constitution is related to     "
"\nA. J&K                          B. Sikkim          "
"\nC. Punjab                       D. Assam            ";
ans='a';
break;
case 7:
cout<<"\nDar-es-salaam is the capital of          "
"\nA. Kenya                        B. Tanzania   "
"\nC. UAE                          D. Libya       ";
ans='b';
break;
case 8:
cout<<"\nParis is situated on the river         "
"\nA. Tiber                        B. Danube  "
"\nC. Seine                        D. Ganges   ";
ans='c';
break;
case 9:
cout<<"\nThe land of Thousand Elephants            "
"\nA. Canada                       B. Zanzibar    "
"\nC. Thailand                     D. Laos          ";
ans='d';
break;
case 10:
cout<<"\nWhat is the new name of Formosa        "
"\nA. Taiwan                       B. Surinam  "
"\nC. Kinshasa                     D. Balize    ";
ans='a';
break;
case 11:
cout<<"\nKLM Royal Airlines is headquartered in    "
"\nA. Italy                        B. UK          "
"\nC. Scotland                     D. netherlands ";
ans='d';
break;
case 12:
cout<<"\nWho is the 'Man of Destiny'               "
"\nA. Adolf Hitler                 B. Napolean    "
"\nC. Gladstone                    D. Bismarck     ";
ans='b';
break;
case 13:
cout<<"\nAt the equator,Duration of day is       "
"\nA. 10 hrs                       B. 12 hrs    "
"\nC. 14 hrs                       D. 16 hrs     ";
ans='b';
break;
case 14:
cout<<"\nThe southernmost ranges of India              "
"\nA. Nilgiri hills                B. Anamalai hills"
"\nC. Nallamala hills              D. Cardamom hills ";
ans='d';
break;
case 15:
cout<<"\nThe source of river Nile ?                    "
"\nA. Lake Baikal                  B. Woolar lake     "
"\nC. Lake Victoria                D. Lake superior    ";
ans='c';
break;
case 16:
cout<<"\nWhat does a bibliosphilist collect ?         "
"\nA. Paintings                    B. Softwares      "
"\nC. Books                        D. Mobile phones   ";
ans='c';
break;
case 17:
cout<<"\nThe second largest human organ               "
"\nA. Liver                        B. Heart          "
"\nC. Brain                        D. Lungs           ";
ans='a';
break;
case 18:
cout<<"\nWhat is Hansen's disease ?                 "
"\nA. Polio                        B. Mumps        "
"\nC. Sleeping sickness            D. Leprosy       ";
ans='d';
break;
case 19:
cout<<"\nIndian state with the longest coastline      "
"\nA. Kerala                       B. Maharashtra    "
"\nC. Gujarat                      D. Tamil Nadu      ";
ans='c';
break;
case 20:
cout<<"\nWorld's first credit card ?              "
"\nA. Diners club                  B. Visa Card   "
"\nC. American Express             D. Master card  ";
ans='a';
break;
case 21:
cout<<"\nJohn Bull stands for a typical          "
"\nA. Indian                       B. American  "
"\nC. Chinese                      D. Englishman ";
ans='d';
break;
case 22:
cout<<"\nThe first woman CM of India       "
"\nA. Annie Besant                 B. Sucheta Kripalani"
"\nC. J Jayalalitha                D. Sarojini Naidu    ";
ans='b';
break;
case 23:
cout<<"\nThe country named after a tree                 "
"\nA. Brazil                       B. Finland          "
"\nC. Burma                        D. Japan             ";
ans='a';
break;
case 24:
cout<<"\nIn Ramayana,who is Dashanan ?                 "
"\nA. Dasharatha                   B. Bheeshma        "
"\nC. Ravana                       D. Rama             ";
ans='c';
break;
case 25:
cout<<"\nJacobs ladder is a                            "
"\nA. Ladder                       B. Machine tool    "
"\nC. Board game                   D. Plant            ";
ans='d';
break;
case 26:
cout<<"\nThe first Indian technicolor film               "
"\nA. Chemmeen                     B. Jhansi Ki Rani   "
"\nC. Pather Panchali              D. Sholay            ";
ans='b';
break;
case 27:
cout<<"\nBaku is the capital of                         "
"\nA. Azerbaijan                   B. East Timor       "
"\nC. Uzbekistan                   D. Burkina Faso      ";
ans='a';
break;
case 28:
cout<<"\nThe Big Apple is a nickname of                "
"\nA. Chicago                      B. London           "
"\nC. New York                     D. Tokyo              ";
ans='c';
break;
case 29:
cout<<"\nWho discoverd Benzene in 1825 ?              "
"\nA. Edward Jenner                B. Micheal Faraday "
"\nC. Albert Edison                D. J L Baird         ";
ans='b';
break;
case 30:
cout<<"\nWhere do you find Angkor Wat ?                "
"\nA. Cambodia                     B. Indonesia       "
"\nC. Myanmar                      D. Malaysia          ";
ans='a';
}
getchoice(ans);
}
void KBCl()
{
clrscr();
KBC();
cout<<"\n";
prtlifeline();
}
void game()
{
showrules();
prtques();
}

void menu()
{
clrscr();
int c=0,cc=0;
initialise();
cout<<""
<<"\n\t                        :i:ir,                             "
<<"\n\t     ,,.:..       :.,,  7:iXr :,:,,.      ....:::i;ii::     "
<<"\n\t    rMWB0,     ..;iii7 rii7X 2008BB0Z2i. .@MMMMMMMMMMMMMMS, "
<<"\n\t   .MWBB0X2XSX7rXi::i i7;rX       :8B@M0 MMMMa      ,ZMWZr, "
<<"\n\t   @MMM8Sa2aZaX77rir i82SaX.      rMMMM ZMMMM7              "
<<"\n\t  BM@a7       i0Z8@Z  ;2MMMMMMMMMMMMMMr ,XWMMMMMMMM;        "
<<"\n\t          .i:ii.     iiii;;;;;:,::      :ii;;ri         ";
line();
cout<<"1.Play the Quiz\n"
<<"2.See records of previous players\n"
<<"3.Search a record\n"
<<"4.Delete a record\n"
<<"5.Exit";
line();
cout<<"Enter your choice:";
cin>>c;
line();
switch(c)
{
case 1:add_new();
	break;
case 2:display_rec();break;
case 3:cout<<"31.Search record by Player no\n"
	   <<"32.Search records by no of questions answered by player\n"
	   <<"33.Search record by name\n";
       cin>>cc;
       if(cc==31)
       search_rec_pno();
       else if(cc==32)
       search_rec_noq();
       else if(cc==33)
       search_rec_name();
       break;
case 4:cout<<"41.Delete record by pno\n"
	<<"42.Delete record by name\n"
	<<"43.Delete All\n";
	cin>>cc;
	if(cc==41)
	delete_rec_pno();
	else if(cc==42)
	delete_rec_name();
	else if(cc==43)
	delete_all();
	break;
case 5:getch();break;
}
}
void main()
{
clrscr();
welcomescreen();
menu();
exitscreen();
getch();
}
void exitscreen()
{
clrscr();
cout<<""
<<"\n                    .,,:,:,                           .,,:,::.          "     
<<"\n   :r;rrvr777i7v7ri:i7vLYYYL1Ji      .rir;v7r77rrv7;i::r7vLLJ7UUv       "
<<"\n   @@ONF55vLYLi:.ii,.        .2q,    LBMZk2FvLYL7i,:r,,         ;ML     "
<<"\n                LB@:r7YLjL:     Or                .B@i,:LFqGv     2Z    "     
<<"\n               5BL       .Yk:    8:              rOX  :7iiiuB@2    78   "     
<<"\n             iX8i           vS,   O. iYuFUuv.   1X1 75:      .@G.   Fj  "     
<<"\n            Yuji   ..      :7ZP@riBBri     iqL krL Xr  :Fq    1:G,   @  "     
<<"\n           j7:r ,jXv;Pr  u5i   B@J     JJ    U@ u.G   ;8 YU   M  B   Lu "     
<<"\n          71 Z.Jr,   ,B B;     @S     LU,O    Bq,N   .B  J7  2U  70  .O "     
<<"\n         :O @B8.     iF :Z    P ru    B  M    Z Z.   B:  8 .P5    @   @ "     
<<"\n         @ 7v  Z:    N:  @   jF N.   iO :G   rLiv   :8  :@v7      YJ  B."     
<<"\n        E: B   G.    8  B.  Yq  M    0. M   :0 B    N:            iX  B "     
<<"\n       :M u7   M    :J.O.  FX  FJ    @vU  ,52 rL    B             .Z  M."     
<<"\n       8  M   uJ    @BL   Gv   @     i    XMi P    vE              @  @ "     
<<"\n		   		      BY PARAS                               "
<<"\n      .O iN   B     Bi  v8.   :E     :;i    iM8    S7       iq    .q  O "     
<<"\n      Zi Zi  :G         @     ki    @i:v0    BM    O.      .0Bi   iS .E "
<<"\n      B  M   P:         U7    B    ;E   G.   Ju    G.     ,M Ei   Jv 1v "     
<<"\n     ,E .8   M     Bi    B   iO    ki   M    uU    J0    7q  M    @  B  "     
<<"\n     vL ,5  jF    u@1    N;  qi    M   i8    @1     O;:2ki  M:   :B :G  "
<<"\n     1i 7v  M     O M     M  G    .8  :B    :BO      ii,   87    E: O.  "     
<<"\n     P: :u .N    .E 2u    Ei N    Su 5E    :G ur         rE:    ,8 iN   "
<<"\n     ki .E LL    Uv  M     Xq7    L8L:    1B   OU     ,7EY      @  @    "
<<"\n     ki  M q     Or  O,     B          .J@kX:   r52v15L:       S; Er    "     
<<"\n     7u  krB     :@: ,@    u@u,:i:::7LU7@   @                 u2 v5     "     
<<"\n     ,O   G@   ,LF,   r5rrU@.r@v:ii:.   X   N;               F5 iN      "     
<<"\n      @.  iBJ;uJ:        :k  u:         vS   B.             0v ;8       "     
<<"\n      iO   rP           u1  Oi           @   .M:          ;X. JE        "     
<<"\n       07   :q7      i2u, :M,            :M    1k:     ,JSr  Eu         "     
<<"\n        Bi    iujJYjY7   kU               uN    .JJJJYJj:  iq:          "     
<<"\n         E5            2F:                 7M,           iZr            "     
<<"\n          7NL:     .7k2:                    .0k:     .:21v              "     
<<"\n            :vu25UYvi                         .rJu1Uuvr.                "
<<"\n                 ___    _  _          _ 	      	"
<<"\n                  | |_||_|| | ||/ |_|| || |   	"
<<"\n                  | | || || |_||\\  | |_||_|   	"
<<"\n\t\t\t\t	  KBC GAME		"
<<"\n\t\t\t\t		  by paras      "
<<"\n\t\t\t\tCOMPUTER SCIENCE PROJECT	"				
<<"\n\t\t\t\t	in C++ language		";
getch();
}
