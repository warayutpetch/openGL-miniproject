

#include<windows.h>
#include<gl/glut.h>
#include <time.h>
#include <math.h>
void DrawLine();

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glLineWidth(10.0); //ความหนา
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}
void Line(float x1, float y1, float x2, float y2, int r, int g, int b)
{
	glColor3f(r, g, b);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
	glFlush();
}

void Line_2(float x1, float y1, float x2, float y2, int r, int g, int b)
{
	glColor3f(r, g, b);
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
	glFlush();
}
void displayText(float x, float y, int r, int g, int b, const char *string) {
	//glClear(GL_COLOR_BUFFER_BIT);
	int j = strlen(string);
	glColor3f(r, g, b);
	glRasterPos2f(x, y);
	for (int i = 0; i < j; i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
		//displayText(0, 100, 100, 0, 1, "Hello");
	}
	glEnd();
	glFlush();
}
void drawHollowCircle(GLfloat x, GLfloat y, GLfloat radius){
	const double PI = 3.141592653589793238463;
	float delta_theta = 0.01;
	glColor3f(0, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP); // OR GL_LINE_LOOP

	for (float angle = 0; angle < 2 * PI; angle += delta_theta)
		glVertex3f(x+(radius*cos(angle)), y+(radius*sin(angle)), 0);

	glEnd();
	glFlush();
}

void Trangle(int x1, int y1, int x2, int y2, int r, int g, int b){
	glColor3f(r, g, b);
	glBegin(GL_POLYGON);
	glVertex2f(x1, y1);
	glVertex2f(x2, y1);
	glVertex2f(x2, y2);
	glVertex2f(x1, y2);
	glEnd();
	glFlush();
}
void open_Light(GLfloat x, GLfloat y, GLfloat radius){

	const double PI = 3.141592653589793238463;
	float delta_theta = 0.01;
	glColor3f(1, 1, 0);
	glLineWidth(2);
	glBegin(GL_TRIANGLE_FAN); // OR GL_LINE_LOOP

	for (float angle = 0; angle < 2 * PI; angle += delta_theta){
	glVertex3f(x + (radius*cos(angle)), y + (radius*sin(angle)), 0);
	}

	glEnd();
	glFlush();

	DrawLine();
	int x2 = 150, y2 = 10;

	Trangle(10 + x2, 10 + y2, 60 + x2, 90 + y2, 0, 1, 0);
	displayText(x2 + 25, y2 + 78, 0, 0, 0, "Moblie");
	displayText(x2 + 30, y2 + 45, 0, 0, 0, "ON");


}

