int analogPin =A0;
int val=0;

void setup()
{
  Serial.begin(9600);
  pinMode(analogPin,INPUT);
  
    // set up your input pin
    // initialize the serial monitor at 9600 baud
}

void loop()
{val = analogRead(analogPin);
  Serial.println(val);
  delay(50);
    // read your sensor pin A0 and store that in the "val" variable
    // print that value as a hexidecimal number in the serial monitor
    // delay the appropriate amount of time
}
