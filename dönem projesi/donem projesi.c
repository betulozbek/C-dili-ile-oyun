#include <stdio.h>     
#include <stdlib.h>    
#include <time.h>     
#include <conio.h>    
#include <unistd.h> 
//1=oyuncu 5=elmas 6=muhafız






int main() {
srand(time(NULL)); 
int matris[10][10]={0};
int ekonum[5][2]; 
int mkonum[5][2]; 
int x=0,y=0;
int p,r,t,b,i,j;
int can =0;
int elmas=0;

oyun:

for(t=0;t<5;) //Elmasların konumunu atama
{
	int m,n;
	yeni:
	m=rand()%10;
	n=rand()%10;
	
	if(matris[m][n]!=1 && matris[m][n]!=5  )
	{
		matris[m][n]=5;
		ekonum[t][0]=m;
		ekonum[t][1]=n;
	}
		t++;
		
}



int c;
	for(y=0;y<5;y++){         //Muhafızların konumunu atama
		p=ekonum[y][0];
		r=ekonum[y][1];
		
		d1:
		c=rand()%2;	
		
		if(p==0 && r==0 ){
		switch(c){
				case 0:	if(matris[p+1][r]!=5 && matris[p+1][r]!=6  &&  matris[p+1][r]!=1 )	
				      	{ 
				        mkonum[y][0]=p+1; mkonum[y][1]=r; matris[p+1][r]=6;
				        }	
				        else{
				        goto d1; 
						}   break;
				case 1: if(matris[p+1][r+1]!=5 && matris[p+1][r+1]!=6 &&  matris[p+1][r+1]!=1 )
				     	{ 
				        mkonum[y][0]=p+1; mkonum[y][1]=r+1;matris[p+1][r+1]=6;
				        }
				    	else{
					    goto d1;
						 }   break;
				case 2: if(matris[p][r+1]!=5   && matris[p][r+1]!=6   &&  matris[p][r+1]!=1 )	
					 	{
				        mkonum[y][0]=p; mkonum[y][1]=r+1; matris[p][r+1]=6; 
				        }
						 else{
				    	goto d1; 
						}   break; 
		}
	}
		
		else if(p==0 && r==9){
		switch(c){
			    case 0:	if(matris[p+1][r]!=5 && matris[p+1][r]!=6  &&  matris[p+1][r]!=1 )	
					    { 
				         mkonum[y][0]=p+1; mkonum[y][1]=r; matris[p+1][r]=6;
				        }	
				        else{
				        goto d1;
						 }   break;
			
		     	case 1: if(matris[p][r-1]!=5   && matris[p][r-1]!=6   &&  matris[p][r-1]!=1 )	
				     	{ 
				        mkonum[y][0]=p; mkonum[y][1]=r-1;  matris[p][r-1]=6;
				        }
					    else{
				        goto d1; 
						}   break;
		
		    	case 2: if(matris[p+1][r-1]!=5   && matris[p+1][r-1]!=6   &&  matris[p+1][r-1]!=1 )	
				     	{ 
				        mkonum[y][0]=p+1; mkonum[y][1]=r-1; matris[p+1][r-1]=6; 
				        } 
						else{
				        goto d1; 
						}   break;
}
	}
		else if(p==9 && r==0){
		switch(c){
		     	case 0:	if(matris[p][r+1]!=5 && matris[p][r+1]!=6  &&  matris[p][r+1]!=1 )	
				 	    { 
				        mkonum[y][0]=p; mkonum[y][1]=r+1;   matris[p][r+1]=6;
				        }	
				        else{
				        goto d1; 
				        }   break;
		
		    	case 1: if(matris[p-1][r+1]!=5   && matris[p-1][r+1]!=6   &&  matris[p-1][r+1]!=1 )	
				     	{ 
				        mkonum[y][0]=p-1; mkonum[y][1]=r+1;  matris[p-1][r+1]=6;
				        } 
				        else{
				        goto d1;
				        }   break;
		
		    	case 2: if(matris[p-1][r]!=5   && matris[p-1][r]!=6   &&  matris[p-1][r]!=1 )	
					    { 
				        mkonum[y][0]=p-1; mkonum[y][1]=r;  matris[p-1][r]=6;
				        } 
				        else{
				        goto d1;
				        }   break;
	}
}
		
			else if(p==9 && r==9){
				switch(c){
			case 0:	if(matris[p][r-1]!=5 && matris[p][r-1]!=6  &&  matris[p][r-1]!=1 )		{ 
				 matris[p][r-1]=6; mkonum[y][0]=p; mkonum[y][1]=r-1; 
				  }	
				  else{
				  goto d1; }   break;
		
			case 1: if(matris[p-1][r-1]!=5   && matris[p-1][r-1]!=6   &&  matris[p-1][r-1]!=1 )		{ 
				 matris[p-1][r-1]=6;  mkonum[y][0]=p-1; mkonum[y][1]=r-1; 
				   } else{
				   goto d1; }   break;
		
			case 2: if(matris[p-1][r]!=5   && matris[p-1][r]!=6   &&  matris[p-1][r]!=1 )		{ 
				 matris[p-1][r]=6;  mkonum[y][0]=p-1; mkonum[y][1]=r; 
				   } else{
				   goto d1; }   break;
	}
}
		
		
		
		else{
			
			
		git:
			b=rand()%7;
			switch(b){
		
				case 0:	if(matris[p+1][r]!=5 && matris[p+1][r]!=6  &&  matris[p+1][r]!=1 )		{ 
				 mkonum[y][0]=p+1; mkonum[y][1]=r; matris[p+1][r]=6;
				  }	
				  else{
				  goto git;  }   break;
				case 1: if(matris[p+1][r-1]!=5 && matris[p+1][r-1]!=6 &&  matris[p+1][r-1]!=1 )	{  
			     mkonum[y][0]=p+1; mkonum[y][1]=r-1; 	matris[p+1][r-1]=6;
				}
					else{
					goto git; }   break;
				case 2: if(matris[p+1][r+1]!=5 && matris[p+1][r+1]!=6 &&  matris[p+1][r+1]!=1 )	{ 
				 mkonum[y][0]=p+1; mkonum[y][1]=r+1;matris[p+1][r+1]=6;
				  }
				  	else{
					  goto git; }   break;
				case 3: if(matris[p-1][r+1]!=5 && matris[p-1][r+1]!=6 &&  matris[p-1][r+1]!=1 )	{ 
				 mkonum[y][0]=p-1; mkonum[y][1]=r+1;matris[p-1][r+1]=6;
				  }	
				  else{
				  goto git; }   break;
				case 4: if(matris[p-1][r-1]!=5 && matris[p-1][r-1]!=6 &&  matris[p-1][r-1]!=1 )	{ 
				mkonum[y][0]=p-1; mkonum[y][1]=r-1;matris[p-1][r-1]=6;
				  }	else{
				  goto git; }   break;
				case 5: if(matris[p-1][r]!=5   && matris[p-1][r]!=6   &&  matris[p-1][r]!=1 )	{ 
				  mkonum[y][0]=p-1; mkonum[y][1]=r; matris[p-1][r]=6;
				   } else{
				   goto git; }   break;
				case 6: if(matris[p][r+1]!=5   && matris[p][r+1]!=6   &&  matris[p][r+1]!=1 )		{
		          mkonum[y][0]=p; mkonum[y][1]=r+1; matris[p][r+1]=6;
				    } else{
					goto git; }   break;
				case 7: if(matris[p][r-1]!=5   && matris[p][r-1]!=6   &&  matris[p][r-1]!=1 )		{ 
				  mkonum[y][0]=p; mkonum[y][1]=r-1;matris[p][r-1]=6 ;
				   } else{
				   goto git; }   break;
		
		}
		

	}
}
	
	
	int oyuncusatir=2,oyuncusutun=4;
	don:
	for(i=0;i<10;i++)                        //Oyun tahtasını bastırma
{
	for(j=0;j<10;j++)
	{
		if(i==oyuncusatir && j==oyuncusutun){
    	matris[i][j]=1;
    }
    	else{
    	matris[i][j]=0;
        } 
		printf("%d ",matris[i][j]);
		
	}
	printf("\n");
}


	for(t=0;t<5;t++){               //Elmasların oyuncuya olan uzaklıgını yazdırma
	if(ekonum[t][0]<oyuncusatir){        
	x=oyuncusatir-ekonum[t][0];
	}
	else{
	x=ekonum[t][0]-oyuncusatir;
    }
    if(ekonum[t][1]<oyuncusutun) {
    y=oyuncusutun-ekonum[t][1];
	} 
    else{
    y=ekonum[t][1]-oyuncusutun;
	}
	if(ekonum[t][0]!=30){
	printf("%d.elmasa uzaklik:%d\n",t+1,x+y);
	
	}
}

	
  
int h;                  
                          
 for(h=0;h<5;h++)          
   {
		 if(ekonum[h][0]==oyuncusatir && ekonum[h][1]==oyuncusutun){
		 	if(ekonum[h][0]!=30){
		 		printf("Elmaslarin birini buldunuz.");
				ekonum[h][0]=30;
				ekonum[h][1]=30;
	    		elmas++;
			 }
	}
	
}


   if(elmas==5){
	  printf("TEBRIKLER.TUM ELMASLARI BULDUNUZ.\n");
	  system ("pause"); //programı durdurmak
	  system ("cls"); // konsolu temizlemek
	}
	



	
	int g;	 
	for(g=0;g<5;g++){
	

	if(mkonum[g][0]==oyuncusatir && mkonum[g][1]==oyuncusutun){
		can++;
		printf("Muhafiza denk geldiniz.\n%d caniniz gitti.\n",can);
		sleep(1); //bekleme işlemi
		oyuncusatir=2;
		oyuncusutun=4;
	system("cls");
	goto don;
		
		
	}
    }
    
    if(can==3){
		printf("CANLARINIZ BITTI.\nTEKRAR DENEYIN.");
		 system ("pause");
	     system ("cls");
	}
	



	
	int a,z;                //Yön tuşları


    for(a=0;a<10;a++){
	for(z=0;z<10;z++){
		
	if(matris[a][z]==1){
	

    int yon;
    yon=getch();
    switch(yon){
	
	case 's':
		if(oyuncusatir==9){
			system ("cls");
		break;
	}
	oyuncusatir++;
	
		matris[oyuncusatir][oyuncusutun]=1;
	matris[oyuncusatir-1][oyuncusutun]=0;system ("cls");	goto don;
	break;



	
	case 'w':
	if(oyuncusatir==0){
		system ("cls");
		break;
	}
	oyuncusatir--;
		matris[oyuncusatir][oyuncusutun]=1;
	matris[oyuncusatir+1][oyuncusutun]=0;system ("cls");	goto don;
	break;
	

	
	case 'a':
		if(oyuncusutun==0){
				system ("cls");
		break;
	}
	oyuncusutun--;
		matris[oyuncusatir][oyuncusutun]=1;
	matris[oyuncusatir][oyuncusutun+1]=0;system ("cls");	goto don;
	break;
	

	
	
	case 'd':
		if(oyuncusutun==9){
				system ("cls");
		break;
	}
	
	oyuncusutun++;
		matris[oyuncusatir][oyuncusutun]=1;
	matris[oyuncusatir+1][oyuncusutun-1]=0;system ("cls");	goto don;
	break;
	

	
      default:
	  break;

}
}
}
}
	return 0;
}