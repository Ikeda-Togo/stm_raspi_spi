#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<wiringPiSPI.h>
#include<unistd.h>

using namespace std;

static const int CHANNEL=1;

int main()
{
	int fd, result;
	short deg;
	unsigned char mode[100] ;
	unsigned char buffer[100], id[100];

	cout << "Initializing" << endl ;

	fd=wiringPiSPISetup(CHANNEL,1000000);
	
	cout<<"Init result:" <<fd <<endl;
	
	while(1){
		printf("Please type mode:");
		scanf("%c",&mode[0]);
		result=wiringPiSPIDataRW(CHANNEL,mode,1);
		}
	
	
/*	unsigned char cnt =0;
	while(1){
		buffer[0]=cnt;
		cnt++;
		result=wiringPiSPIDataRW(CHANNEL,buffer,1);
		cout <<"result:"<<result<<"recieve:"<<int(buffer[0])<<endl;
		usleep(100000);
	
	}*/

}
