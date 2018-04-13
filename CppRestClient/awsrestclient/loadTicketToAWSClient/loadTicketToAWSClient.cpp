// loadTicketToAWSClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "loadTicketsToAWS.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char* response = connectToAWSDynamoDB("localhost","3000");
	cout<<response<<endl;
	response = createDynamoDBTable("localhost", "3000", "Movies_SenthilSuriya12", "year", "title");
	cout<<response<<endl;
	//response = getDynamoDBTable("localhost","3000", "Movies_senthil", "year", "2017", "title", "Armageddon");
	return 0;
}

