#pragma config(Sensor, S1,     T,              sensorEV3_Touch)
#pragma config(Sensor, S2,     G,              sensorEV3_Gyro)
#pragma config(Sensor, S3,     C,              sensorEV3_Color)
#pragma config(Sensor, S4,     U,              sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          M,             tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          L,             tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          R,             tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1){
		if(SensorValue[S2]>30){
			motor[motorB]=0;
			motor[motorC]=10;
		}
		else{
			motor[motorB]=10;
			motor[motorC]=0;
		}
		if(SensorValue[S4]<10){
			setLEDColor(ledRedPulse);
			wait1Msec(200);
			motor[motorA]=-30;
			wait1Msec(200);
			motor[motorA]=30;
			wait1Msec(200);
		}
	}
}
