#pragma once

#ifdef LOADTICKETSTOAWS_EXPORTS
#define LOADTICKETSTOAWS_API __declspec(dllexport)
#else
#define LOADTICKETSTOAWS_API __declspec(dllimport)
#endif

extern "C" LOADTICKETSTOAWS_API void loadTicketToCloudDB(int a, int b);	
extern "C" LOADTICKETSTOAWS_API char* connectToAWSDynamoDB(char* serverIP, char* port);
extern "C" LOADTICKETSTOAWS_API char* createDynamoDBTable(char* serverIP, char* port, char* tableName, char* hashAttributeName, char* rangeAttributeName);
extern "C" LOADTICKETSTOAWS_API char* getDynamoDBTable(char* serverIP, char* port, char *tableName, char* hashAttributeName,char* hashAttributeValue, char* rangeAttributeName, char* rangeAttributeValue);
extern "C" LOADTICKETSTOAWS_API char* updateDynamoDBTable(char* request);




