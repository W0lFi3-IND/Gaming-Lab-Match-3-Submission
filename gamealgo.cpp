#include<bits/stdc++.h>
using namespace std;
	
void display(vector< vector<int> > &a){

	for(int i = 0; i<5; i++)
		{ for(int j = 0 ; j<5;j++)	
			{cout<<a[i][j]<<" ";
			}	
			cout<<"\n";
		}
	}
	
void compute(vector<vector<int>>&a)
{	int cnt = 0;
	for(int i = 0; i<5; i++)
		{ for(int j = 0 ; j<5;j++)
			{ 	int q = a[i][j];
		    	int d = j;
		  		while(q==a[i][d+1])
		  			{cnt++;
	        			if(cnt>=3)
	        				{if(i==0)
	        					{for(int z =d+1;z>d+1-cnt;z--)
	        						{ int Ran = rand()%5; 
										a[i][z]=Ran;
				
	        						}
								}
						else{
							for(int z =d+1;z>d+1-cnt;z--)
								{
								a[i][z]=a[i-1][z];
								int Ran = rand()%5; 
								a[i-1][z]=Ran;
								}
							}
		            		}
						d++;
			  		}	 
				}
		   cnt = 0;
		}
}
	
	int main()
	{    
		vector<vector<int>> a;
		// creating grid
		for(int i =0; i<5;i++)
		{   vector<int> row;
			for(int j =0; j<5;j++)
			{
				int Ran = (rand()%5)+1; 
	
			row.push_back(Ran);
			}
			a.push_back(row);
		}

		display(a);
		cout<<endl;
		// total chance to move is 10 
		int chances = 10;
		int score = 0;
		while(chances)
		{  int aa=0,bb=2,cc=1,dd=2;
		  cout<<"Enter first Column";cin>>aa>>bb;
		  cout<<"Enter Second Column";cin>>cc>>dd;
		  // checking the adjacent conditions
			if(aa==cc)
		     { if(bb==dd-1 || bb==dd+1)
		     	{ 	swap(a[aa][bb],a[cc][dd]);
		  			compute(a);
		  				compute(a);
		  				cout<<endl;
		  				display(a);
		  				score+=1;
		     	}
			 }
			 else if(bb==dd)
			 {if(aa==cc-1 || aa==cc+1)
		     	{ 	swap(a[aa][bb],a[cc][dd]);
		  			compute(a);
		  			compute(a);
		  				cout<<endl;
		  				display(a);
		  				score+=1;
		     	}
			 	
			 }
		   else{
		   	cout<<"Not adjacent cannot swap"<<endl;
		   }
			chances--;
			// displaying the result
		
			cout<<"total Tries Left "<<chances<<endl;
			cout<<"Score "<<score<<endl;
		}
	cout<<"Chances are over";
				
	}
	

