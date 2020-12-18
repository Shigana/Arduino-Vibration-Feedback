int val=0; //入力される値を格納する為の変数
void setup() {
Serial.begin(9600); //モニターに出力するための設定
}
void loop() {
//ANALOG INの０番ピンからデータを受け付ける
val=analogRead(0);
Serial.println(val); //入力された値をモニターに出力
//振動を与えるor与えない
if(val < 3){
//入力値が50以下の時は振動しない
analogWrite(11,0); //出力は0
}
else{
//入力値が50以上の時は振動する
analogWrite(11,255); //出力はmax
delay(150);
}
delay(1);
}
