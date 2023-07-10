#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int menu(void);
int smenu(void);
int emenu(void);
int rmenu(void);
void sform(void);
void eform(void);
void mform(void);
void formf(void);
void forme(void);
void sreport(void);
void ereport(void);
void mreport(void);
void freport(void);
void salrpt(void);
struct student
{
 int rn,ad_fee,mfee,clas;
 char sname[25],fname[25],mname[25],dob[10],add[30],city[20],ad_date[10],subject[20];
};
struct fees
{
 int rn,amt;
 char date[10],month[20];
};
struct marks
{
 int rn,m1,m2,m3,m4,m5,p1,p2,t,p;
 char sname[25],grade[20];
};
struct emp
{
 int en,bs;
 char ename[25],fname[25],mname[25],dob[10],add[30],city[20],post[20];
};
struct salary
{
 int en,ms;
 char ename[25],month[20],date[10];
};
main()
{
 struct student s;
 struct fees f;
 struct marks m;
 struct emp e;
 struct salary sa;
 FILE *fp,*fp1;
 int gdriver=DETECT,gmode,ch,ch1;
 initgraph(&gdriver,&gmode,"\\turboc3\\bgi");
  char response,pau;
  long n,n1;
    setcolor(1);
 rectangle(120,50,460,400);
 rectangle(110,40,470,410);
 settextstyle(1,0,3);
 setcolor(5);
 outtextxy(180,60,"Arbaz Hasan Softech");
 settextstyle(TRIPLEX_FONT,0,2);
 setcolor(2);
 outtextxy(250,100,"K I I T");
 setcolor(3);
 outtextxy(125,160,"student employee details Project");
 outtextxy(160,190,"BHUBANESHWAR ODISHA");
 setcolor(4);
 outtextxy(125,340,"New Version");
 outtextxy(320,340,"Developed By:");
 settextstyle(4,0,4);
 setcolor(5);
 outtextxy(340,360,"ARBAZ");
 setcolor(6);
 rectangle(250,240,330,255);
 line(260,255,260,290);
 line(320,255,320,290);
 line(260,290,280,300);
 line(280,300,280,320);
 line(320,290,300,300);
 line(300,300,300,320);
 rectangle(270,320,310,330);
 outtextxy(100,410,"Press any key to continue....");
 getch();

  do
    {
      ch=menu();
      if(ch==1)
       {
	 do
	   {
	     ch1=smenu();
	   if(ch1==1)
	     { sform();
	       void append(struct student *x,FILE *y);
		fp=fopen("stu_det.txt","a+");
		do
		{
		cleardevice();
		sform();
		append(&s,fp);
		gotoxy(60,24);
		scanf(" %c",&response);
		}
		while(response!='n');
		n=ftell(fp);
		fclose(fp);
	    }
	  else if(ch1==2)
	     {  formf();
	     void app(struct fees *x,FILE *y);
		fp1=fopen("fee.txt","a+");
		do
		{
		cleardevice();
		formf();
		app(&f,fp1);
		gotoxy(60,18);
		scanf(" %c",&response);
		}
		while(response!='n');
		n=ftell(fp1);
		fclose(fp1);
	     }
	  else if(ch1==3)
	       {
	       mform();
	      void app1(struct marks *x,FILE *y);
		fp1=fopen("mark.txt","a+");
		do
		{
		cleardevice();
		mform();
		app1(&m,fp1);
		gotoxy(60,24);
		scanf(" %c",&response);
		}
		while(response!='n');
		n=ftell(fp1);
		fclose(fp1);
	       }
	    }
	    while(ch1!=4);
	}
       else if(ch==2)
	   {
	    do
	      {
		ch1=emenu();
	      if(ch1==1)
		{
		    eform();
		   void append1(struct emp *x,FILE *y);
		fp=fopen("emp_det.txt","a+");
		  do
		  {
		  cleardevice();
		  eform();
		  append1(&e,fp);
		  gotoxy(60,24);
		  scanf(" %c",&response);
		  }
		 while(response!='n');
		n=ftell(fp);
		fclose(fp);
		}
		 else if(ch1==2)
		 {
		  forme();
		  void append2(struct salary *x,FILE *y);
		fp=fopen("sal.txt","a+");
		  do
		  {
		  cleardevice();
		  forme();
		  append2(&sa,fp);
		  gotoxy(60,20);
		  scanf(" %c",&response);
		  }
		 while(response!='n');
		n=ftell(fp);
		fclose(fp);
		 }
	       }
	     while(ch1!=3);

	       }
       else if(ch==3)
	  {
	    do
	    {
	     ch1=rmenu();
	      if(ch1==1)
	      {
	      cleardevice();
	      fp=fopen("stu_det.txt","r");
		do
		{
		 sreport();
		fscanf(fp," %d %s %s %s %s %s %s %d %d %s %d %s",&s.rn,s.sname,s.fname,s.mname,s.dob,s.add,s.city,&s.ad_fee,&s.mfee,s.ad_date,&s.clas,s.subject);
		gotoxy(29,4); fprintf(stdout,"%d",s.rn);
		gotoxy(29,6); fprintf(stdout,"%s",s.sname);
		gotoxy(29,8); fprintf(stdout,"%s",s.fname);
		gotoxy(29,10); fprintf(stdout,"%s",s.mname);
		gotoxy(29,12); fprintf(stdout,"%s",s.dob);
		gotoxy(29,14); fprintf(stdout,"%s",s.add);
		gotoxy(29,16); fprintf(stdout,"%s",s.city);
		gotoxy(29,18); fprintf(stdout,"%d",s.ad_fee);
		gotoxy(62,18); fprintf(stdout,"%d",s.mfee);
		gotoxy(29,20); fprintf(stdout,"%s",s.ad_date);
		gotoxy(62,22); fprintf(stdout,"%s",s.subject);
		gotoxy(29,22); fprintf(stdout,"%d",s.clas);
		getch();
		cleardevice();
		}
		while(!feof(fp));
	    fclose(fp);
	   }
	     else if(ch1==2)
	     {
	      cleardevice();
	      fp=fopen("emp_det.txt","r");
		do
		{
		 ereport();
		fscanf(fp," %d %s %s %s %s %s %s %d %s",&e.en,e.ename,e.fname,e.mname,e.dob,e.add,e.city,&e.bs,e.post);
		gotoxy(29,6); fprintf(stdout,"%d",e.en);
		gotoxy(29,8); fprintf(stdout,"%s",e.ename);
		gotoxy(29,10); fprintf(stdout,"%s",e.fname);
		gotoxy(29,12); fprintf(stdout,"%s",e.mname);
		gotoxy(29,14); fprintf(stdout,"%s",e.dob);
		gotoxy(29,16); fprintf(stdout,"%s",e.add);
		gotoxy(29,18); fprintf(stdout,"%s",e.city);
		gotoxy(29,20); fprintf(stdout,"%d",e.bs);
		gotoxy(29,22); fprintf(stdout,"%s",e.post);
		getch();
		cleardevice();
		}
		while(!feof(fp));
	    fclose(fp);
	     }
	     else if(ch1==3)
	     {
	       cleardevice();
	      fp=fopen("mark.txt","r");
		do
		{
		 mreport();
		fscanf(fp," %d %s %d %d %d %d %d %d %d %d %d",&m.rn,m.sname,&m.m1,&m.m2,&m.m3,&m.m4,&m.m5,&m.p1,&m.p2,&m.t,&m.p);
		gotoxy(29,5); fprintf(stdout,"%d",m.rn);
		gotoxy(29,6); fprintf(stdout,"%s",m.sname);
		gotoxy(40,12); fprintf(stdout,"%d",m.m1);
		gotoxy(40,13); fprintf(stdout,"%d",m.m2);
		gotoxy(40,14); fprintf(stdout,"%d",m.m3);
		gotoxy(40,15); fprintf(stdout,"%d",m.m4);
		gotoxy(40,16); fprintf(stdout,"%d",m.m5);
		gotoxy(67,13); fprintf(stdout,"%d",m.p1);
		gotoxy(67,14); fprintf(stdout,"%d",m.p2);
		gotoxy(40,18); fprintf(stdout,"%d",m.t);
		gotoxy(40,20); fprintf(stdout,"%d",m.p);
		 if(m.p>=33 && m.p<=45)
       {	gotoxy(40,22); printf("Third Division");}
     else	if(m.p>45 && m.p<60)
       { gotoxy(40,22);  printf("Second Division");}
     else	   if(m.p>=60 && m.p<=74)
	    { gotoxy(40,22); printf("First Division"); }
	     else
	 { gotoxy(40,22);   printf("Distinction");  }
		getch();
		cleardevice();
		}
		while(!feof(fp));
	    fclose(fp);
	     }
	     else if(ch1==4)
	     {
		cleardevice();
		int i=7;
		fp=fopen("fee.txt","r");
		freport();
		do
		{
		fscanf(fp," %d %d %s %s",&f.rn,&f.amt,f.month,f.date);
		gotoxy(6,i);fprintf(stdout,"%d",f.rn);
		gotoxy(25,i);fprintf(stdout,"%d",f.amt);
		gotoxy(42,i); fprintf(stdout,"%s",f.month);
		gotoxy(61,i); fprintf(stdout,"%s",f.date);
		 i++;
		}
		while(!feof(fp));
		fclose(fp);
		getch();
	      }
	     else if(ch1==5)
	     {
	       cleardevice();
		int i=7;
		fp=fopen("sal.txt","r");
		salrpt();
		do
		{
		fscanf(fp," %d %s %d %s %s",&sa.en,sa.ename,&sa.ms,sa.month,sa.date);
		gotoxy(6,i);fprintf(stdout,"%d",sa.en);
		gotoxy(16,i); fprintf(stdout,"%s",sa.ename);
		gotoxy(34,i);fprintf(stdout,"%d",sa.ms);
		gotoxy(46,i); fprintf(stdout,"%s",sa.month);
		gotoxy(61,i); fprintf(stdout,"%s",sa.date);
		 i++;
		}
		while(!feof(fp));
		fclose(fp);
		getch();
	     }
	    }
	    while(ch1!=6);
	  }
      }
      while(ch!=4);
}
int menu(void)
{
 int ch;
  cleardevice();
  setcolor(4);
 settextstyle(4,0,4);
 outtextxy(220,30,"Main Menu");
 rectangle(210,30,380,70);
 rectangle(140,70,450,400);
 settextstyle(TRIPLEX_FONT,0,4);   setcolor(2);
 outtextxy(150,90," 1.   Student");
 outtextxy(150,130," 2.   Employee");
 outtextxy(150,170," 3.   Report");
 outtextxy(150,210," 4.   Quit");
 gotoxy(27,22); printf("Enter Choice (1-4): ");
 scanf("%d",&ch);
 return(ch);
}
int smenu(void)
{
   int ch;
   cleardevice();
   setcolor(4);
 settextstyle(4,0,4);
 outtextxy(210,30,"Student Info");
 rectangle(200,30,390,70);
 rectangle(140,70,450,400);
 settextstyle(TRIPLEX_FONT,0,2);   setcolor(2);
 outtextxy(150,90," 1. Add Student Detail");
 outtextxy(150,130," 2. Add Fee Detail");
 outtextxy(150,170," 3. Marksheet Creation");
 outtextxy(150,210," 4. Quit");
 gotoxy(27,22); printf("Enter Choice (1-4): ");
 scanf("%d",&ch);
 return(ch);
 }
