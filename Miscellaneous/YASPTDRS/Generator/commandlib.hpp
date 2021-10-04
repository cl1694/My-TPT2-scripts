#include<bits/stdc++.h>
#ifndef TPT2_Mega_Script_lib
#define TPT2_Mega_Script_lib
std::string lib="p.~%u_&;t[*r']n>qi4$(^7`29:/,xe!3d)vz#601h5a@<ogw=f8m|?skj+by-cl";
std::string code="abcdefghijklo+012345678:/";
int indexof[128],iscode[128];
int IDCurrent=0;

void init(){
	for(int i=0,l=lib.length();i<l;i++)indexof[int(lib[i])]=i;
	for(int i=0,l=code.length();i<l;i++)iscode[indexof[int(code[i])]]=1;
}
void decode1(std::vector<bool>& v,const std::string& s){//base64->binary
	for(auto c:s){
		int d=indexof[int(c)];
		for(int i=5;i>=0;i--)v.push_back(((d>>i)&1)^1);
	}
}
void decode2(std::string& s,const std::vector<bool> v){//binary->command
	int cur=1;
	for(auto bit:v){
		cur=cur*2+int(bit);
		if(!iscode[cur])continue;
		s+=lib[cur];cur=1;
	}
}
void vpush(std::vector<bool>& v,const char& c){
	int d=indexof[int(c)];
	for(int i=5;i>=0;i--)if(d>=1<<(i+1))v.push_back(((d>>i)&1));
}
void encode1(std::vector<bool>& v,const std::string& s){//command->binary
	for(auto c:s)vpush(v,c);
}
void encode2(std::string& s,std::vector<bool>& v){//binary->base64
	int l=v.size()%6;if(l)l=6-l;
	for(int i=1;i<=std::min(l,4);i++)v.push_back(true);
	if(l==5)v.push_back(false);//fit to a multiple of 6 using wait(0.0)
	for(unsigned i=0;i<v.size();i+=6){
		int c=0;for(int j=0;j<6;j++)c=c*2+int(v[i+j]);
		s+=lib[c^0x3f];
	}
}

void printI(std::vector<bool>& v,int val){
	vpush(v,':');if(val==0)return;
	bool neg=(val<0);if(val<0)val=-val;
	int bit=0;while(bit<30&&(1<<(bit+3))<=val)bit+=3;
	while(bit>=0){
		vpush(v,'0'+((val>>bit)&7));bit-=3;
	}
	if(neg)vpush(v,'8');
}
void printD(std::vector<bool>& v,double val,int maxDigit=3){
	vpush(v,'/');
	if(val<=0.0)return;if(val>=1.0){vpush(v,'8');return;}
	int digit=maxDigit,valI=floor(val*double(1<<(maxDigit*3))+0.5);
	while(!(valI&7)){digit--;valI>>=3;}
	for(int i=0;i<digit;i++){vpush(v,'0'+(valI&7));valI>>=3;}
}

//1
void click(std::vector<bool>& v,double x,double y){
	IDCurrent++;vpush(v,'a');
	printD(v,x);printD(v,y);
}
//2
void gotoX(std::vector<bool>& v,int goal,int limit){
	IDCurrent++;vpush(v,'b');
	printI(v,goal);printI(v,limit);
}
//3
void wait(std::vector<bool>& v,double time){
	IDCurrent++;vpush(v,'c');
	if(time<0)time=0;
	int pow8=0;while(time>=1){time/=8.0;pow8++;}
	printD(v,time);printI(v,pow8);
}
//4
void open(std::vector<bool>& v,int window,bool open){
	IDCurrent++;vpush(v,'d');
	printI(v,window);printI(v,int(open));
}
//5
void scroll(std::vector<bool>& v,double posx,double posy,double scrollx,double scrolly){
	IDCurrent++;vpush(v,'e');
	printD(v,posx);printD(v,posy);printD(v,scrollx);printD(v,scrolly);
}
//6
void restart(std::vector<bool>& v){
	IDCurrent++;vpush(v,'f');
}
//7
void switchTab(std::vector<bool>& v,int tab){
	IDCurrent++;vpush(v,'g');
	printI(v,tab);
}
//8
void storageFree(std::vector<bool>& v,int inv){
	IDCurrent++;vpush(v,'h');
	printI(v,inv);
}
//9
void movePS(std::vector<bool>& v,int from,int slot,int to,int usetmp=0){
	IDCurrent++;vpush(v,'i');
	printI(v,from);printI(v,slot);printI(v,to);printI(v,usetmp);
}
//10
void deletePS(std::vector<bool>& v,int inv,int slot,int usetmp=0){
	IDCurrent++;vpush(v,'j');
	printI(v,inv);printI(v,slot);printI(v,usetmp);
}
//11
void unused_k(std::vector<bool>& v){
	IDCurrent++;vpush(v,'k');
}
//12
void unused_l(std::vector<bool>& v){
	IDCurrent++;vpush(v,'l');
}
//13
void unused_o(std::vector<bool>& v){
	IDCurrent++;vpush(v,'o');
}
//14
void unused_plus(std::vector<bool>& v){
	IDCurrent++;vpush(v,'+');
}

//building list
const int towertesting=1;
const int powerplant=2;
const int mine=3;
const int factory=4;
const int headquarters=5;
const int arcade=6;
const int laboratory=7;
const int shipyard=8;
const int tradingpost=9;
const int workshop=10;
const int museum=11;
const int constructionfirm=12;
const int statueofcubos=13;
//museum list
const int inventory=1;
const int equipped=2;
const int combinator=3;
const int cuboscube=4;

#endif
