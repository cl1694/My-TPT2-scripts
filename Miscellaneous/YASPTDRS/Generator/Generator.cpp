#include<bits/stdc++.h>
#include "commandlib.hpp"
std::vector<bool> v;
double pack(int v1,int v2,int v3){return ((v3/8.0+v2)/8.0+v1)/8.0;}
void script_TT(){//do a tower testing
	open(v,towertesting,true);click(v,0.6,0.75);click(v,0.257,0.096);
	wait(v,5.0);click(v,0.0156,0.5);wait(v,5.0);
	restart(v);wait(v,0.125);click(v,0.029,0.05);wait(v,2.0);click(v,0.267,0.265);wait(v,7.0);
}

void script_Region(){//region spam
	open(v,towertesting,true);click(v,0.2,0.6);click(v,0.175,0.7);click(v,0.5,0.56);
	int tmp=IDCurrent+1;
	for(int diff=0;diff<6;diff++)click(v,0.5,0.56-((diff+1)%6)*0.08);
	click(v,0.36,0.36);gotoX(v,tmp,15);wait(v,0.5);open(v,towertesting,false);wait(v,1.0);
}

void script_PP(){//powerplant
	open(v,powerplant,true);
	click(v,0.2,0.405);
	int tmp=IDCurrent+1;
	for(int item=0;item<24;item++){
		scroll(v,0.2,0.536,0.0,(23.0-item)/23.0);click(v,0.2,0.666-(0.666-0.405)/23.0*item);
	}
	for(int item=23;item>=0;item--){
		scroll(v,0.2,0.536,0.0,(23.0-item)/23.0);click(v,0.2,0.666-(0.666-0.405)/23.0*item);
	}
	gotoX(v,tmp,3);
	click(v,0.2,0.666);
	wait(v,1.0);click(v,0.104,0.08);wait(v,2.0);click(v,0.104,0.08);
	open(v,powerplant,false);
}

void script_Mine(){//mine
	open(v,mine,true);
	wait(v,2.0);
	int tmp=IDCurrent+1;
	for(int i=0,tabOrder[9]={3,1,10,5,11,4,6,7,5};i<9;i++){
		switchTab(v,tabOrder[i]);
	}
	gotoX(v,tmp,8);switchTab(v,1);
	wait(v,1.0);click(v,0.104,0.08);click(v,0.5,0.775);wait(v,2.0);
	click(v,0.6875,0.775);tmp=IDCurrent+1;click(v,0.42,0.132);gotoX(v,tmp,20);
	wait(v,0.25);click(v,0.104,0.08);open(v,mine,false);
}

void script_Factory(){//factory
	open(v,factory,true);click(v,0.96,0.765);wait(v,1.0);
	for(int i=0,machineOrder[10]={7,3,6,1,2,5,0,8,4,9};i<10;i++){
		click(v,0.46+0.1*(machineOrder[i]%5),0.61-0.22*(machineOrder[i]/5));
		wait(v,1.5);click(v,0.782,0.758);
	}
	click(v,0.96,0.67);click(v,0.506,0.74);click(v,0.46,0.68);click(v,0.553,0.632);
	click(v,0.834,0.658);click(v,0.878,0.658);scroll(v,0.65,0.6,0.0,0.0);
	click(v,0.834,0.476);click(v,0.878,0.476);click(v,0.506,0.74);wait(v,0.5);
	click(v,0.96,0.484);
	int tmp=IDCurrent+1;click(v,0.821,0.747);wait(v,0.5);gotoX(v,tmp,10);
	wait(v,1.0);click(v,0.96,0.765);open(v,factory,false);
}

void script_HQ(){//headquarter
	open(v,headquarters,true);click(v,0.2,0.4);wait(v,1.0);
	click(v,0.74,0.06);click(v,0.475,0.133);
	scroll(v,0.84,0.38,0,0);click(v,0.84,0.136);wait(v,1.0);click(v,0.84,0.06);wait(v,1.0);
	scroll(v,0.15,0.5,0,1);click(v,0.15,0.77);click(v,0.44,0.34);
	scroll(v,0.15,0.5,0,0);click(v,0.15,0.09);click(v,0.5,0.29);
	wait(v,4.0);scroll(v,0.15,0.5,0,1);click(v,0.15,0.49);click(v,0.5,0.236);
	click(v,0.975,0.955);click(v,0.2,0.75);wait(v,1.0);open(v,headquarters,false);
}

