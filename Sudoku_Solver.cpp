#include <iostream>
using namespace std;
int const ua=0;
bool inrow(int g[9][9],int row,int number){
	for(int col=0;col<9;col++){
		if(g[row][col]==number){
		return true;}
		
		}
		return false;
	
}


bool incol(int g[9][9],int col,int number){
	for(int row=0;row<9;row++){
		if(g[row][col]==number){
		return true;}
		}
		return false;
	
}
bool insq(int g[9][9], int col, int row,int number){
	int sqrow=row-row%3;
	int sqcol=col-col%3;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
	if(g[sqrow+i][sqcol+j]==number){
	return true;
}
	
		}
	}
	return false;
}
bool isvalid(int g[9][9],int col, int row, int number){
	return !inrow(g,row,number)&&
			 !incol(g,col,number)&&
		   !insq(g,col,row,number);
		   

}
bool isua(int g[9][9],int &row, int &col){
   for(row=0;row<9;row++){
	   for(col=0;col<9;col++){
		   if(g[row][col]==ua)
		   return true;
		   
	   }
   }
	return false;
}
bool sudokusolve(int g[9][9]){
  int row,col;
  if(!isua(g,row,col))
	return true;
  for (int number=0;number<9;number++){
	
	if(isvalid(g,col,row,number))
	g[row][col]=number;
	if(sudokusolve(g))
	return true;
	
	g[row][col]=ua;
}

	 return false;	
}
void display(int g[9][9]){
  for(int row=0;row<9;row++){
	   for(int col=0;col<9;col++){
	   cout<<g[row][col]<<" ";
	   
	   }
	   cout<<endl;
	
	}
}

int main() {

       
  cout<<"Enter a 9x9 sudoku grid(with 0 in the empty spaces)";
     int g[9][9]
   for(int ii=0;ii<9;ii++){
	   for(int jj=0;jj<9;jj++){
	   cin>>g[ii][jj];
	   }
	   }
	   
	   
	   if(sudokusolve(g)==true){
		   cout<<"Solution:"<<endl;
		   display(g);
	   }
	   else{
		   cout<<"Are you sure you typed a right sudoku board ?";
	   }
   
   
	return 0;
}
