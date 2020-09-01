/*
 Name:		Sketch4.ino
 Created:	7/28/2020 7:54:48 AM
 Author:	Janie
*/

// the setup function runs once when you press reset or power the board
int switchState = 0;

void setup() {
	// put your setup code here, to run once:
	pinMode(2, INPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
}

void loop() {
	// put your main code here, to run repeatedly:
	switchState = digitalRead(2);

	if (switchState == LOW) {

		digitalWrite(3, HIGH);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	}
	else {
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, HIGH);

		delay(250);

		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);

		delay(250);

	}
}