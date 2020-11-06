/*
   -5 -2 1 4 7 10 13 16 19
*/

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

************************************************
/*
   1 2 4 8 16 32 64 128 256 512 1024 2048 4096
*/

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

***********************************************
/*
  3 4 6 10 18 34 66 130 258 514 1026 2050 4098
*/


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

**********************************************
/*
  1 2 4 7 11 16 22 29 37 46 56 67 79 92
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
