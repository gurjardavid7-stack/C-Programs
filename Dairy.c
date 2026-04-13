//wap
//wap for creating a software or platform for 'Dairy Business'
#include<stdio.h>
#include<conio.h>
//struct member
//{
//	char name,fname,address;
//	int ;
//};

void main()
{
//	member m;
	char mname[20],fname[20],address[20];
	int choice,code=1010,i,j=0;
	float fat[10],amount[10],mq[10];
	clrscr();

	for(i=0;i<=1;i++)
	{
	printf("\n \n\n welcome to Dev dairy\n\n");
	printf("\n enter 1 to add member  ");
	printf("\n enter 2 to  delete member ");
	printf("\n enter 3 to update member data ");
	printf("\n enter 4  to create milk entry ");
	printf("\n enter 5 to show all entries ");
	printf("\n enter 0 to  exit ");
	printf("\n enter your choice ");
	scanf("%d",&choice);

//	for(i=0;i<=1;i++)
//	{
		switch(choice)
		{
			case 1:
		 //		fflush(stdin);
				printf("\n member name :");
				scanf("%s",mname[j]);
		//		fflush(stdin);
				printf("\n father name :");
				scanf("%s",&fname[j]);
	//			fflush(stdin);
				printf("\n address : ");
				scanf("%s",&address[j]);
				code++;
				printf("\n code : %d",code);
//				fflush(stdin);
//				printf("\n nAME is %s",name);
			       break;

 //			case 2:
	  //			fflush(stdin);
	//			printf("\n member name:%s",mname[i]);
      //	      		printf("\n father name:%s",fname[i]);
	     //			printf("\n address:%s",address[i]);
  //				printf("\n code:%d",code);
    //				printf("");
      //				break;

			case 3:
				printf("");

			case 4:
				printf("\n \n milk entries \n\n ");
				printf("\n milk quantity (in leters):");
				scanf("%f",&mq[i]);
				printf("\n fat:");
				scanf("%f",&fat[i]);
				printf("\n rate is 9 ruppees per fat");
				amount[i]=fat[i]*9*mq[i];
				printf("your amount is %f ruppees",amount[i]);
		    //		break;

			default:
				printf("\n invalid choice");
		    }
  //	 }
//		for(i=0;i<=1;i++)
  //		{
     //			case 5:
				printf("\n entries ");
	      //				fflush(stdin);
				printf("\n member name:%s",mname[i]);
				printf("\n father name:%s",fname[i]);
				printf("\n address:%s",address[i]);
				printf("\n code:%d",code);
				printf("");
		 //		break;

				printf("\n milk quantity :: %f",mq[i]);
				printf("\n fat :: %f",fat[i]);
				printf("\n amount ::%f",amount[i]);
	       //			break;

    //	       		default:
				printf("\n invalid choice");
    //		}
			 }  //looppclose
 //	}
	getch();
}