int emenu(void)
{
int ch;
  cleardevice();
   setcolor(4);
 settextstyle(4,0,4);
 outtextxy(200,30,"Employee Info");
 rectangle(190,30,405,70);
 rectangle(140,70,450,400);
 settextstyle(TRIPLEX_FONT,0,2);   setcolor(2);
 outtextxy(150,90," 1. Add Employee Detail");
 outtextxy(150,130," 2. Add Salary Detail");
 outtextxy(150,170," 3. Quit");
 gotoxy(27,22); printf("Enter Choice (1-4): ");
 scanf("%d",&ch);
 return(ch);
}
int rmenu(void)
{
int ch;
  cleardevice();
   setcolor(4);
 settextstyle(4,0,4);
 outtextxy(200,30,"*** Report ***");
 rectangle(190,30,405,70);
 rectangle(140,70,450,400);
 settextstyle(TRIPLEX_FONT,0,2);   setcolor(2);
 outtextxy(150,90," 1. All Students");
 outtextxy(150,130," 2. All Employees");
 outtextxy(150,170," 3. Marksheet");
 outtextxy(150,210," 4. Fees");
 outtextxy(150,250," 5. Salary");
 outtextxy(150,290," 6. Quit");
 gotoxy(27,22); printf("Enter Choice (1-6): ");
 scanf("%d",&ch);
 return(ch);
}
void sform(void)
{
 cleardevice();
 setcolor(4);
 settextstyle(4,0,4);
 outtextxy(200,8," Student Detail ");
 rectangle(50,5,600,45);
 rectangle(50,45,600,425);
 settextstyle(3,0,1);
 outtextxy(60,45,"Roll No :"); rectangle(220,45,320,65);
 outtextxy(60,75,"Name :");   rectangle(220,77,400,97);
 outtextxy(60,107,"Father Name :"); rectangle(220,109,400,129);
 outtextxy(60,138,"Mother Name :"); rectangle(220,141,400,161);
 outtextxy(60,171,"Date of Birth :"); rectangle(220,173,320,193);
 outtextxy(60,201,"Address :"); rectangle(220,205,500,225);
 outtextxy(60,233,"City :"); rectangle(220,237,350,257);
 outtextxy(60,267,"Admission Fees :");rectangle(220,269,300,289);
 outtextxy(350,267,"Monthly Fees :"); rectangle(480,269,560,289);
 outtextxy(60,297,"Admission Date :"); rectangle(220,301,320,321);
 outtextxy(60,330,"Class :"); rectangle(220,333,270,353);
 outtextxy(350,330,"Subject :"); rectangle(480,333,580,353);
 outtextxy(180,366,"Do you Want Any More (Y/N) :");
}
void eform(void)
{
 cleardevice();
 setcolor(4);
 settextstyle(4,0,4);
 outtextxy(200,30," Employee Detail ");
 rectangle(50,30,600,70);
 rectangle(50,70,600,450);
 settextstyle(3,0,1);
 outtextxy(60,80,"Emp No :"); rectangle(220,78,320,98);
 outtextxy(60,110,"Name :");   rectangle(220,110,400,130);
 outtextxy(60,140,"Father Name :"); rectangle(220,140,400,160);
 outtextxy(60,170,"Mother Name :"); rectangle(220,172,400,192);
 outtextxy(60,200,"Date of Birth :"); rectangle(220,204,320,224);
 outtextxy(60,230,"Address :"); rectangle(220,236,500,256);
 outtextxy(60,263,"City :"); rectangle(220,268,350,288);
 outtextxy(60,295,"Basic Salary :"); rectangle(220,300,300,320);
 outtextxy(60,330,"Destination :"); rectangle(220,332,320,352);
 outtextxy(180,370,"Do you Want Any More (Y/N) :");
}
void mform(void)
{
 cleardevice();
 setcolor(4);
 settextstyle(4,0,4);
 outtextxy(180,30," MarkSheet Creation ");
 rectangle(50,30,600,70);
 rectangle(50,70,600,450);
 settextstyle(3,0,1);
 outtextxy(60,80,"Roll No :"); rectangle(220,78,320,98);
 outtextxy(60,110,"Name :");   rectangle(220,110,400,130);
 rectangle(50,140,600,145);
 outtextxy(60,170,"Maths :"); rectangle(220,172,280,192);
 outtextxy(60,205,"Physics :"); rectangle(220,204,280,224);   outtextxy(310,200,"Practical :");rectangle(450,204,510,224);
 outtextxy(60,235,"Chemistry :"); rectangle(220,236,280,256); outtextxy(310,230,"Practical :");rectangle(450,236,510,256);
 outtextxy(60,265,"English :"); rectangle(220,268,280,288);
 outtextxy(60,295,"Hindi :"); rectangle(220,300,280,320);
 outtextxy(180,370,"Do you Want Any More (Y/N) :");
}
void formf(void)
{
 cleardevice();
 setcolor(4);
 settextstyle(4,0,4);
 outtextxy(240,30," Fee Detail ");
 rectangle(50,30,600,70);
 rectangle(50,70,600,450);
 settextstyle(3,0,1);
 outtextxy(60,80,"Roll No :"); rectangle(220,75,300,97);
 outtextxy(60,110,"Paid Amount :");   rectangle(220,110,300,130);
 outtextxy(60,140,"Month :"); rectangle(220,140,320,160);
 outtextxy(60,170,"Date :"); rectangle(220,175,300,195);
 outtextxy(180,270,"Do you Want Any More (Y/N) :");
}
void forme(void)
{
 cleardevice();
 setcolor(4);
 settextstyle(4,0,4);
 outtextxy(220,30," Salary Detail ");
 rectangle(50,30,600,70);
 rectangle(50,70,600,450);
 settextstyle(3,0,1);
 outtextxy(60,80,"Emp No :"); rectangle(220,78,320,98);
 outtextxy(60,110,"Name :");   rectangle(220,110,400,130);
 outtextxy(60,140,"Basic Salary :"); rectangle(220,140,300,160);
 outtextxy(60,170,"Month :"); rectangle(220,172,300,192);
 outtextxy(60,200,"Date :"); rectangle(220,204,320,224);
 outtextxy(180,300,"Do you Want Any More (Y/N) :");
}
void append(struct student *stu,FILE *ptr)
 {
 char chh;
 gotoxy(29,4);
 scanf("%d",&stu->rn);
 scanf("%c",&chh);
 gotoxy(29,6); gets(stu->sname);
 gotoxy(29,8); gets(stu->fname);
 gotoxy(29,10); gets(stu->mname);
 gotoxy(29,12); gets(stu->dob);
 gotoxy(29,14); gets(stu->add);
 gotoxy(29,16); gets(stu->city);
 gotoxy(29,18); scanf("%d",&stu->ad_fee);
 gotoxy(62,18); scanf("%d",&stu->mfee);
 scanf("%c",&chh);
 gotoxy(29,20); gets(stu->ad_date);
 gotoxy(29,22); scanf("%d",&stu->clas);
 scanf("%c",&chh);
 gotoxy(62,22); gets(stu->subject);
  fprintf(ptr," %d %s %s %s %s %s %s %d %d %s %d %s ",stu->rn,stu->sname,stu->fname,stu->mname,stu->dob,stu->add,stu->city,stu->ad_fee,stu->mfee,stu->ad_date,stu->clas,stu->subject);
}
void append1(struct emp *em,FILE *ptr)
 {
 char chh;
 gotoxy(29,6);
 scanf("%d",&em->en);
 scanf("%c",&chh);
 gotoxy(29,8); gets(em->ename);
 gotoxy(29,10); gets(em->fname);
 gotoxy(29,12); gets(em->mname);
 gotoxy(29,14); gets(em->dob);
 gotoxy(29,16); gets(em->add);
 gotoxy(29,18); gets(em->city);
 gotoxy(29,20); scanf("%d",&em->bs);
 scanf("%c",&chh);
 gotoxy(29,22); gets(em->post);
 fprintf(ptr," %d %s %s %s %s %s %s %d %s",em->en,em->ename,em->fname,em->mname,em->dob,em->add,em->city,em->bs,em->post);
}
void append2(struct salary *sal,FILE *ptr)
 {
 char chh;
 gotoxy(29,6);
 scanf("%d",&sal->en);
 scanf("%c",&chh);
 gotoxy(29,8); gets(sal->ename);
 gotoxy(29,10); scanf("%d",&sal->ms);
 scanf("%c",&chh);
 gotoxy(29,12); gets(sal->month);
 gotoxy(29,14); gets(sal->date);
 fprintf(ptr," %d %s %d %s %s",sal->en,sal->ename,sal->ms,sal->month,sal->date);
}
void app(struct fees *fee,FILE *ptr)
{
   char chh;
    gotoxy(29,6);
    scanf("%d",&fee->rn);
    gotoxy(29,8);
    scanf("%d",&fee->amt);
    scanf("%c",&chh);
    gotoxy(29,10);
    gets(fee->month);
    gotoxy(29,12);
    gets(fee->date);
    fprintf(ptr," %d %d %s %s",fee->rn,fee->amt,fee->month,fee->date);
}
void app1(struct marks *mark,FILE *ptr)
{
   char chh;
    gotoxy(29,6);
    scanf("%d",&mark->rn);
    gotoxy(29,8);
    scanf("%c",&chh);
    gets(mark->sname);
    gotoxy(29,12);
    scanf("%d",&mark->m1);
    gotoxy(29,14);
    scanf("%d",&mark->m2);
    gotoxy(29,16);
    scanf("%d",&mark->m3);
    gotoxy(29,18);
    scanf("%d",&mark->m4);
    gotoxy(29,20);
    scanf("%d",&mark->m5);
    gotoxy(60,14);
    scanf("%d",&mark->p1);
    gotoxy(60,16);
    scanf("%d",&mark->p2);
    scanf("%c",&chh);
    mark->t=mark->m1+mark->m2+mark->m3+mark->m4+mark->m5+mark->p1+mark->p2;
    mark->p=mark->t/5;
    fprintf(ptr," %d %s %d %d %d %d %d %d %d %d %d",mark->rn,mark->sname,mark->m1,mark->m2,mark->m3,mark->m4,mark->m5,mark->p1,mark->p2,mark->t,mark->p);
}
void sreport(void)
{
 setcolor(9);
 settextstyle(4,0,4);
 outtextxy(200,8," Student Detail ");
 rectangle(50,5,600,45);
 rectangle(50,45,600,425);
 settextstyle(3,0,1);
 outtextxy(60,45,"Roll No :");
 outtextxy(60,75,"Name :");
 outtextxy(60,107,"Father Name :");
 outtextxy(60,138,"Mother Name :");
 outtextxy(60,171,"Date of Birth :");
 outtextxy(60,201,"Address :");
 outtextxy(60,233,"City :");
 outtextxy(60,267,"Admission Fees :");
 outtextxy(350,267,"Monthly Fees :");
 outtextxy(60,297,"Admission Date :");
 outtextxy(60,330,"Class :");
 outtextxy(350,330,"Subject :");
 outtextxy(180,366,"Press any key to continue.....");
}
void ereport(void)
{
 cleardevice();
 setcolor(5);
 settextstyle(4,0,4);
 outtextxy(200,30," Employee Detail ");
 rectangle(50,30,600,70);
 rectangle(50,70,600,450);
 settextstyle(3,0,1);
 outtextxy(60,80,"Emp No :");
 outtextxy(60,110,"Name :");
 outtextxy(60,140,"Father Name :");
 outtextxy(60,170,"Mother Name :");
 outtextxy(60,200,"Date of Birth :");
 outtextxy(60,230,"Address :");
 outtextxy(60,263,"City :");
 outtextxy(60,295,"Basic Salary :");
 outtextxy(60,330,"Destination :");
 outtextxy(180,370,"Press any key to continue...");
}
void mreport(void)
{
 cleardevice();
 setcolor(4);
 rectangle(30,5,600,450);
 settextstyle(1,0,3);
 outtextxy(140,10,"K I I T");
 settextstyle(4,0,4);
 outtextxy(230,35,"Report Card");
 settextstyle(3,0,1);
 outtextxy(50,60,"Roll No :");
 outtextxy(50,80,"Name :");
 outtextxy(50,100,"Father Name :");
 outtextxy(50,120,"Class :");
 line(30,140,600,140);
 line(30,160,600,160);
 gotoxy(6,10); printf("Subject");
 gotoxy(20,10); printf("Max");
 gotoxy(30,10); printf("Min");
 gotoxy(40,10); printf("Marks");
 gotoxy(6,12); printf("Maths");
 gotoxy(6,13); printf("Physics");
 gotoxy(6,14); printf("Chemistry");
 gotoxy(6,15); printf("English");
 gotoxy(6,16); printf("Hindi");
 for(int i=12;i<=16;i++)
 {
   gotoxy(20,i); printf("100");
   gotoxy(30,i); printf("33");
 }
 line(30,260,600,260);
 line(360,140,360,260);
 gotoxy(48,13); printf("Practical");
 gotoxy(48,14); printf("Practical");
 gotoxy(6,18); printf("Total");
 gotoxy(20,18); printf("500");
 gotoxy(30,18); printf("165");
 line(30,290,600,290);
 line(30,320,600,320);
 gotoxy(6,20); printf("Percent");
 gotoxy(6,22); printf("Division");
 line(30,350,600,350);
 outtextxy(360,410,"Signature of Principal");
 outtextxy(200,450,"Press any key to continue.....");
}
void freport(void)
{
 cleardevice();
 setcolor(3);
 rectangle(30,5,600,450);
 settextstyle(1,0,3);
 outtextxy(140,10,"K I I T");
 settextstyle(4,0,4);
 outtextxy(230,35,"Fees Report");
 settextstyle(3,0,1);
 line(30,70,600,70);
 outtextxy(40,75,"Roll No");
 outtextxy(190,75,"Amount");
 outtextxy(350,75,"Month");
 outtextxy(520,75,"Date");
 line(30,95,600,95);
 line(150,70,150,450);
 line(300,70,300,450);
 line(470,70,470,450);
}
void salrpt(void)
{
 cleardevice();
 setcolor(6);
 rectangle(30,5,600,450);
 settextstyle(1,0,3);
 outtextxy(140,10,"K I I T");
 settextstyle(4,0,4);
 outtextxy(230,35,"Salary Report");
 settextstyle(3,0,1);
 line(30,70,600,70);
 outtextxy(40,75,"Emp No");
 outtextxy(130,75,"Name");
 outtextxy(280,75,"Amount");
 outtextxy(390,75,"Month");
 outtextxy(520,75,"Date");
 line(30,95,600,95);
 line(250,70,250,450);
 line(350,70,350,450);
 line(470,70,470,450);
 line(110,70,110,450);
}
