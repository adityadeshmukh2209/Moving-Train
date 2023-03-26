#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class A
{
	
	public:
		//crete a moon
		void moon()
		{
			setfillstyle(SOLID_FILL,15);
			circle(40,40,35);
			floodfill(51,51,15);
		}
		
		//create Sun and Day time scenarios
		void sun()
		{
			setfillstyle(SOLID_FILL,14);
			circle(40,40,35);
			floodfill(51,51,15);
			
			setfillstyle(SOLID_FILL,1);
			rectangle(0,0,630,220);
			floodfill(6,6,15);
			
			setfillstyle(SOLID_FILL,9);
			rectangle(0,220,630,360);
			floodfill(6,226,15);

		}
		
		//Create a Bulding
		void building()
		{
			setfillstyle(SOLID_FILL,7);
			rectangle(60,325,170,460);
			floodfill(101,326,15);
			
			line(115,325,115,460);
			line(90,325,90,460);
			line(140,325,140,460);
			line(60,352,170,352);
			line(60,379,170,379);
			line(60,406,170,406);
			line(60,433,170,433);
			line(50,325,180,325);
			
			
			setfillstyle(SOLID_FILL,7);	
			rectangle(400,250,480,460);
			floodfill(401,251,15);
			
			
			line(420,250,420,460);
			line(440,250,440,460);
			line(460,250,460,460);
			line(400,300,480,300);
			line(400,340,480,340);
			line(400,380,480,380);
			line(400,420,480,420);
			line(400,460,480,460);
			
			setfillstyle(SOLID_FILL,7);	
			rectangle(210,360,240,460);
			floodfill(211,361,15);
			line(200,360,250,360);
			line(225,360,225,460);
			
			setfillstyle(SOLID_FILL,13);
			rectangle(280,400,360,460);
			floodfill(281,401,15);
			line(270,400,370,400);
			line(300,400,300,460);
			line(320,400,320,460);
			line(340,400,340,460);
			
			line(1,460,620,460);
		}
		
		//Create Stars
		void stars()
		{
			putpixel(450,60,15);
			putpixel(480,50,15);
			putpixel(410,199,15);
			putpixel(450,290,15);
			putpixel(440,190,15);

			putpixel(400,260,15);
			putpixel(580,250,15);
			putpixel(410,199,15);
			putpixel(550,340,15);
			putpixel(640,190,15);

			putpixel(200,40,15);
			putpixel(230,10,15);
			putpixel(550,99,15);
			putpixel(100,50,15);
			putpixel(400,100,15);
			
			putpixel(450,60,15);
			putpixel(480,50,15);
			putpixel(410,199,15);
			putpixel(450,290,15);
			putpixel(440,190,15);

			putpixel(400,260,15);
			putpixel(580,250,15);
			putpixel(110,299,15);
			putpixel(550,340,15);
			putpixel(640,190,15);

			putpixel(200,40,15);
			putpixel(230,10,15);
			putpixel(550,99,15);
			putpixel(100,50,15);
			putpixel(400,100,15);

			putpixel(150,60,15);
			putpixel(280,50,15);
			putpixel(310,199,15);
			putpixel(50,290,15);
			putpixel(120,190,15);

			putpixel(100,260,15);
			putpixel(280,250,15);
			putpixel(30,199,15);
			putpixel(250,240,15);
			putpixel(340,190,15);
			
			putpixel(120,260,15);
			putpixel(280,260,15);
			putpixel(30,299,15);
			putpixel(200,240,15);
			putpixel(30,190,15);
			
			putpixel(100,20,15);
			putpixel(280,25,15);
			putpixel(30,19,15);
			putpixel(250,24,15);
			putpixel(340,19,15); 
			
			putpixel(10,26,15);
			putpixel(28,25,15);
			putpixel(30,99,15);
			putpixel(25,40,15);
			putpixel(30,190,15);
		}
		
		
		//Create Hellicopter
		void helicopter()
		{
			//vertical Take of
			for(int j=0;j<150;j++)
			{
				//Helicopter Body
				setfillstyle(SOLID_FILL,14);
				rectangle(70,250-j,160,300-j);
				floodfill(71,260-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(110,230-j,120,250-j);
				floodfill(111,240-j,15);
				
				setfillstyle(SOLID_FILL,9);
				rectangle(50,220-j,180,230-j);
				floodfill(51,221-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(40,270-j,70,280-j);
				floodfill(41,271-j,15);
				
				setfillstyle(SOLID_FILL,4);
				rectangle(20,240-j,40,280-j);
				floodfill(21,250-j,15);
				
				//landing bracket
				setfillstyle(SOLID_FILL,8);
				rectangle(100,300-j,105,310-j);
				floodfill(101,301-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(130,300-j,125,310-j);
				floodfill(126,301-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(80,310-j,150,315-j);
				floodfill(81,311-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(80,315-j,90,320-j);
				floodfill(81,316-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(140,315-j,150,320-j);
				floodfill(141,316-j,15);
				
				delay(1);	
				cleardevice();
				
				//building
				building();
				
				//moon
				moon();
				
				//stars
				stars();
			}
			
			//Horizontal fly
			for(int i=0;i<450;i++)
			{
				//helicopter body
				setfillstyle(SOLID_FILL,14);
				rectangle(70+i,100,160+i,150);
				floodfill(71+i,110,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(110+i,80,120+i,100);
				floodfill(111+i,90,15);
				
				setfillstyle(SOLID_FILL,9);
				rectangle(50+i,70,180+i,80);
				floodfill(51+i,71,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(40+i,120,70+i,130);
				floodfill(41+i,121,15);
				
				setfillstyle(SOLID_FILL,4);
				rectangle(20+i,90,40+i,130);
				floodfill(21+i,100,15);
				
				//landing bracket
				setfillstyle(SOLID_FILL,8);
				rectangle(100+i,150,105+i,160);
				floodfill(101+i,151,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(130+i,150,125+i,160);
				floodfill(126+i,151,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(80+i,160,150+i,165);
				floodfill(81+i,161,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(80+i,165,90+i,170);
				floodfill(81+i,166,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(140+i,165,150+i,170);
				floodfill(141+i,166,15);
				
				
				
				delay(1);	
				cleardevice();
				
				//building
				building();
				
				//moon
				moon();
				
				//stars
				stars();
			}
		}
		
		
		//Create Drone
		void Drone()
		{
			
			
			//Vertical take off
			for(int j=0;j<150;j++)
			{
				//Drone Body
				setfillstyle(SOLID_FILL,3);
				rectangle(70,250-j,160,300-j);
				floodfill(71,260-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(110,230-j,120,250-j);
				floodfill(111,240-j,15);
				
				setfillstyle(SOLID_FILL,9);
				rectangle(50,220-j,180,230-j);
				floodfill(51,221-j,15);
				delay(1);	
				cleardevice();
				
				//landing bracket
				setfillstyle(SOLID_FILL,8);
				rectangle(100,300-j,105,310-j);
				floodfill(101,301-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(130,300-j,125,310-j);
				floodfill(126,301-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(80,310-j,150,315-j);
				floodfill(81,311-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(80,315-j,90,320-j);
				floodfill(81,316-j,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(140,315-j,150,320-j);
				floodfill(141,316-j,15);
				
				//building
				building();
				
				//daytime
				moon();
				
				//stars
				stars();
			}
			
			//Horizontal fly
			for(int i=0;i<450;i++)
			{
				//Drone body
				setfillstyle(SOLID_FILL,3);
				rectangle(70+i,100,160+i,150);
				floodfill(71+i,110,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(110+i,80,120+i,100);
				floodfill(111+i,90,15);
				
				setfillstyle(SOLID_FILL,9);
				rectangle(50+i,70,180+i,80);
				floodfill(51+i,71,15);
				
				
				//landing bracket
				setfillstyle(SOLID_FILL,8);
				rectangle(100+i,150,105+i,160);
				floodfill(101+i,151,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(130+i,150,125+i,160);
				floodfill(126+i,151,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(80+i,160,150+i,165);
				floodfill(81+i,161,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(80+i,165,90+i,170);
				floodfill(81+i,166,15);
				
				setfillstyle(SOLID_FILL,8);
				rectangle(140+i,165,150+i,170);
				floodfill(141+i,166,15);
				
				delay(1);	
				cleardevice();
				
				//building
				building();
				
				//daytime
				moon();
				
				//stars
				stars();
			}
		}
		
		
		//Create Kite
		void Kite()
		{
			int y1,x1,x2,y2,angle;
			angle=0;
			
			//Kite fly
			for(int i=0;i<450;i++)
			{
				//sunset
				sun();
				
				//kite
				x1=100;
				x1=30*cos(-angle*3.242/180);
				x1=x1++;
				y1=50*sin(angle*3.141/180);
				y1= getmaxy()/2 - y1;

				x2=100;
				x2=30*cos(-angle*3.242/180);
				x2=x2++;
				y2=50*sin(angle*3.141/180);
				y2= getmaxy()/2 - y2;


				setfillstyle(SOLID_FILL,4);
				rectangle(x1+200,y1-100,x2+230,y2-70);
				floodfill(x1+201,y1-99,15);
				line(x1+200,y1-100,x2+230,y2-70);
				line(320,400,x2+230,y2-70);

				delay(10);
				angle+=5;
				cleardevice();
				
				//building
				building();
				
				//stars
				stars();
			}
		}
		
};

int main()
{
	int gd=DETECT ,gm;
	gd=DETECT;
	initgraph(&gd,&gm,NULL);
	
	putpixel(630,460,RED);
	
	int choice;
	char ch;
	
	A obj;
	
	do
	{
		cout<<"\n\t 1.helicopter";
		cout<<"\n\t 2.Drone";
		cout<<"\n\t 3.kite";
		cout<<"\n\t 4.Exit";
		cout<<"\n\t enter the choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.helicopter();
				break;
			case 2:
				obj.Drone();
				break;
			case 3:
				obj.Kite();
				break;
				
			case 4:
				cout<<"exit the program";
				exit(0);
				break;
				
			default:
				cout<<"wrong choice";
				exit(0);
				break;
		}
		cout<<"\n\t do you want to return menu (Y/N):";
		cin>>ch;
	}while(ch=='Y'||ch=='y');


	delay(1000);
	closegraph();
	
	return 0;
}
