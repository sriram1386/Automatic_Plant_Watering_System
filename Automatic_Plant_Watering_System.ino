int soilMoisture; // Stores the moisture sensor reading

void setup() {
  pinMode(3, OUTPUT); // Controls the water pump via a relay
  pinMode(6, INPUT);  // Reads data from the soil moisture sensor
}

void loop() { 
  soilMoisture = digitalRead(6); // Check if the soil is dry or wet

  if (soilMoisture == HIGH) { 
    digitalWrite(3, LOW); // Stop watering if soil has enough moisture
  } else {
    digitalWrite(3, HIGH); // Turn on the pump if soil is dry
  }

  delay(400); // Short pause to prevent unnecessary rapid switching
}
