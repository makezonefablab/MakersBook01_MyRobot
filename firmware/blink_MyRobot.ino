// 마이로봇 만들기 - 번갈아 가며 깜박이는 눈
// http://cafe.naver.com/makezone/  
// By MAKEZONE FABRICATION LAB 

// 로봇의 오른쪽 LED는 디지털 핀 9번에, 왼쪽 LED는 디지털 핀 11번에 연결합니다. 
int right = 9;
int left = 11;

void setup() {                
  pinMode(right, OUTPUT);     
  pinMode(left, OUTPUT);    
}

void loop() {
  //오른쪽 LED를 키고 왼쪽 LED를 끈다. 
  digitalWrite(right, HIGH);
  digitalWrite(left, LOW);  
  delay(200);          
  //오른쪽 LED를 끄고 왼쪽 LED를 킨다.  
  digitalWrite(right, LOW); 
  digitalWrite(left, HIGH);
  delay(200);             
}