void script_Arcade(){//arcade is boring
	open(v,arcade,true);wait(v,1.0);
	click(v,0.2,0.63);click(v,0.7,0.47);click(v,0.47,0.63);click(v,0.5,0.5);wait(v,1.0);
	int tmp=IDCurrent+1;
	click(v,0.42,0.45);click(v,0.62,0.45);click(v,0.62,0.45);gotoX(v,tmp,3);
	wait(v,0.5);gotoX(v,tmp,5);wait(v,2.0);
	click(v,0.5,0.18);click(v,0.5,0.35);open(v,arcade,false);
}

void script_Lab(){
	open(v,laboratory,true);wait(v,2.0);
//	click(v,0.245,0.74);click(v,0.66,0.09);int tmp=IDCurrent+1;
//	for(int i=0;i<5;i++)for(int j=0;j<5;j++)
//		click(v,0.576+i*0.0585,0.618-j*0.1045);
//	gotoX(v,tmp,1);click(v,0.71,0.09);gotoX(v,tmp,1);
//	click(v,0.245,0.74);wait(v,1.0);
	click(v,0.245,0.576);click(v,0.9,0.075);wait(v,1.0);click(v,0.245,0.576);
	click(v,0.245,0.424);int tmp=IDCurrent+1;
	for(int i=0,x[6]={2,4,4,2,0,0},y[6]={4,3,1,0,1,3};i<6;i++)
		click(v,0.566+0.065*x[i],0.116+0.105*y[i]);
	gotoX(v,tmp,10);wait(v,2.0);click(v,0.245,0.424);open(v,laboratory,false);
}

void script_Shipyard(){//shipyard
	//shipyard is even more boring
}

void script_TP(){//trading post
	//trading post is also boring
}

void script_Workshop(){//workshop
	open(v,workshop,true);wait(v,1.0);
	int tmp=IDCurrent+1;
	for(int i=0;i<=4;i++)click(v,0.345,0.695-0.065*i);
	for(int i=4;i>=0;i--)click(v,0.345,0.695-0.065*i);wait(v,0.5);
	gotoX(v,tmp,10);
	tmp=IDCurrent+1;click(v,0.2,0.633);click(v,0.2,0.633);gotoX(v,tmp,51);
	tmp=IDCurrent+1;click(v,0.478,0.454);click(v,0.478,0.454);gotoX(v,tmp,51);
	wait(v,1.0);open(v,workshop,false);
}

void script_CFirm(){//construction firm
	//construction firm is boring*3
}

void script_Museum(){//museum
	open(v,museum,true);click(v,0.2,0.6375);wait(v,1.0);
	for(int i=0;i<3;i++){deletePS(v,combinator,i);}
	int tmp=IDCurrent+1;movePS(v,equipped,0,combinator);
	for(int i=0;i<120;i++)movePS(v,equipped,i,equipped);
	movePS(v,combinator,0,equipped);wait(v,1.0);gotoX(v,tmp,3);
	tmp=IDCurrent+1;
	for(int i=119;i>=0;i--){storageFree(v,combinator);movePS(v,equipped,i-600,combinator,200);}
	for(int i=0;i<120;i++){movePS(v,equipped,i,combinator);movePS(v,combinator,i&1,equipped);}
	wait(v,1.0);gotoX(v,tmp,3);
	click(v,0.2,0.4);click(v,0.436,0.493);wait(v,2.0);open(v,museum,false);
}

void script_SoC(){//statue of cubos
	open(v,statueofcubos,true);click(v,0.2,0.63);scroll(v,0.5,0.5,0,1);click(v,0.275,0.6);
	int tmp=IDCurrent+1,tmp2=IDCurrent+1;
	scroll(v,0.69,0.5,0,0);click(v,0.87,0.126);gotoX(v,tmp+1,25);
	click(v,0.354,0.4);gotoX(v,tmp,5);
	tmp=IDCurrent+1;scroll(v,0.69,0.5,0,0);click(v,0.5,0.126);gotoX(v,tmp+1,25);
	click(v,0.04,0.4);gotoX(v,tmp,5);wait(v,1.0);gotoX(v,tmp2,1);
	open(v,statueofcubos,false);
}

int use16x9=0;
void drawPoint(double x,double y,int Use16x9=-1){//x,y are in [-1,1]
	if(Use16x9<0)Use16x9=use16x9;
	if(Use16x9){x/=16.0;y/=9.0;}
	scroll(v,0.5,0.5,0.5-x*0.5,0.5-y*0.315);
}
void drawLine(double x1,double y1,double x2,double y2,int steps,int Use16x9=-1){
	for(int i=1;i<=steps;i++)
		drawPoint(x1*(steps-i)/steps+x2*i/steps,y1*(steps-i)/steps+y2*i/steps, Use16x9);
}
void drawCircle(double x,double y,double xr,double yr,double theta1,double theta2,int steps,double rotate=0.0,int Use16x9=-1){
	if(yr<0)yr=-xr*yr;
	for(int i=1;i<=steps;i++){
		double theta=theta1*(steps-i)/steps+theta2*i/steps;
		double px=x+xr*cos(theta),py=y+yr*sin(theta);
		drawPoint(px*cos(rotate)-py*sin(rotate),px*sin(rotate)+py*cos(rotate),Use16x9);
	}
}

