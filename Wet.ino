 void wet(){
      digitalWrite(14,HIGH);
    delay(500);
    digitalWrite(14,LOW);
     display.setTextAlignment(TEXT_ALIGN_LEFT);
    display.setFont(ArialMT_Plain_16);
    display.drawString(40, 0, "PSS");
    display.display();
      display.setTextAlignment(TEXT_ALIGN_LEFT);
    display.setFont(ArialMT_Plain_16);
    display.drawString(40, 36, "Wet!");
    display.display();
}
