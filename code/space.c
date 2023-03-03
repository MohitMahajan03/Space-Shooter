#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<Windows.h>
#include<time.h>



static int shoot = 0;
static int horizontal = 0;
static int loops = 0;
static int elimi[6] = { 0,0,0,0,0,0 };
static int j;
static int count = 300;
static clock_t start, end = 0;
static float theta;
static int shot = 3;


void ship(int horizontal)
{
	glColor3f(0, 1, 0.5);
	glBegin(GL_QUADS);
	glVertex2f(235 + horizontal, 0);
	glVertex2f(235 + horizontal, 40);
	glVertex2f(240 + horizontal, 0);
	glVertex2f(240 + horizontal, 40);
	glEnd();

	glColor3f(0, 1, 0.5);
	glBegin(GL_QUADS);
	glVertex2f(260 + horizontal, 0);
	glVertex2f(260 + horizontal, 40);
	glVertex2f(265 + horizontal, 0);
	glVertex2f(265 + horizontal, 40);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(250 + horizontal, 50);
	glVertex2f(225 + horizontal, 0);
	glVertex2f(275 + horizontal, 0);
	glEnd();

}

void play();

void create_circle(int x, int y, int rad) {
	int i;

	glColor3f(1.0, 1.0, 0.5);
	glBegin(GL_POLYGON);
	for (i = 0; i < 360; i++) {
		theta = (float)(i * 3.142) / (180);
		glVertex2f(x + (rad)*cos(theta), y + (rad)*sin(theta));
	}
	glEnd();
	//Sleep(1);
	glFlush();
	//glClear(GL_COLOR_BUFFER_BIT);
}

void move()
{
	--count;
	for (j = count; j >= -200; j--)
	{
		if (elimi[0] == 0)
		{
			//Triangle1
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 50, 25 + 200 + j);
			glVertex2f(10 + 50, 25 + 200 + j);
			glVertex2f(10 + 50, 40 + 200 + j);
			glVertex2f(0 + 50, 40 + 200 + j);
			glEnd();
		}
		if (elimi[1] == 0)
		{
			//Triangle2
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 150, 25 + 430 + j);
			glVertex2f(10 + 150, 25 + 430 + j);
			glVertex2f(10 + 150, 40 + 430 + j);
			glVertex2f(0 + 150, 40 + 430 + j);
			glEnd();
		}
		if (elimi[2] == 0)
		{
			//Triangle3
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 200, 25 + 230 + j);
			glVertex2f(10 + 200, 25 + 230 + j);
			glVertex2f(10 + 200, 40 + 230 + j);
			glVertex2f(0 + 200, 40 + 230 + j);
			glEnd();
		}

		if (elimi[3] == 0)
		{
			//Triangle4
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 250, 25 + 400 + j);
			glVertex2f(10 + 250, 25 + 400 + j);
			glVertex2f(10 + 250, 40 + 400 + j);
			glVertex2f(0 + 250, 40 + 400 + j);
			glEnd();
		}

		if (elimi[4] == 0)
		{
			//Triangle5
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 300, 25 + 350 + j);
			glVertex2f(10 + 300, 25 + 350 + j);
			glVertex2f(10 + 300, 40 + 350 + j);
			glVertex2f(0 + 300, 40 + 350 + j);
			glEnd();
		}

		if (elimi[5] == 0)
		{
			//Triangle6
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 450, 25 + 390 + j);
			glVertex2f(10 + 450, 25 + 390 + j);
			glVertex2f(10 + 450, 40 + 390 + j);
			glVertex2f(0 + 450, 40 + 390 + j);
			glEnd();
		}

		ship(horizontal);

		glFlush();
		glClear(GL_COLOR_BUFFER_BIT);
		Sleep(70);
		if ((j % 100) == 0)
		{
			shot = 0;
			count = j;
			break;
		}
	}
}

