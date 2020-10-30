/*
  void setup()
  {
  Serial.begin(9600);
  }

  void loop()
  {
  for (int i = -5; i < 20; i = i + 3)
  {
    Serial.println(i);
    delay(500);
  }
  }

*/

/*
  void setup()
  {
  Serial.begin(9600);
  }

  void loop()
  {
  for (int i = 1; i < 4097; i = i * 2)
  {
    Serial.println(i);
    delay(5000);
  }
  }
*/


/*
  int z = 2;

  void setup()
  {
  Serial.begin(9600);
  }

  void loop()
  {
  for (int i = 3; i < 4099 ; i = i * 2 - z )
  {
    Serial.println(i);
    delay(500);
  }
  z = 2;
  }
*/


int z = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int i = 1; i <= 92 ; i = i + z  )
  {
    Serial.println(i);
    z++;
    delay(500);
  }
  z = 0;
}
