String webPage = "";
String webPage2 = "";
String block1 = "";
String block2="";
String block3="";
String Refresh ="";
String data ="";
//int gpio0_pin = 0;
//int gpio2_pin = 2;
int k=0,j=0;
int ReadingOne[5];
int ReadingTwo[5];
int ReadingThree[5];

void System_Init(){
  
  attachInterrupt(digitalPinToInterrupt(0),Move, RISING);
  attachInterrupt(digitalPinToInterrupt(2),wet, RISING);
  
  htmlCode();
  
  display.init();
   
  // preparing GPIOs
 // pinMode(gpio0_pin, INPUT);
 // pinMode(gpio2_pin, INPUT);
  pinMode(14,OUTPUT);
  //pinMode(3,OUTPUT);
  delay(1000);
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  
  if (mdns.begin("esp8266", WiFi.localIP())) {
    Serial.println("MDNS responder started");
  }
  
 server.on("/", [](){
  
           server.send(200, "text/html", block1);
           delay(100);
         
  });
  server.on("/socket1", [](){
    if(l>=1){
       server.send(200, "text/html", webPage2);
    }
    else{
       server.send(200, "text/html", webPage); 
    }
 
 });
    server.on("/reading", [](){
       server.send(200, "text/html", data); 
     });
  server.on("/socket2HRR", [](){
server.send(200, "text/html", webPage);
int sensorPin = A0;    
int sensorValue,sensorValue2; 
unsigned long time1,time2;
unsigned long time;
int i,HR,total,count;

  sensorValue = analogRead(sensorPin);
  time1=millis();
  delay(sensorValue);
  for(i=0;i<5;i++){
    }
  sensorValue2 = analogRead(sensorPin);
  time2=millis();
  HR=time2-time1;
  //total=HR+total;
  Serial.println(HR);
  HR=60000/HR;
  HR=HR/6;
  /*if(HR>85 && HR<45){
      digitalWrite(3,HIGH);    
  }
  else{
    digitalWrite(3,LOW);
  }*/
  ReadingOne[j]=HR;
  j++;
   data = "<p> Last five reading </p><table border=\"2\" width = \"130\" align=\"left\"><tr><td>1</td><td>" +String((int)ReadingOne[0])+ "</td></tr>" + "<tr><td>2</td><td>" +String((int)ReadingOne[1])+ "</td></tr>" + "<tr><td>3</td><td>" +String((int)ReadingOne[2])+ "</td></tr>" + "<tr><td>4</td><td>" +String((int)ReadingOne[3])+ "</td></tr>" + "<tr><td>5</td><td>" +String((int)ReadingOne[4])+ "</td></tr>" + "</table>";
  server.send(200, "text/html", data);
  if(j==4){
    
  j&=0;
  }
  
  webPage +="HeartRate: " +String((int)HR);
    server.send(200, "text/html", webPage);
    
  });
  server.on("/socket2L5R", [](){
    server.send(200, "text/html", data);
    });

  server.begin();
  Serial.println("HTTP server started");
    
    display.setTextAlignment(TEXT_ALIGN_LEFT);
    display.setFont(ArialMT_Plain_16);
    display.drawString(40, 0, "PSS");
    display.display();
}

