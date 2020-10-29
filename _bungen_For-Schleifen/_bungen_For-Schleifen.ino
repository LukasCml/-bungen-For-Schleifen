/*void setup()
  {
  Serial.begin(9600);
  }

  void loop()
  {
  for (int i = -5; i < 20; i= i + 3)
  {
    Serial.println(i);
    delay(1000);
  }
  }*/


/*void setup()
  {
  Serial.begin(9600);
  }

  void loop()
  {
  for (int i = 1; i < 4097; i= i*2)
  {
    Serial.println(i);
    delay(1000);
  }
  }*/


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int j = 1; j < 2049 ; j = j*2 )
  {
    for (int i = 3; i < 4099 ; i = i + j )
    {
      Serial.println(i);
      delay(500);
    }
  }
}


/*void setup()
  {
  Serial.begin(9600);
  }

  void loop()
  {
  for (int j = 1; j < 14 ; j = j++ )
  {
    for (int i = 1; i < 93 ; i = i + j )
    {
      Serial.println(i,j);
      delay(500);
    }
  }
  }*/