void play()
{
	int k;
	if (shoot == 1 && shot < 3)
	{
		shot++;
		printf("%d", shot);
		for (int i = 0; i < 900; i++)
		{


			if (elimi[0] == 0)
			{
				//Triangle1
				glColor3f(1, 0, 1);
				glBegin(GL_QUADS);
				glVertex2f(0 + 50, 25 + 200 + j);
				glVertex2f(10 + 50, 25 + 200 + j);
				glVertex2f(10 + 50, 40 + 200 + j);
				glVertex2f(0 + 50, 40 + 200 + j);
				glEnd();
			}
			if (elimi[1] == 0)
			{
				//Triangle2
				glColor3f(1, 0, 1);
				glBegin(GL_QUADS);
				glVertex2f(0 + 150, 25 + 430 + j);
				glVertex2f(10 + 150, 25 + 430 + j);
				glVertex2f(10 + 150, 40 + 430 + j);
				glVertex2f(0 + 150, 40 + 430 + j);
				glEnd();
			}
			if (elimi[2] == 0)
			{
				//Triangle3
				glColor3f(1, 0, 1);
				glBegin(GL_QUADS);
				glVertex2f(0 + 200, 25 + 230 + j);
				glVertex2f(10 + 200, 25 + 230 + j);
				glVertex2f(10 + 200, 40 + 230 + j);
				glVertex2f(0 + 200, 40 + 230 + j);
				glEnd();
			}

			if (elimi[3] == 0)
			{
				//Triangle4
				glColor3f(1, 0, 1);
				glBegin(GL_QUADS);
				glVertex2f(0 + 250, 25 + 400 + j);
				glVertex2f(10 + 250, 25 + 400 + j);
				glVertex2f(10 + 250, 40 + 400 + j);
				glVertex2f(0 + 250, 40 + 400 + j);
				glEnd();
			}

			if (elimi[4] == 0)
			{
				//Triangle5
				glColor3f(1, 0, 1);
				glBegin(GL_QUADS);
				glVertex2f(0 + 300, 25 + 350 + j);
				glVertex2f(10 + 300, 25 + 350 + j);
				glVertex2f(10 + 300, 40 + 350 + j);
				glVertex2f(0 + 300, 40 + 350 + j);
				glEnd();
			}

			if (elimi[5] == 0)
			{
				//Triangle6
				glColor3f(1, 0, 1);
				glBegin(GL_QUADS);
				glVertex2f(0 + 450, 25 + 390 + j);
				glVertex2f(10 + 450, 25 + 390 + j);
				glVertex2f(10 + 450, 40 + 390 + j);
				glVertex2f(0 + 450, 40 + 390 + j);
				glEnd();
			}
			int xll = 236.5 + horizontal;
			int xlr = 238.5 + horizontal;
			int xrl = 261.5 + horizontal;
			int xrr = 263.5 + horizontal;

			//bullets
			glColor3f(1, 1, 0);
			glBegin(GL_QUADS);
			glVertex2f(236.5 + horizontal, 40 + i);
			glVertex2f(236.5 + horizontal, 50 + i);
			glVertex2f(238.5 + horizontal, 40 + i);
			glVertex2f(238.5 + horizontal, 50 + i);
			glEnd();

			glColor3f(1, 1, 0);
			glBegin(GL_QUADS);
			glVertex2f(261.5 + horizontal, 40 + i);
			glVertex2f(261.5 + horizontal, 50 + i);
			glVertex2f(263.5 + horizontal, 40 + i);
			glVertex2f(263.5 + horizontal, 50 + i);
			glEnd();
			//Sleep(1);

			//elim condition check square 1
			if ((((50 + i) > (25 + 200 + j)) && (xll > (0 + 50)) && (xlr < (10 + 50)) && elimi[0] != 1) || ((50 + i) > (25 + 200 + j)) && ((50 + i) < (25 + 200 + j + 2) && (xrl > (0 + 50)) && (xrr < (10 + 50))) && elimi[0] != 1)
			{
				elimi[0] = 1;
				for (k = 0; k < 50; k++)
				{
					create_circle(50, 25 + 200 + j, k);
					glColor3f(0, 1, 0.5);
					ship(horizontal);
				}
			}
			//square 2
			if (((50 + i) > (25 + 430 + j) && (50 + i) < (25 + 430 + j + 2) && (xll > (0 + 150)) && (xlr < (10 + 150)) && elimi[1] != 1) || ((50 + i) > (25 + 430 + j) && (xrl > (0 + 150)) && (xrr < (10 + 150)) && elimi[1] != 1))
			{
				elimi[1] = 1;
				for (k = 0; k < 50; k++)
				{
					create_circle(150, 25 + 430 + j, k);
					ship(horizontal);
				}
			}
			//square 3
			if (((50 + i) > (25 + 230 + j) && (xll > (0 + 200)) && (xlr < (10 + 200)) && elimi[2] != 1) || ((50 + i) > (25 + 230 + j) && (xrl > (0 + 200)) && (xrr < (10 + 200)) && elimi[2] != 1))
			{
				elimi[2] = 1;
				for (k = 0; k < 50; k++)
				{
					create_circle(200, 25 + 230 + j, k);
					ship(horizontal);
				}
			}
			//square 4
			if (((50 + i) > (25 + 400 + j) && (xll > (0 + 250)) && (xlr < (10 + 250)) && elimi[3] != 1) || ((50 + i) > (25 + 400 + j) && (xrl > (0 + 250)) && (xrr < (10 + 250)) && elimi[3] != 1))
			{
				elimi[3] = 1;
				for (k = 0; k < 50; k++)
				{
					create_circle(250, 25 + 400 + j, k);
					ship(horizontal);
				}
			}
			//square 5
			if (((50 + i) > (25 + 350 + j) && (xll > (0 + 300)) && (xlr < (10 + 300)) && elimi[4] != 1) || ((50 + i) > (25 + 350 + j) && (xrl > (0 + 300)) && (xrr < (10 + 300)) && elimi[4] != 1))
			{
				elimi[4] = 1;
				for (k = 0; k < 50; k++)
				{
					create_circle(300, 25 + 350 + j, k);
					ship(horizontal);
				}
			}
			//square 6
			if (((50 + i) > (25 + 390 + j) && (xll > (0 + 450)) && (xlr < (10 + 450)) && elimi[5] != 1) || ((50 + i) > (25 + 390 + j) && (xrl > (0 + 450)) && (xrr < (10 + 450))) && elimi[5] != 1)
			{
				elimi[5] = 1;
				for (k = 0; k < 50; k++)
				{
					create_circle(450, 25 + 390 + j, k);
					ship(horizontal);
				}
			}

			ship(horizontal);
			glFlush();
			glClear(GL_COLOR_BUFFER_BIT);
		}
	}

	if (shot >= 3)
	{
		move();
		printf("Executed! %d", j);
	}

	else
	{
		if (elimi[0] == 0)
		{
			//Triangle1
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 50, 25 + 200 + j);
			glVertex2f(10 + 50, 25 + 200 + j);
			glVertex2f(10 + 50, 40 + 200 + j);
			glVertex2f(0 + 50, 40 + 200 + j);
			glEnd();
		}
		if (elimi[1] == 0)
		{
			//Triangle2
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 150, 25 + 430 + j);
			glVertex2f(10 + 150, 25 + 430 + j);
			glVertex2f(10 + 150, 40 + 430 + j);
			glVertex2f(0 + 150, 40 + 430 + j);
			glEnd();
		}
		if (elimi[2] == 0)
		{
			//Triangle3
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 200, 25 + 230 + j);
			glVertex2f(10 + 200, 25 + 230 + j);
			glVertex2f(10 + 200, 40 + 230 + j);
			glVertex2f(0 + 200, 40 + 230 + j);
			glEnd();
		}

		if (elimi[3] == 0)
		{
			//Triangle4
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 250, 25 + 400 + j);
			glVertex2f(10 + 250, 25 + 400 + j);
			glVertex2f(10 + 250, 40 + 400 + j);
			glVertex2f(0 + 250, 40 + 400 + j);
			glEnd();
		}

		if (elimi[4] == 0)
		{
			//Triangle5
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 300, 25 + 350 + j);
			glVertex2f(10 + 300, 25 + 350 + j);
			glVertex2f(10 + 300, 40 + 350 + j);
			glVertex2f(0 + 300, 40 + 350 + j);
			glEnd();
		}

		if (elimi[5] == 0)
		{
			//Triangle6
			glColor3f(1, 0, 1);
			glBegin(GL_QUADS);
			glVertex2f(0 + 450, 25 + 390 + j);
			glVertex2f(10 + 450, 25 + 390 + j);
			glVertex2f(10 + 450, 40 + 390 + j);
			glVertex2f(0 + 450, 40 + 390 + j);
			glEnd();
		}
		ship(horizontal);
		glFlush();
		glClear(GL_COLOR_BUFFER_BIT);
	}

}

