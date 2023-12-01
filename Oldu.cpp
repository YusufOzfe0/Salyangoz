	#include <iostream>
	using namespace std;
	
	int main(){
	
	int a,b=-1,c=0,d=0,t=0,z=0,kare;
	int sk=0,skk=0,skkk=0,skkkk=0;
	char bos=' ';
	cout<<"Bir sayi gir: ";
	cin>>a;
	int mat[a][a]={};
	kare=a*a;
	
	while(z==0){
		int k=0,kk=1,kkk=1,kkkk=2;
		k=sk+k;
		for(;((k<a)&&(z==0));k++){
			t++;
			b++;
			mat[c][b]=t;	
			if (t==kare){
				z=1;
			}		
		}
		sk=sk+2;
		kk=skk+kk;
		for(;(kk<a)&&(z==0);kk++)	{
			t++;
			c++;
			mat[c][b]=t;
			if (t==kare){
				z=1;
			}	
				
		}
		skk=skk +2;
		kkk=skkk+kkk;
		for(;((kkk<a)&&(z==0));kkk++){
			t++;
			b=b-1;
			mat[c][b]=t;	
			if (t==kare){
				z=1;
			}		
		}
		skkk=skkk+2;
		kkkk=skkkk+kkkk;
		for(;((kkkk<a)&&(z==0));kkkk++){
			t++;
			c=c-1;
			mat[c][b]=t;	
			if (t==kare){
				z=1;
			}		
		}
		skkkk=skkkk+2;
		
	}
	
	int sutun=0,satir=0;
	while(!(sutun==a)){
		if(mat[sutun][satir]<10){
			cout<<"   ";
		}
		else if(mat[sutun][satir]<100){
			cout<<"  ";
		}
		else if(mat[sutun][satir]<1000){
			cout<<" ";
		}
	cout<<mat[sutun][satir]<<" ";
	if(satir==a-1){
		satir=0;
		sutun++;
		cout<<endl;
		}
	else{
		satir++;
	}	
}	
	return 0;
}
