#include<iostream>
#include<cmath>
using namespace std;
void swap(float *xp, float *yp)  
{  
    float temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
int main() 
{
	int i,j,k,t,min_idx;
	int match,not_match,correct=0,in_correct=0;
	cout<<"enter k : "<<endl;
	cin>>k;
	float dist,train[120][6],test[30][5];	// 6th column in train for distance
	float iris[150][4]={5.1,3.5,1.4,0.2,
			4.9,3.0,1.4,0.2,
			4.7,3.2,1.3,0.2,
			4.6,3.1,1.5,0.2,
			5.0,3.6,1.4,0.2,
			5.4,3.9,1.7,0.4,
			4.6,3.4,1.4,0.3,
			5.0,3.4,1.5,0.2,
			4.4,2.9,1.4,0.2,
			4.9,3.1,1.5,0.1,
			5.4,3.7,1.5,0.2,
			4.8,3.4,1.6,0.2,
			4.8,3.0,1.4,0.1,
			4.3,3.0,1.1,0.1,
			5.8,4.0,1.2,0.2,
			5.7,4.4,1.5,0.4,
			5.4,3.9,1.3,0.4,
			5.1,3.5,1.4,0.3,
			5.7,3.8,1.7,0.3,
			5.1,3.8,1.5,0.3,
			5.4,3.4,1.7,0.2,
			5.1,3.7,1.5,0.4,
			4.6,3.6,1.0,0.2,
			5.1,3.3,1.7,0.5,
			4.8,3.4,1.9,0.2,
			5.0,3.0,1.6,0.2,
			5.0,3.4,1.6,0.4,
			5.2,3.5,1.5,0.2,
			5.2,3.4,1.4,0.2,
			4.7,3.2,1.6,0.2,
			4.8,3.1,1.6,0.2,
			5.4,3.4,1.5,0.4,
			5.2,4.1,1.5,0.1,
			5.5,4.2,1.4,0.2,
			4.9,3.1,1.5,0.1,
			5.0,3.2,1.2,0.2,
			5.5,3.5,1.3,0.2,
			4.9,3.1,1.5,0.1,
			4.4,3.0,1.3,0.2,
			5.1,3.4,1.5,0.2,
			5.0,3.5,1.3,0.3,
			4.5,2.3,1.3,0.3,
			4.4,3.2,1.3,0.2,
			5.0,3.5,1.6,0.6,
			5.1,3.8,1.9,0.4,
			4.8,3.0,1.4,0.3,
			5.1,3.8,1.6,0.2,
			4.6,3.2,1.4,0.2,
			5.3,3.7,1.5,0.2,
			5.0,3.3,1.4,0.2,
			7.0,3.2,4.7,1.4,
			6.4,3.2,4.5,1.5,
			6.9,3.1,4.9,1.5,
			5.5,2.3,4.0,1.3,
			6.5,2.8,4.6,1.5,
			5.7,2.8,4.5,1.3,
			6.3,3.3,4.7,1.6,
			4.9,2.4,3.3,1.0,
			6.6,2.9,4.6,1.3,
			5.2,2.7,3.9,1.4,
			5.0,2.0,3.5,1.0,
			5.9,3.0,4.2,1.5,
			6.0,2.2,4.0,1.0,
			6.1,2.9,4.7,1.4,
			5.6,2.9,3.6,1.3,
			6.7,3.1,4.4,1.4,
			5.6,3.0,4.5,1.5,
			5.8,2.7,4.1,1.0,
			6.2,2.2,4.5,1.5,
			5.6,2.5,3.9,1.1,
			5.9,3.2,4.8,1.8,
			6.1,2.8,4.0,1.3,
			6.3,2.5,4.9,1.5,
			6.1,2.8,4.7,1.2,
			6.4,2.9,4.3,1.3,
			6.6,3.0,4.4,1.4,
			6.8,2.8,4.8,1.4,
			6.7,3.0,5.0,1.7,
			6.0,2.9,4.5,1.5,
			5.7,2.6,3.5,1.0,
			5.5,2.4,3.8,1.1,
			5.5,2.4,3.7,1.0,
			5.8,2.7,3.9,1.2,
			6.0,2.7,5.1,1.6,
			5.4,3.0,4.5,1.5,
			6.0,3.4,4.5,1.6,
			6.7,3.1,4.7,1.5,
			6.3,2.3,4.4,1.3,
			5.6,3.0,4.1,1.3,
			5.5,2.5,4.0,1.3,
			5.5,2.6,4.4,1.2,
			6.1,3.0,4.6,1.4,
			5.8,2.6,4.0,1.2,
			5.0,2.3,3.3,1.0,
			5.6,2.7,4.2,1.3,
			5.7,3.0,4.2,1.2,
			5.7,2.9,4.2,1.3,
			6.2,2.9,4.3,1.3,
			5.1,2.5,3.0,1.1,
			5.7,2.8,4.1,1.3,
			6.3,3.3,6.0,2.5,
			5.8,2.7,5.1,1.9,
			7.1,3.0,5.9,2.1,
			6.3,2.9,5.6,1.8,
			6.5,3.0,5.8,2.2,
			7.6,3.0,6.6,2.1,
			4.9,2.5,4.5,1.7,
			7.3,2.9,6.3,1.8,
			6.7,2.5,5.8,1.8,
			7.2,3.6,6.1,2.5,
			6.5,3.2,5.1,2.0,
			6.4,2.7,5.3,1.9,
			6.8,3.0,5.5,2.1,
			5.7,2.5,5.0,2.0,
			5.8,2.8,5.1,2.4,
			6.4,3.2,5.3,2.3,
			6.5,3.0,5.5,1.8,
			7.7,3.8,6.7,2.2,
			7.7,2.6,6.9,2.3,
			6.0,2.2,5.0,1.5,
			6.9,3.2,5.7,2.3,
			5.6,2.8,4.9,2.0,
			7.7,2.8,6.7,2.0,
			6.3,2.7,4.9,1.8,
			6.7,3.3,5.7,2.1,
			7.2,3.2,6.0,1.8,
			6.2,2.8,4.8,1.8,
			6.1,3.0,4.9,1.8,
			6.4,2.8,5.6,2.1,
			7.2,3.0,5.8,1.6,
			7.4,2.8,6.1,1.9,
			7.9,3.8,6.4,2.0,
			6.4,2.8,5.6,2.2,
			6.3,2.8,5.1,1.5,
			6.1,2.6,5.6,1.4,
			7.7,3.0,6.1,2.3,
			6.3,3.4,5.6,2.4,
			6.4,3.1,5.5,1.8,
			6.0,3.0,4.8,1.8,
			6.9,3.1,5.4,2.1,
			6.7,3.1,5.6,2.4,
			6.9,3.1,5.1,2.3,
			5.8,2.7,5.1,1.9,
			6.8,3.2,5.9,2.3,
			6.7,3.3,5.7,2.5,
			6.7,3.0,5.2,2.3,
			6.3,2.5,5.0,1.9,
			6.5,3.0,5.2,2.0,
			6.2,3.4,5.4,2.3,
			5.9,3.0,5.1,1.8,
			};
	int label[150]={0};
	for(i=0;i<50;i++){
		label[i+50]=1;
		label[i+100]=2;
	}
	// separating training set
	for(i=0;i<40;i++){
		//	class 1 == setosa
		train[i][0]=iris[i][0];
		train[i][1]=iris[i][1];
		train[i][2]=iris[i][2];
		train[i][3]=iris[i][3];
		train[i][4]=0;
		//	class 1 == versicolor
		train[i+40][0]=iris[i+50][0];
		train[i+40][1]=iris[i+50][1];
		train[i+40][2]=iris[i+50][2];
		train[i+40][3]=iris[i+50][3];
		train[i+40][4]=1;
		//	class 1 == virginica
		train[i+80][0]=iris[i+100][0];
		train[i+80][1]=iris[i+100][1];
		train[i+80][2]=iris[i+100][2];
		train[i+80][3]=iris[i+100][3];
		train[i+80][4]=2;
	}
	// separating testing set
	for(i=0;i<10;i++){
		//	class 1 == setosa
		test[i][0]=iris[i+40][0];
		test[i][1]=iris[i+40][1];
		test[i][2]=iris[i+40][2];
		test[i][3]=iris[i+40][3];
		test[i][4]=0;
		//	class 1 == versicolor
		test[i+10][0]=iris[i+90][0];
		test[i+10][1]=iris[i+90][1];
		test[i+10][2]=iris[i+90][2];
		test[i+10][3]=iris[i+90][3];
		test[i+10][4]=1;
		//	class 1 == virginica
		test[i+20][0]=iris[i+140][0];
		test[i+20][1]=iris[i+140][1];
		test[i+20][2]=iris[i+140][2];
		test[i+20][3]=iris[i+140][3];
		test[i+20][4]=2;
	}

	for(i=0;i<30;i++){
		for(j=0;j<120;j++){
			dist=sqrt(pow((test[i][0]-train[j][0]),2)+pow((test[i][1]-train[j][1]),2)+pow((test[i][2]-train[j][2]),2)+pow((test[i][3]-train[j][3]),2));
			train[j][5]=dist;
		}
		
		for (j = 0; j < 119; j++)  
		{  
			match=0;
			not_match=0;
		    min_idx = j;  
		    for (t = j+1; t < 120; t++)  
		    if (train[t][5] < train[min_idx][5])  
		        min_idx = t;  
	  
		    swap(&train[min_idx][0], &train[j][0]);
		    swap(&train[min_idx][1], &train[j][1]);
		    swap(&train[min_idx][2], &train[j][2]);
		    swap(&train[min_idx][3], &train[j][3]); 
		    swap(&train[min_idx][4], &train[j][4]);
		    swap(&train[min_idx][5], &train[j][5]); 
    	}  
		for(j=0;j<k;j++){
			if(train[j][4]==test[i][4])
				match++;
			else
				not_match++;
		}
		if(match>not_match)
			correct++;
		else
			in_correct++;
	}
	cout<<"accuracy = "<<float(correct*100)/30<<endl;

	return 0; 
} 
