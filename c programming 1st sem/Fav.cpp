//Nepal Premier League Champions
#include<stdio.h>
#include<string.h>
int main()
{
     char CricTeam[25], a[25]="Janakpur", b[25]="Sudur";
     int x,i,n;
    printf("Add your support team: ");
    scanf("%s",&CricTeam);
    n=strlen(CricTeam);
    for(i=0;i<n;i++)
    {
    	if(CricTeam[i]==a[i]||CricTeam[i]==b[i])
    	{
    		x+=1;
	}
	else{
		x=0;
		break;
	}
    }
    if(x>0)
    {
    	printf("\nFinal");
    }
    else
    	printf("\nTry Again");
      return 0;

}

