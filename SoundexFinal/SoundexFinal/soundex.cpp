#include <iostream>
using namespace std;
void main(){
	char word[50];
	cout <<"Enter Word : ";
	cin>>word;
	for(int i=0;i<50&&word[i]!=NULL;i++){
		word[i]=toupper(word[i]);
	}
	char cutedWord[30],numofWord[30];
	int W=0,i=0;
	for(;(i<30)&&(word[i]>=65&&word[i]<=90);i++){
		if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'||word[i]=='Y'||word[i]=='H'||word[i]=='W'){

		}else if(word[i]!=NULL){
			cutedWord[W]=word[i];
			W++;
		}
	}
	cout<<"1.Cut AEIOU and THW.\n";
	cout<<"Result = ";
	for(int b=0;b<W;b++){
		cout<<cutedWord[b];
	}
	cout<<"\n2.Cut adjust character.\n";
	cout<<"Result = ";
	int A=0,V=0;
	char cutAdjust[20];
	for(int c=0;c<W;c++){
			while(cutedWord[c]==cutedWord[c+1]){
				c++;
			}
			cutAdjust[A]=cutedWord[c];
			cout<<cutAdjust[A];
			A++;
	}	
	for(int b=0;b<A;b++){
			if(cutAdjust[b]=='B'||cutAdjust[b]=='P'||cutAdjust[b]=='F'|cutAdjust[b]=='V'){
				numofWord[V]='1';
			}else if(cutAdjust[b]=='C'||cutAdjust[b]=='S'||cutAdjust[b]=='K'||cutAdjust[b]=='G'||cutAdjust[b]=='J'||cutAdjust[b]=='Q'||cutAdjust[b]=='X'||cutAdjust[b]=='Z'){
				numofWord[V]='2';
			}else if(cutAdjust[b]=='D'||cutAdjust[b]=='T'){
				numofWord[V]='3';
			}else if(cutAdjust[b]=='L'){
				numofWord[V]='4';
			}else if(cutAdjust[b]=='M'||cutAdjust[b]=='N'){
				numofWord[V]='5';
			}else if(cutAdjust[b]=='R'){
				numofWord[V]='6';
			}
			V++;
	}
	cout<<"\n3.Convert to numeric code.\n";
	cout<<"Result = ";
	for(int b=0;b<V;b++){
		cout<<numofWord[b];
	}
	int N=0;
	char cutNum[20];
	if(word[0]!=cutAdjust[0]){
		cutNum[0]=word[0];
		N++;
	}
		for(int c=0;c<V;c++){
			while(numofWord[c]==numofWord[c+1]){
				c++;
			}
			cutNum[N]=numofWord[c];
			N++;
		}
	//ตำแหน่งแรก
	if(word[0]==cutAdjust[0]){
		cutNum[0]=word[0];
	}
	cout<<"\n4.Cut the same numeric code.\n";
	cout<<"Result = ";
	for(int b=0;b<N;b++){
		cout<<cutNum[b];
	}
	//ตำแหน่งสอง
	/*
	if(word[0]==cutAdjust[0]){
		cutNum[0]=word[0];
	}*/
	int adzro =0;
	while(N<4){
		cutNum[N]='0';
		N++;
		adzro++;
	}
	cout<<"\n5.Add Zero.\n";
	cout<<"Result = "<<adzro<<endl;
	cout<<"\n Output = ";
	for(int b=0;b<4;b++){
		cout<<cutNum[b];
	}
	cout<<"\n";
}