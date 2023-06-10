#include<stdio.h>
#include<math.h>
int length(char c[50]){
	int i=-1;
	do{
		
		i++;
	}while(c[i]!='\0');
	return i;
}
int conversion(char c[50],int *p){
	int k=1;
	*p=0;
	for(int i=0;i<length(c);i++){
		*p+=((int)c[length(c)-i-1]-(int)'0')*k;
		if(c[length(c)-i-1]=='-'){
			*p-=((int)'-'-(int)'0')*k;
			*p*=-1;
		}
		k*=10;
	}
}
int checkup(char tab[50],char c[50]){
	int i=-1;
	int ok=0;
do{
	i++;
	for(int j=0;j<10;j++){
	
	if(c[i]==tab[j]){
		ok=1;
	}}
}while((c[i]!='\0')&&(ok==0));
return ok;
}




int insert(char c[50],char diff[50],int p){
	int i=length(diff),l=0;
	do{
		l++;
		i=length(diff);
	do{
	 diff[i]=diff[i-1];
	 
	 i--;
	}while(i!=p);
	diff[length(diff)]='\0';
	diff[p]=c[length(c)-l];
	}while(l<length(c));
	
	
	
}
int main(){
	int a;
	int tabco[3];
	int *p=&a;
char c[50];
	char diff[50]="y''+y' +y=p(x)e(x)";
	char co[50]={'0','1','2','3','4','5','6','7','8','9'};
for(int i=0;i<length(diff)-6;i+=5+length(c)-1){

	
	do{ c[0]='\0';
		printf("Give coefficients one after the other \n");
		gets(c);
	}while (checkup(co,c)==0);
	insert(c,diff,i);puts(diff);
	conversion(c,p);
	tabco[i/5]=a;
	
	
}
int dt=(tabco[1]*tabco[1])-4*tabco[0]*tabco[2];
	if(dt==0){
	int x=-tabco[1]/2*tabco[0];printf("yh=(Ax+B)e(%d)",x);}
	else if(dt>0){
		float x1=(-tabco[1]-sqrt(dt))/(2*tabco[0]);
		float x2=(-tabco[1]+sqrt(dt))/(2*tabco[0]);
		if(x2==int(x2)){
		
		printf("yh=Ae(%.2fx)+Be(%.0fx) ",x1,x2);}
		else if(x1==int(x1)){
			printf("yh=Ae(%.0fx)+Be(%.2fx) ",x1,x2);
		}
		else if(x2==int(x2)&&x1==int(x1)){
			printf("yh=Ae(%.0fx)+Be(%.0fx) ",x1,x2);
		}
		else{
			printf("yh=Ae(%.2fx)+Be(%.2fx) ",x1,x2);
		}
	
}
else{
	float m=(float)(sqrt(abs(dt)))/(float)(2*tabco[0]),n=(float)(-tabco[1])/(float)(2*tabco[0]);
	if(m==(int)m){
	printf("yh=e((%.0d/%.0d)x)[Acos( %.0dx )+Bsin(%.0dx)]",-tabco[1],2*tabco[0],m,m);
		
	}
	else if(n==(int)n){
		
	printf("yh=e(%.0fx)[Acos( (sqrt(%d) /%d)x )+Bsin((sqrt(%d) /%d)x)]",n,abs(dt),2*tabco[0],abs(dt),2*tabco[0]);
	}
	else{

	printf("yh=e((%d/%d)x)[Acos( (sqrt(%d) /%d)x )+Bsin((sqrt(%d) /%d)x)]",-tabco[1],2*tabco[0],abs(dt),2*tabco[0],abs(dt),2*tabco[0]);
}
}}