const double pi=acos(-1.0);
void script_Grid(){//infinity grid
	click(v,0.973,0.185);scroll(v,0.02,0.02,0.5,0.5);click(v,0.94,0.82);wait(v,0.5);
	
	drawLine(0,0,0,1,25);wait(v,1.0);
	int tmp=IDCurrent+1;
	drawCircle(0,0,1,-1,pi/2.0,pi*5.0/2.0,100);
	drawCircle(0,0,9.0/16.0,1,pi/2.0,pi*5.0/2.0,100);
	gotoX(v,tmp,2);//circle
	
	wait(v,0.5);drawLine(0,1,0,0,25);wait(v,1.0);
	tmp=IDCurrent+1;
	drawLine(0,0,1.0/4.0,1.0/2.0,10);
	drawCircle(0.5,0.0,sqrt(2)/4.0,-2,pi*3.0/4.0,-pi*3.0/4.0,45);
	drawLine(1.0/4.0,-1.0/2.0,-1.0/4.0,1.0/2.0,10);
	drawCircle(-0.5,0.0,sqrt(2)/4.0,-2,pi/4.0,pi*7.0/4.0,45);
	drawLine(-1.0/4.0,-1.0/2.0,0,0,10);
	gotoX(v,tmp,2);//inf

	use16x9=1;double dtmp=2.034444;
	wait(v,0.5);drawLine(0,0,0,6.325,32);wait(v,1.0);
	tmp=IDCurrent+1;
	drawCircle(0,0,10,5,dtmp,dtmp+pi,121,-pi/4);
	drawCircle(0,0,10,5,-dtmp,-dtmp+pi,121,pi/4);
	gotoX(v,tmp,2);//heart
	
	use16x9=0;
	wait(v,1.0);drawLine(-0.9,0.2,-0.8,0.8,30);drawLine(-0.8,0.8,-0.7,0.2,30);
	drawLine(-0.7,0.2,-0.6,0.8,30);drawLine(-0.6,0.8,-0.5,0.2,30);//M
	wait(v,0.5);drawLine(-0.4,0.2,-0.3,0.8,30);drawLine(-0.3,0.8,-0.2,0.2,30);
	drawLine(-0.35,0.5,-0.25,0.5,5);//A
	wait(v,0.5);drawLine(-0.1,0.8,-0.1,0.2,30);
	drawCircle(-0.1,0.5,0.2,0.3,pi/2.0,-pi/2.0,38);//D
	wait(v,0.5);drawLine(0.2,0.8,0.4,0.8,10);drawLine(0.2,0.5,0.4,0.5,10);
	drawLine(0.2,0.8,0.2,0.2,30);drawLine(0.2,0.2,0.4,0.2,10);//E
	wait(v,1.0);drawLine(0.5,0.8,0.5,0.2,30);
	drawCircle(0.5,0.65,0.15,-1,pi/2.0,-pi/2.0,24);
	drawCircle(0.5,0.35,0.15,-1,pi/2.0,-pi/2.0,24);//B
	wait(v,0.5);drawLine(0.7,0.8,0.8,0.5,16);drawLine(0.9,0.8,0.8,0.5,16);
	drawLine(0.8,0.5,0.8,0.2,15);//Y
	
	use16x9=1;
	wait(v,1.0);drawCircle(-12,-4.5,3,-1,pi/3,pi*5/3,69);//C
	wait(v,0.5);drawLine(-7.5,-2,-8,-7,25);drawLine(-8,-7,-5,-7,15);//L
	wait(v,0.5);drawLine(-3,-2,-3,-7,25);//1
	wait(v,0.5);drawLine(3,-2,1.645,-4.857,16);
	drawCircle(3,-5.5,1.5,-1,2.6987,2.6987+pi*2,47);//6
	wait(v,0.5);drawCircle(7.5,-3.5,1.5,-1,5.84,5.84+pi*2,47);
	drawLine(8.855,-4.143,7.5,-7,16);//9
	wait(v,0.5);drawLine(12,-2,11,-5,16);
	drawLine(11,-5,14.5,-5,18);drawLine(13,-2,13,-7,25);//4
	
	wait(v,1.0);drawLine(-15,7,-11,7,20);drawLine(-13,7,-13,2,25);//T
	wait(v,0.5);drawLine(-10,7,-10,2,25);
	drawLine(-10,4.5,-7,4.5,15);drawLine(-7,7,-7,2,25);//H
	wait(v,0.5);drawLine(-5,7,-2,2,29);drawLine(-2,7,-5,2,29);//X
	wait(v,1.0);drawLine(3,7,7,7,20);drawLine(5,7,5,2,25);//T
	wait(v,0.5);drawCircle(10,4.5,2,2.5,pi/2,pi*5/2,71);//O
	
	wait(v,1.0);drawLine(-14,7,-11,2,29);drawLine(-11,7,-14,2,29);//X
	wait(v,0.5);drawLine(-9,3.5,-6,3.5,15);drawCircle(-7.5,3.5,1.5,-1,0,pi*3/2,35);//e
	wait(v,0.5);drawLine(-4,4.5,-4,2,12);drawLine(-4,2,-4,4,10);
	drawCircle(-2.5,4,1.5,1,pi,0,20);drawLine(-1,4,-1,2,10);//n
	wait(v,0.5);drawCircle(2.5,3.5,1.5,-1,pi/2,pi*5/2,47);//o
	wait(v,0.5);drawLine(8.5,5,6.75,5,9);drawCircle(6.75,4.25,0.75,-1,pi/2,pi*3/2,12);
	drawLine(6.75,3.5,7.75,3.5,5);drawCircle(7.75,2.75,0.75,-1,pi/2,-pi/2,12);
	drawLine(7.75,2,6,2,9);//s
	
	wait(v,1.0);drawCircle(-13,-5.5,1.5,-1,0,pi*2,47);
	drawLine(-11.5,-5.5,-11.5,-2,17);drawLine(-11.5,-2,-11.5,-7,25);//d
	wait(v,0.5);drawCircle(-9,-4.5,1.5,2,pi/2,pi*5/2,55);//0
	wait(v,0.5);drawLine(-4,-4,-5.25,-4,9);drawCircle(-5.75,-4.75,0.75,-1,pi/2,pi*3/2,12);
	drawLine(-5.75,-5.5,-4.75,-5.5,5);drawCircle(-4.75,-6.25,0.75,-1,pi/2,-pi/2,12);
	drawLine(-4.75,-7,-6,-7,9);//s
	wait(v,0.5);drawLine(-3,-2,-3,-7,25);drawLine(-3,-7,-3,-5.5,7);
	drawCircle(-1.5,-5.5,1.5,-1,pi,-pi/2,35);drawLine(-1.5,-7,-3,-7,7);//b
	wait(v,0.5);drawCircle(2.5,-5.5,1.5,-1,pi/2,pi*5/2,47);//o
	wait(v,0.5);drawCircle(6.5,-5.5,1.5,-1,pi/2,pi*5/2,47);//o
	wait(v,0.5);drawLine(9,-5,11,-5,10);
	drawLine(10,-4,10,-6.5,12);drawCircle(10.5,-6.5,0.5,-1,-pi,0,8);//t
	wait(v,0.5);drawLine(14.5,-4,12.75,-4,9);drawCircle(12.75,-4.75,0.75,-1,pi/2,pi*3/2,12);
	drawLine(12.75,-5.5,13.75,-5.5,5);drawCircle(13.75,-6.25,0.75,-1,pi/2,-pi/2,12);
	drawLine(13.75,-7,12,-7,9);//s
	
	wait(v,1.0);drawPoint(0,0);wait(v,1.0);click(v,0.975,0.956);
}

void script_Final(){
	wait(v,1.0);int tmp=IDCurrent+1;
	open(v,statueofcubos,false);
	for(int i=towertesting;i<statueofcubos;i++){open(v,i,true);open(v,i,false);}
	open(v,statueofcubos,true);
	gotoX(v,tmp,4);
	scroll(v,0.69,0.5,0,0);for(int i=1;i<7;i++)click(v,0.87,0.126);
	click(v,0.69,0.126);
}

int main(){
	init();v.clear();
	encode1(v,"a/67/57c/223:01c");IDCurrent=3;
	click(v,0.8664,0.8069);wait(v,1.0);//warmup
	
	script_TT();
	script_Region();
	script_PP();
	script_Mine();
	script_Factory();
	script_HQ();
	script_Arcade();
	script_Lab();
	script_Shipyard();
	script_TP();
	script_Workshop();
	script_Museum();
	script_CFirm();
	script_SoC();
	script_Grid();
	script_Final();
	
	std::string cd="";decode2(cd,v);std::cout<<cd<<std::endl;
	std::string s=lib;encode2(s,v);std::cout<<s<<'\n'<<std::endl;
	std::cout<<cd.length()<<"->"<<v.size()<<"->"<<s.length()<<std::endl;
	return 0;
}

