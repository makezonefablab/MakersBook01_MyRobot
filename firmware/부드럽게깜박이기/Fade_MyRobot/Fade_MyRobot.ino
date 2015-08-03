// 마이로봇 만들기 - 부드럽게 깜박이는 눈
// 난이도 ★☆☆☆☆
// http://cafe.naver.com/makezone/  
// By MAKEZONE FABRICATION LAB 

int right = 9;     
int left = 11;   
int brightness = 0;   
//5만큼 서서히 LED의 밝기를 조절합니다. 
int fadeAmount = 5;

void setup()  { 
  pinMode(right, OUTPUT);
  pinMode(left, OUTPUT);
} 

void loop()  { 
  analogWrite(right, brightness);    
  analogWrite(left, brightness);    

//현재 밝기에서 fadeAmount만큼 더해 다음 brightness를 만들어냅니다. 
  brightness = brightness + fadeAmount;

//예를 들어 밝기가 가장 밝은 수치인 255가 되면 fadeAmount만큼씩 빼서 LED가 서서히 어두워지도록 합니다.
//반대로 0이 되면 다시 255가 될 때까지 서서히 밝아집니다
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  
  delay(20);                            
}


