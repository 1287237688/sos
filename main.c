int lpin = 13; //连接LED的IO脚
void setup() {
    pinMode(lpin, OUTPUT); //设置管脚为输出模式
}
void loop() {
    delay(1000);
    for(int i=0;i<3;i++)
    {
        digitalWrite(lpin, HIGH);
        delay(120);
        digitalWrite(lpin, LOW);
        delay(120);
    }
    delay(500);
    for(int i=0;i<3;i++)
    {
        digitalWrite(lpin, HIGH);
        delay(640);
        digitalWrite(lpin, LOW);
        delay(500);
    }
    delay(200);
    for(int i=0;i<3;i++)
    {
        digitalWrite(lpin, HIGH);
        delay(120);
        digitalWrite(lpin, LOW);
        delay(120);
    }
    delay(2000);
}
