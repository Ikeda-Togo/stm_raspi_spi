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
	
		switch(mode[0]){
			case 'p':
			{
				result=wiringPiSPIDataRW(CHANNEL,mode,1);
				printf("position mode\n");
				printf("please type id:");
				scanf("%d",&id[0]);
				result=wiringPiSPIDataRW(CHANNEL,id,1);
				printf("type position:");
				scanf("%d",&deg);
				unsigned char deg_l[1] ={(deg)&0x00FF};
				unsigned char deg_h[1] ={(deg>>8)&0x00FF};
				result=wiringPiSPIDataRW(CHANNEL,deg_l,1);
				usleep(100000);
				result=wiringPiSPIDataRW(CHANNEL,deg_h,1);
				break;
			}
				
			case 'r':
				break;
				
			default:
				break;
			}
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