void display()
{
	play();
}

void mouse(int button, int state, int x, int y)
{
	int buff = 0;
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		shoot = 1;
		buff = 1;
	}
	else if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
	{
		shoot = 0;
	}
	while (buff != 0)
	{
		glutPostRedisplay();
		buff = 0;
	}

}

void keys(unsigned char key, int x, int y)
{
	if (key == GLUT_KEY_LEFT)
	{
		horizontal = horizontal - 5;
	}
	if (key == GLUT_KEY_RIGHT)
	{
		horizontal = horizontal + 5;
	}
	//display();
	glutPostRedisplay();
}


void init()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	gluOrtho2D(0, 500, 0, 500);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}


void main(int argc, char** argv)
{
	srand(time(0)); //For generating Different SET of random NUM;
	float x1 = rand() % 500;
	float x2 = rand() % 500;
	float x3 = rand() % 500;
	float x4 = rand() % 500;
	float x5 = rand() % 500;
	float x6 = rand() % 500;

	float y1 = rand() % 100;
	float y2 = rand() % 100;
	float y3 = rand() % 100;
	float y4 = rand() % 100;
	float y5 = rand() % 100;
	float y6 = rand() % 100;

	float red = rand() / ((double)RAND_MAX);
	float grn = rand() / ((double)RAND_MAX);
	float blue = rand() / ((double)RAND_MAX);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 600);
	glutCreateWindow("SPACE SHIP");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutSpecialFunc(keys);
	glutMainLoop();
}