void close_Light(GLfloat x, GLfloat y, GLfloat radius){
	glColor3f(0, 1, 0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(100, 114);
	glVertex2i(120, 114);
	glVertex2i(119, 114);
	glVertex2i(119, 197);
	glVertex2i(119, 197);
	glVertex2i(125, 197);
	glEnd();
	glFlush();

	const double PI = 3.141592653589793238463;
	float delta_theta = 0.01;
	glColor3f(1, 1, 1);
	glLineWidth(2);
	glBegin(GL_TRIANGLE_FAN); // OR GL_TRIANGLE_FAN

	for (float angle = 0; angle < 2 * PI; angle += delta_theta){
		glVertex3f(x + (radius*cos(angle)), y + (radius*sin(angle)), 0);
	}

	glEnd();
	glFlush();

	DrawLine();
	int x2 = 150, y2 = 10;
	Trangle(10 + x2, 10 + y2, 60 + x2, 90 + y2, 0, 1, 0);
	displayText(x2 + 25, y2 + 78, 0, 0, 0, "Moblie");
	displayText(x2 + 28, y2 + 45, 0, 0, 0, "OFF");
}

void DrawLine(){

	int x = 75, y = 100;
	int x1 = 220, y1 = 80;
	Line_2(158 + x, 125 + y, 158 + x, 105 + y, 0, 0, 0);
	Line_2(158 + x, 105 + y, 190 + x, 105 + y, 0, 0, 0);
	Line_2(190 + x, 105 + y, 190 + x, 125 + y, 0, 0, 0);

	Line_2(150 + x, 134 + y, 150 + x, 155 + y, 0, 0, 0);

	Line_2(150 + x, 155 + y, 155 + x, 140 + y, 0, 0, 0);
	Line_2(155 + x, 140 + y, 160 + x, 155 + y, 0, 0, 0);

	Line_2(160 + x, 155 + y, 165 + x, 140 + y, 0, 0, 0);
	Line_2(170 + x, 155 + y, 165 + x, 140 + y, 0, 0, 0);

	Line_2(170 + x, 155 + y, 175 + x, 140 + y, 0, 0, 0);
	Line_2(175 + x, 140 + y, 180 + x, 155 + y, 0, 0, 0);

	Line_2(180 + x, 155 + y, 185 + x, 140 + y, 0, 0, 0);
	Line_2(185 + x, 140 + y, 190 + x, 155 + y, 0, 0, 0);

	Line_2(190 + x, 155 + y, 195 + x, 140 + y, 0, 0, 0);
	Line_2(195 + x, 140 + y, 200 + x, 155 + y, 0, 0, 0);

	Line_2(200 + x, 155 + y, 200 + x, 134 + y, 0, 0, 0);

}

void run_line(){
	for (int x = 0; x <= 20; x++){
		Line(100, 114, 100 + x, 114, 1, 0, 0);
		Sleep(10);
	}
	for (int x = 119; x <= 197; x++){
		Line(119, 114, 119, x, 1, 0, 0);
		Sleep(10);
	}

	for (int x = 119; x <= 125; x++){
		Line(119, 197, x, 197, 1, 0, 0);
		Sleep(10);
	}


}
void Wifi(){

		for (int x = 160; x >= 75; x--){
			Line(160, 80, x, 80, 1, 0, 0);
			Sleep(10);
		}
		for (int x = 80; x <= 90; x++){
			Line(75, 80, 75, x, 1, 0, 0);
			Sleep(10);
		}
		Line(160, 80, 75, 80, 1, 1, 1);
		Line(75, 80, 75, 90, 1, 1, 1);
		Sleep(50);




}
void MyKeyboardFunc(unsigned char Key, int x, int y)
{
	switch (Key)
	{
	case 'z': Wifi(); run_line(); open_Light(250, 250, 30); break;
	case 'x': Wifi(); close_Light(250, 250, 30); break;
	case 'c':  break;
	/*case 'c': MenuHandler(2); break;
	case 'v': MenuHandler(3); break;
	case 'w': MenuHandler(11); break;
	case 'b': MenuHandler(12); break;
	case 's': MenuHandler(7); break;
	case 'e': MenuHandler(8); break;*/

	case 27:
		exit(1);
		break;
	};
}

int main(int argc, char **argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 600);
	glutCreateWindow("TEST Tutorial");
	glutKeyboardFunc(MyKeyboardFunc);


	int x = 75, y = 100;
	int x1 = 220, y1 =80;
	int x2 = 150, y2 = 10;
	init();
	glClear(GL_COLOR_BUFFER_BIT);

	
	///////////////////Arduino
	glColor3f(0.0, 0.0, 1);
	glLineWidth(30);
	glBegin(GL_POLYGON);
	glVertex2i(50, 90);
	glVertex2i(100, 90);
	glVertex2i(100, 150);
	glVertex2i(50, 150);
	glEnd();
	glFlush();
	//////////////////Relay
	
	glColor3f(1, 0.0, 0);
	glLineWidth(10);
	glBegin(GL_POLYGON);
	glVertex2i(50+x, 90+y);
	glVertex2i(100+x, 90+y);
	glVertex2i(100+x, 150+y);
	glVertex2i(50+x, 150+y);
	glEnd();
	glFlush();
	///// AC PWR
	Trangle(10 + x1, 30 + y1, 50 + x1, 50 + y1,1,1,0);
	//// Mobile
	Trangle(10 + x2, 10 + y2, 60 + x2, 90 + y2, 0, 1, 0);

	displayText(x2+25, y2+78, 0, 0, 0, "Moblie");

	displayText(x2 + 28, y2 + 45, 0, 0, 0, "OFF");
	///// Lamp
	drawHollowCircle(250, 250, 30);
	///// ขั้วหลอด
	DrawLine();
	////สายไฟ
	Line(168 + x, 105 + y, 168 + x, 80 + y, 1, 0, 0);
	Line(168 + x, 80 + y, 140 + x, 80 + y,1, 0, 0);
	Line(168 + x, 80 + y, 140 + x, 80 + y, 1, 0, 0);
	Line(140 + x, 80 + y, 140 + x, 128 + y, 1, 0, 0);
	Line(140 + x, 128 + y, 100 + x, 128 + y, 1, 0, 0);

	Line(178 + x, 105 + y, 178 + x, 30 + y, 1, 0, 0);


	Line(168 + x, 30 + y, 168 + x, 50 + y, 0, 0, 0);
	Line(168 + x, 50 + y, 120 + x, 50 + y, 0, 0, 0);
	Line(121 + x, 50 + y, 121 + x, 115 + y, 0, 0, 0);
	Line(121 + x, 115 + y, 100 + x, 115 + y, 0, 0, 0);

	displayText(63, 142, 1, 1, 1, "Arduino");
	displayText(68, 95, 1, 1, 1, "WiFi");
	displayText(87, 110, 1, 1, 1, "D13");
	displayText(50, 125, 1, 1, 1, "VCC");
	displayText(50, 110, 1, 1, 1, "GND");

	displayText(64 + x, 142 + y, 1, 1, 1,"RELAY");
	displayText(50 + x, 125 + y, 1, 1, 1, "VCC");
	displayText(50 + x, 110 + y, 1, 1, 1, "GND");
	displayText(50 + x, 95 + y, 1, 1, 1, "IN1");
	displayText(90 + x, 125 + y, 1, 1, 1, "NO");
	displayText(83 + x, 110 + y, 1, 1, 1, "COM");
	displayText(90 + x, 95 + y, 1, 1, 1, "NC");

	displayText(236, 115, 1, 0, 0, "AC PWR");
	////////////////////// Wire
	glColor3f(0, 1, 0);
	glLineWidth(5);
	glBegin(GL_LINES);
		glVertex2i(100, 114);
		glVertex2i(120, 114);
		glVertex2i(119, 114);
		glVertex2i(119, 197);
		glVertex2i(119, 197);
		glVertex2i(125, 197);
	glEnd();
	glFlush();

	Line(50, 128, 20, 128, 1, 1,0);
	Line(21, 128, 21, 128 + y, 1, 1, 0);
	Line(21, 128 + y, 50 + x, 128 + y, 1, 1, 0); 

	Line(50, 110, 30, 110, 0, 0, 0);
	Line(31, 110, 31,113+y , 0, 0, 0);
	Line(31, 113 + y, 50 + x, 113 + y, 0, 0, 0);
	

	
	glutMainLoop();

}


