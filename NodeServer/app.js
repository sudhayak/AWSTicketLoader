var abc = null;
const AWS = require('aws-sdk');
const proxy = require('proxy-agent');
AWS.config.update({
    region: 'ap-south-1',
    endpoint:"https://dynamodb.ap-south-1.amazonaws.com",
    httpOptions:{agent:proxy('http://192.168.254.49:8080')}
});


const express = require("express");
const bodyParser = require("body-parser");
var app = express();
var dynamoDB = null;
var docClient = null;
app.use(bodyParser.json());
app.get('/', (req,res)=>{
    console.log("GET begin");
    if(null != dynamoDB){
        res.send({
            message:"DynamoDB up and running",
            status:"OK"
        });
    }
    else{
        res.send({
            message:"call localhost:3000/awsconnectdb to initialize",
            status:"OK"
        });
    }

    console.log("GET end");
});


// app.put('/awsinitialize', (req,res)=>{
//     console.log("PUT aws initialize begin");
//     res.send("awsinitalize");

//     console.log("PUT aws initialize end");
// });


app.put('/awsconnectdynamodb', (req,res)=>{
    console.log("PUT aws awsconnectdynamodb begin");
    if(null ==dynamoDB){
    dynamoDB = new AWS.DynamoDB();
    docClient = new AWS.DynamoDB.DocumentClient();
    if(null == dynamoDB || null == docClient){
        res.send({message:"dynamoDB instance failed",
        status:"NOK"
     });
    }
    res.send({message:"dynamoDB created successfully",
                   status:"OK"
                });
    }
    else{
        res.send({message:"dynamoDB instance already available",
        status:"OK"
     });
    }
    console.log("PUT aws awsconnectdynamodb end");
});

/*
request format"{
    params:
}
*/
app.post('/createdynamodbTable',(req,res)=>{
    console.log("PUT aws createdynamodbTable begin",);
    if(null != dynamoDB && req.body != null){
        dynamoDB.createTable(req.body,(err,data)=>{
            if(err){
                console.log(err,err.stack);
                res.send({
                    message:"Table creation failed",
                    status:"NOK"
                })
            }
            else{
                console.log(data);
                res.send({
                    message:"Table created successfully",
                    status:"OK"
                })
            }
        });

    }
    console.log("PUT aws createdynamodbTable end");

});

app.post('/getdynamodbTable',(req,res)=>{
    console.log("get aws dynamodbTable begin");
    if(null != dynamoDB && null != req.body && req.body.TableName != null){
        docClient.get(req.body,(err,data)=>{
            if(err){
                console.log(err,err.stack);
                res.send({
                    message:"getTable failed",
                    errorInfo:err,
                    status:"NOK"
                })
            }
            else{
                console.log(data);
                res.send({
                    message:"getTable successful",
                    tableInfo:data,
                    status:"OK"
                })
            }
        });
    }
    console.log("get dynamodb table end");
});


app.post('/UpdateDynamoDBTable', (req,res)=>{
    console.log("POST aws UpdateDynamoDBTable begin");
    if(null != docClient && null != req.body && null != req.body.TableName){
        docClient.put(req.body,(err,data)=>{
            if(err){
                console.log(err,err.stack);
                res.send({
                  message:"updateTable failed",
                  errorInfo:err.stack,
                  status:"NOK"      
                });   
            }
            else{
                console.log(data);
                res.send({
                    message:"UpdateTable successful",
                    tableInfo:data,
                    status:"OK"
                })
            }
        });
    }
    console.log("POST aws UpdateDynamoDBTable end");

});

app.delete('/deletedynamoRow', (req,res)=>{
    console.log("PUT aws deletedynamoRow begin");
    res.send("deletedynamoRow");
    console.log("PUT aws deletedynamoRow end");


});


// app.post('/modifydynamoRow',(req,res)=>{
//     console.log("PUT aws modifydynamoRow begin");
//     res.send("modifydynamoRow");

//     console.log("PUT aws modifydynamoRow end");

// });

app.listen(3000);



