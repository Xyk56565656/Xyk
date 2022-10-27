ifstream stream_read,sp;
stream_read.open(filename.c_str(),ios::in); 
sp.open(filename.c_str(),ios::in); 
if(!stream_read)
{
	cout <<"Error,please check the path of file and try again!" << endl;
	exit(0); 
}
string str;
int kwnum=32,numt=0; ;
int count[kwnum] = {0};  
while (getline (stream_read, str)){
	for(int i=0;i<kwnum;i++)
	{
		int pos; 
		while(true)
		{
			if(str.find(keyword[i]) != -1)
			{
				pos = str.find(keyword[i]);
				count[i]++;
				str = str.substr(pos + keyword[i].length(),str.length() - pos - keyword[i].length());
			} 
			else
				break;
		}
	}
}

int struc[count[index[0]]]={0};
while(true){
	if(str.find(keyword[index[1]]) != -1){ 
		struc[x[0]]++;
		break;
	}
	if(str.find(keyword[index[2]]) != -1){
		x[0]++;
		break;
	}else break;
}

string pick[3]={"else if", "if","else"};
if(str.find(pick[1]) != -1&& str.find(pick[0]) == -1){
	x[1]++;
	break;
}

int divide[x[1]];
......
int Copy_array[x[1]];
for (int i=0;i<x[1]-1;i++){
	Copy_array[i]=divide[i];
}
*divide=*Copy_array;
while(true){
	if(str.find(keyword[index[3]]) != -1){
		x[2]++;
		break;
	}
	else break;			
	if(str.find(pick[0]) != -1){
		pos = str.find(pick[0]);
		divide[x[2]]++;
	}else break;	
}	
for(int m=0;m<x[1];m++){
	if(divide[m]==0){
		eln++;
	}
	else{
		ely++;				
	}	
}
