//
//  main.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include <iostream>
#include "main.h"
#include "texturas.h"
#include "primitivas.h"
#include "mesa.h"
#include "cadeira.h"
#include "candeeiro_mesa.h"
#include "mesa_alta.h"
#include "candeeiro_teto.h"
#include "candeeiro_parede.h"
#include "cadeira_alta.h"
#include "copo.h"
#include "copo_alto.h"
#include "bar.h"
#include "extra.h"


float** res;
int resolucao=100;



float tx=0.0f;
float tz=0.0f;
float x=0.0f,y=1.75f,z=5.0f;
float angle=0.0f,deltaAngle = 0.0,ratio;
float lx=0.0f,ly=0.0f,lz=-1.0f;
float deltaMove = 0, bla=0,deltaUp=0;
float anglestop=0.0f;
int teste=1;
bool dragging;
int dragx, dragy;
float camx, camy;

void orientMe(float ang) {


	lx = sin(ang);
	lz = -cos(ang);
}


void moveMeFlat(float i) {
	x = x + i*(lx)*0.1;
	z = z + i*(lz)*0.1;
}

void Lookup(float i) {
	ly +=0.01*i;
}

void lightsON(){
	GLfloat amb[3] = {0.1, 0.1, 0.1};
	GLfloat diff[3] = {0.5, 0.5, 0.5};
	GLfloat pos1[4] = {3, 3 ,0, 1.0};
	glLightfv(GL_LIGHT0, GL_POSITION, pos1);
	glLightfv(GL_LIGHT0, GL_AMBIENT, amb);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diff);
	
	glEnable(GL_LIGHT0);	//glEnable(GL_LIGHT1);	glEnable(GL_LIGHT2);	/*glEnable(GL_LIGHT3);	glEnable(GL_LIGHT4);*/
}



void changeSize(int w, int h) {
    
	// Prevent a divide by zero, when window is too short
	// (you cant make a window with zero width).
	if(h == 0)
		h = 1;
    
	// compute window's aspect ratio
	float ratio = w * 1.0 / h;
    
	// Set the projection matrix as current
	glMatrixMode(GL_PROJECTION);
	// Load Identity Matrix
	glLoadIdentity();
	
	// Set the viewport to be the entire window
    glViewport(0, 0, w, h);
    
	// Set perspective
	gluPerspective(45.0f ,ratio, 1.0f ,1000.0f);
    
	// return to the model view matrix mode
	glMatrixMode(GL_MODELVIEW);
}

void renderScene(void) {
	//float color[] ={1.0,1.0,1.0,1.0};
	// clear buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_LIGHTING);
	// set the camera
	glLoadIdentity();
	if (deltaMove)
		moveMeFlat(deltaMove);
	if (deltaUp)
		Lookup(deltaUp);
	if (deltaAngle) {
		angle += deltaAngle;
		orientMe(angle);
	}
	//float cam[3] = {x,y,z};
	gluLookAt(x, y, z, 
		      x + lx,y + ly,z + lz,
			  0.0f,1.0f,0.0f);
    
    lightsON();
    
    drawbar();
    
    
    glutPostRedisplay();
    
	// End of frame
	glutSwapBuffers();
}

//Funçoes do teclado
void processNormalKeys(unsigned char key,int x,int y){
    switch(key){
            
		case 'w' : deltaMove = 2.1;break;
		case 's' : deltaMove = -2.1;break;
	}
    if (key == 27)
		exit(0);
}

void releaseKeyNormal(unsigned char key,int x,int y){
	switch (key) {
		case 'w' :
		case 's' : deltaMove = 0;break;
	}
}

void releaseKeySpecial(int key, int x, int y) {
    
	switch (key) {
            
		case GLUT_KEY_LEFT :
		case GLUT_KEY_RIGHT: deltaAngle = 0.0f;break;
		case GLUT_KEY_DOWN:
		case GLUT_KEY_UP: deltaUp = 0;break;
	}
}

void pressKeySpecial(int key, int x1, int y1) {
    
	switch (key) {
		case GLUT_KEY_LEFT : deltaAngle = -0.023f;break;
		case GLUT_KEY_RIGHT : deltaAngle = 0.023f;break;
		case GLUT_KEY_UP : deltaUp = 0.1;break;
		case GLUT_KEY_DOWN : deltaUp = -0.1;break;
            
	}
}
void mouse_motion_handler(int x, int y)
{
	if(dragging)
	{
		if(dragx != x) camx = camx + 0.1 * ( dragx < x ? -1 : 1 );
        
		if(dragy != y) camy = camy + 0.1 * ( dragy < y ? 1 : -1 );
        
		dragx = x;
		dragy = y;
        
		glutPostRedisplay();
	}
}



int main(int argc, char **argv) {
    
    // inicializaçao
	dragging = false;
	dragx = 0; dragy = 0;
	camx = 1;
	camy = 5;
	
	glutInit(&argc, argv);
	ilInit();
	
	glutInitDisplayMode(GLUT_DEPTH|GLUT_DOUBLE|GLUT_RGBA);
	glutInitWindowPosition(0,100);
	glutInitWindowSize(1280,800);
	glutCreateWindow("Rock Bar UM");
    
    // registo de funçoes
	glutDisplayFunc(renderScene);
	glutIdleFunc(renderScene);
	glutReshapeFunc(changeSize);
    
    // por aqui registo da funções do teclado e rato
    glutIgnoreKeyRepeat(1);
	glutKeyboardFunc(processNormalKeys);
	glutSpecialFunc(pressKeySpecial);
	glutSpecialUpFunc(releaseKeySpecial);
	glutKeyboardUpFunc(releaseKeyNormal);
    
    // por aqui a criaçao do menu    
    
	
    glewInit();
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);
    glEnable(GL_TEXTURE_2D);
    glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    
	//Texturas
	genTextureMadeira();
    genTextureMadeira2();
	genTextureMesa();
	genTextureMetal();
	genTextureVidro();
    genTextureChao();
    genTextureParede();
    genTextureTeto();
    genPoster1();
    genPoster2();
    genPoster3();
    genPoster4();
    genPoster5();
    genPoster6();
    genTextureBook();
    genPoster7();
    genSink();
    
    //Objectos
    mesa();
	cadeira();
	candeeirodemesa();
	candeeirodetecto();
	candeeirodeparede();
	mesalta();
	cadeiralta();
	cup();
	copoalto();
    chao();
    paredes();
    palco();
    balcao();
    armario();
    posters();
    bookshelf();
    
    
    // entrar no ciclo do GLUT
	glutMainLoop();
	
	return 1;
}

