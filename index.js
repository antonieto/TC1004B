const http = require("http");

const server = http.createServer((req,res)=>{
    res.end("Hello from server");
}); 

server.listen(3000, 'localhost', ()=>{
    console.log("Listening for requests from port 3000");
});