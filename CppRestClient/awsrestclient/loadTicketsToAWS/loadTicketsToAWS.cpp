// loadTicketsToAWS.cpp : Defines the exported functions for the DLL application.
//

#include <iostream>
#include <string>
#include "json.h"
#include "soapH.h"
#include "loadTicketsToAWS.h"

using namespace std;

char *restServerIP = 0;

//struct Namespace namespaces[] = {{NULL,NULL,NULL,NULL}};
value createDynamoDBParams(soap *ctx, char *tableName, char *hashAttributeName, char *rangeAttributeName){
	value v(ctx);
	v["TableName"] = tableName;
	v["KeySchema"][0]["AttributeName"] = hashAttributeName;
	v["KeySchema"][0]["KeyType"] = "HASH";
	v["KeySchema"][1]["AttributeName"] = rangeAttributeName;
	v["KeySchema"][1]["KeyType"] = "RANGE";
	v["AttributeDefinitions"][0]["AttributeName"] = hashAttributeName;
	v["AttributeDefinitions"][0]["AttributeType"] = "N";
	v["AttributeDefinitions"][1]["AttributeName"] = rangeAttributeName;
	v["AttributeDefinitions"][1]["AttributeType"] = "S";
	v["ProvisionedThroughput"]["ReadCapacityUnits"]=5;
	v["ProvisionedThroughput"]["WriteCapacityUnits"]=5;

	cout<<"Dynamo Schema"<<v<<endl;
	return v;
}

value getDynamoDBTableParams(soap *ctx, char *tableName, char *hashAttributeName, char *rangeAttributeName, char *hashAttributeValue, char *rangeAttributeValue){
	value v(ctx);
	v["TableName"] = tableName;
	v["Key"][(const char*)hashAttributeName] = hashAttributeValue;
	v["Key"][(const char*)rangeAttributeName] = rangeAttributeValue;
	
	cout<<"Dynamo Schema"<<v<<endl;
	return v;
}

char* connectToAWSDynamoDB(char* serverIP, char* port){
	std::string endPoint;
	endPoint.append("http://");
	endPoint.append(serverIP);
	endPoint.append(":");
	endPoint.append(port);
	endPoint.append("/awsconnectdynamodb");
	struct soap *ctx = soap_new1(SOAP_C_UTFSTRING|SOAP_XML_INDENT);
	value response(ctx);
	value request(ctx);
	request[0] = '{}';
	
	if(SOAP_OK == json_call(ctx, endPoint.c_str(),&request, NULL)){
		size_t len = 0;
		char *body= soap_get_http_body(ctx, &len);
	}else{
		soap_stream_fault(ctx, std::cerr);
	}
	soap_destroy(ctx);
	soap_end(ctx);
	soap_free(ctx);

	return response;
}

char* createDynamoDBTable(char* serverIP, char* port, char *tableName, char* hashAttributeName, char* rangeAttributeName){
	std::string endPoint;
	endPoint.append("http://");
	endPoint.append(serverIP);
	endPoint.append(":");
	endPoint.append(port);
	endPoint.append("/createdynamodbTable");
	struct soap *ctx = soap_new1(SOAP_C_UTFSTRING|SOAP_XML_INDENT);
	value response(ctx);
	value request(ctx);
	request[0] = '{}';

	request = createDynamoDBParams(ctx, tableName, hashAttributeName, rangeAttributeName);
	
	
	if(SOAP_OK == json_call(ctx, endPoint.c_str(),&request, &response)){
		size_t len = 0;
		char *body= soap_get_http_body(ctx, &len);
	}else{
		soap_stream_fault(ctx, std::cerr);
	}
	soap_destroy(ctx);
	soap_end(ctx);
	soap_free(ctx);

return response;

}

char* getDynamoDBTable(char* serverIP, char* port, char *tableName, char* hashAttributeName,char* hashAttributeValue, char* rangeAttributeName, char* rangeAttributeValue){
	std::string endPoint;
	endPoint.append("http://");
	endPoint.append(serverIP);
	endPoint.append(":");
	endPoint.append(port);
	endPoint.append("/getdynamodbTable");
	struct soap *ctx = soap_new1(SOAP_C_UTFSTRING|SOAP_XML_INDENT);
	value response(ctx);
	value request(ctx);


	request = getDynamoDBTableParams(ctx, tableName, hashAttributeName, hashAttributeValue, rangeAttributeName, rangeAttributeValue);
	
	
	if(SOAP_OK == json_call(ctx, endPoint.c_str(),&request, &response)){
		size_t len = 0;
		char *body= soap_get_http_body(ctx, &len);
		cout<<body<<endl;
	}else{
		soap_stream_fault(ctx, std::cerr);
	}
	soap_destroy(ctx);
	soap_end(ctx);
	soap_free(ctx);

	return response;
}

extern "C" LOADTICKETSTOAWS_API char* updateDynamoDBTable(char* r){
	std::string endPoint;
	endPoint.append("http://");
	//endPoint.append(serverIP);
	//endPoint.append(":");
	//endPoint.append(port);
	struct soap *ctx = soap_new1(SOAP_C_UTFSTRING|SOAP_XML_INDENT);
	value response(ctx);
	value request(ctx);

return response;
}


void loadTicketToCloudDB(int a, int b){

	struct soap *ctx = soap_new1(SOAP_C_UTFSTRING|SOAP_XML_INDENT);
	//ctx->proxy_host = "192.168.254.49";
	//ctx->port = 8080;

	value response(ctx);
	value request(ctx);
	request[0] = '{}';
   

	/*if(argc > 3){
		ctx->userid = argv[2];
		ctx->passwd = argv[3];

	}*/

	if(json_call(ctx, "http://localhost:3000",&request, &response)){
 		soap_stream_fault(ctx, std::cerr);
	}
	else{
		std::cout<<response;
	}

	std::cout<<"OK";

	soap_destroy(ctx);
	soap_end(ctx);
	soap_free(ctx);

	printf("The sum is %d", (a+b));
	}


