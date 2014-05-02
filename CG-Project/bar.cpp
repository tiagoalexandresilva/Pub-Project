//
//  bar.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "bar.h"
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
#include "extra.h"

GLuint *planoG,*planoGn,*planoGt;
GLuint *paredeG,*paredeGn,*paredeGt;


void chao (){
    
    planoG=(GLuint*)malloc(2*sizeof(GLuint));
    planoGn=(GLuint*)malloc(2*sizeof(GLuint));
    planoGt=(GLuint*)malloc(2*sizeof(GLuint));
    
    float *planoV,*planoN=NULL,*planoT=NULL;
    float *plano2V,*plano2N=NULL,*plano2T=NULL;
    
    res=plano(1.0f,1.0f,0,0,0,planoN,planoT);
    planoV=res[0];
    planoN=res[1];
    planoT=res[2];
    res=plano(1.0f,1.0f,0,0,0,planoN,planoT);
    plano2V=res[0];
    plano2N=res[1];
    plano2T=res[2];

    glGenBuffers(2,planoG);
    glBindBuffer(GL_ARRAY_BUFFER,planoG[0]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), planoV,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,planoG[1]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), plano2V,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);

    glGenBuffers(2,planoGn);
    glBindBuffer(GL_ARRAY_BUFFER,planoGn[0]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), planoN,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,planoGn[1]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), plano2N,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);

    
    glGenBuffers(2,planoGt);
    glBindBuffer(GL_ARRAY_BUFFER,planoGt[0]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), planoT,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,planoGt[1]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), plano2T,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);

}


void drawchao(float x, float z)
{
    float color[] = {1.0,1.0,1.0,1.0};
    glPushMatrix();
    glTranslatef(0.0f+x, 0.0f, 0.0f+z);
    drawPlano(planoG[0],planoGn[0],planoGt[0],chaoID,color);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f+x, 4.0f, 0.0f+z);
    glRotatef(180,0.0f,0.0f,0.0f);
    drawPlano(planoG[1],planoGn[1],planoGt[1],tetoID,color);
    glPopMatrix();
    

}


void finalchao()
{
    
    float a=0.0f,b=0.0f;
    
    while(a!=10){
        b=0.0f;
        while(b!=20){
        drawchao(a,b);
        drawchao(b,a);
            b++;
        }
        a++;
    }
}

void paredes()
{
    paredeG=(GLuint*)malloc(6*sizeof(GLuint));
    paredeGn=(GLuint*)malloc(6*sizeof(GLuint));
    paredeGt=(GLuint*)malloc(6*sizeof(GLuint));
    
    float *parede1G=NULL,*parede1Gn=NULL,*parede1Gt=NULL;
    float *parede2G=NULL,*parede2Gn=NULL,*parede2Gt=NULL;
    float *parede3G=NULL,*parede3Gn=NULL,*parede3Gt=NULL;
    float *parede4G=NULL,*parede4Gn=NULL,*parede4Gt=NULL;
    float *parede5G=NULL,*parede5Gn=NULL,*parede5Gt=NULL;
    float *parede6G=NULL,*parede6Gn=NULL,*parede6Gt=NULL;
    
    res=plano(20.0f,4.0f,0,0,0,parede1Gn,parede1Gt);
    parede1G=res[0];
    parede1Gn=res[1];
    parede1Gt=res[2];
    res=plano(10.0f,4.0f,0,0,0,parede2Gn,parede2Gt);
    parede2G=res[0];
    parede2Gn=res[1];
    parede2Gt=res[2];
    res=plano(10.0f,4.0f,0,0,0,parede3Gn,parede3Gt);
    parede3G=res[0];
    parede3Gn=res[1];
    parede3Gt=res[2];
    res=plano(20.0f,4.0f,0,0,0,parede4Gn,parede4Gt);
    parede4G=res[0];
    parede4Gn=res[1];
    parede4Gt=res[2];
    res=plano(10.0f,4.0f,0,0,0,parede5Gn,parede5Gt);
    parede5G=res[0];
    parede5Gn=res[1];
    parede5Gt=res[2];
    res=plano(10.0f,4.0f,0,0,0,parede6Gn,parede6Gt);
    parede6G=res[0];
    parede6Gn=res[1];
    parede6Gt=res[2];
    
    
    glGenBuffers(6,paredeG);
    glBindBuffer(GL_ARRAY_BUFFER,paredeG[0]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede1G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeG[1]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede2G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeG[2]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede3G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeG[3]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede4G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeG[4]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede5G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeG[5]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede6G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    
    glGenBuffers(6,paredeGn);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGn[0]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede1Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGn[1]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede2Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGn[2]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede3Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGn[3]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede4Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGn[4]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede5Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGn[5]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), parede6Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    
    glGenBuffers(6,paredeGt);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGt[0]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), parede1Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGt[1]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), parede2Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGt[2]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), parede3Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGt[3]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), parede4Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGt[4]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), parede5Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,paredeGt[5]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), parede6Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);


}

void drawparedes()
{
    float color[] = {1.0,1.0,1.0,1.0};
	glPushMatrix();
    glRotatef(90,0.0f,0.0f,0.0f);
    glTranslatef(9.5f,-0.50f,-2.0f);
    drawPlano(paredeG[0],paredeGn[0],paredeGt[0],paredeID,color);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(270,0.0f,0.0f,0.0f);
    glTranslatef(4.5f,-19.5f,+2.0f);
    drawPlano(paredeG[1],paredeGn[1],paredeGt[1],paredeID,color);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(270,0.0f,0.0f,0.0f);
    glTranslatef(14.5f,-9.5f,+2.0f);
    drawPlano(paredeG[2],paredeGn[2],paredeGt[2],paredeID,color);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(180,1.0f,0.0f,1.0f);
    glTranslatef(9.5f,-0.5f,2.0f);
    drawPlano(paredeG[3],paredeGn[3],paredeGt[3],paredeID,color);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(180,1.0f,0.0f,1.0f);
    glRotatef(180,0.0f,0.0f,1.0f);
    glTranslatef(-4.5f,-19.5f,2.0f);
    drawPlano(paredeG[4],paredeGn[4],paredeGt[4],paredeID,color);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(180,1.0f,0.0f,1.0f);
    glRotatef(180,0.0f,0.0f,1.0f);
    glTranslatef(-14.5f,-9.5f,2.0f);
    drawPlano(paredeG[5],paredeGn[5],paredeGt[5],paredeID,color);
	glPopMatrix();
}

void conjuntomobiliario(float x, float z){
	
	glPushMatrix();
    drawcandeeirodemesa(x, z);
	glPopMatrix();
    
	glPushMatrix();
    drawmesa(x, z);
	glPopMatrix();
    
	glPushMatrix();
    glRotatef(270,0.0f,1.0f,0.0f);
    glTranslatef(0.0f+x,0.0f,-1.0f-z);
    drawcadeira(0.5f,0.5f);
	glPopMatrix();
    
	glPushMatrix();
    glRotatef(270,0.0f,1.0f,0.0f);
    glTranslatef(-1.0f+x,0.0f,0.0f-z);
    drawcadeira(0.5f,-0.5f);
	glPopMatrix();
    
	glPushMatrix();
    glRotatef(90,0.0f,1.0f,0.0f);
    glTranslatef(0.0f-x,0.0f,-1.0f+z);
    drawcadeira(-0.5f,0.5f);
	glPopMatrix();
    
	glPushMatrix();
    glRotatef(90,0.0f,1.0f,0.0f);
    glTranslatef(1.0f-x,0.0f,0.0f+z);
    drawcadeira(-0.5f,-0.5f);
	glPopMatrix();
}

void drawbar()
{
    finalchao();
    drawparedes();
    drawpalco();
    
    
    glPushMatrix();
    glTranslatef(-8.5f, 0.0f, 0.0f);
    drawbookshelf();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-6.8f, 0.0f, 0.0f);
    drawbookshelf();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-5.1f, 0.0f, 0.0f);
    drawbookshelf();
    glPopMatrix();
    
    drawmesalta(19, 7);
    drawmesalta(16, 7);
    drawmesalta(13, 7);
    
    glPushMatrix();
    glRotatef(90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-11.3f, 0.0f, 2.4f);
    drawcadeiralta(4.3, 16);
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-11.3f, 0.0f, -0.6f);
    drawcadeiralta(4.3, 16);
    glPopMatrix();

    glPushMatrix();
    glRotatef(180, 0.0f, 1.0f, 0.0f);
    glTranslatef(-20.3f, 0.0f, -23.6f);
    drawcadeiralta(4.3, 16);
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(180, 0.0f, 1.0f, 0.0f);
    glTranslatef(-17.3f, 0.0f, -23.6f);
    drawcadeiralta(4.3, 16);
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(180, 0.0f, 1.0f, 0.0f);
    glTranslatef(-23.3f, 0.0f, -23.6f);
    drawcadeiralta(4.3, 16);
    glPopMatrix();
    
    
    glPushMatrix();
    glRotatef(90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-11.3f, 0.0f, -3.6f);
    drawcadeiralta(4.3, 16);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(1.0f, 0.0f, 0.0f);
    conjuntomobiliario(3.0f, 3.0f);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-2.0f, 0.0f, 0.0f);
    conjuntomobiliario(3.0f, 3.0f);
    glPopMatrix();
    
    drawcadeiralta(4.3, 16);
    drawcadeiralta(3.3, 16);
    drawcadeiralta(2.3, 16);
    drawcadeiralta(1.3, 16);
    drawcadeiralta(0.3, 16);
    
    glPushMatrix();
    glTranslatef(13.0f, 1.5f, 7.0f);
    glScalef(0.1f,0.1f,0.1f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(16.0f, 1.5f, 7.0f);
    glScalef(0.1f,0.1f,0.1f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(19.0f, 1.5f, 7.0f);
    glScalef(0.1f,0.1f,0.1f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-5.5f, 3.0f, -12.0f);
    drawcandeeirodetecto(7, 11);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-0.5f, 3.0f, -12.0f);
    drawcandeeirodetecto(7, 11);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-5.5f, 3.0f, -16.0f);
    drawcandeeirodetecto(7, 11);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-0.5f, 3.0f, -16.0f);
    drawcandeeirodetecto(7, 11);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-5.5f, 3.0f, -20.0f);
    drawcandeeirodetecto(7, 11);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-0.5f, 3.0f, -20.0f);
    drawcandeeirodetecto(7, 11);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-0.5f, 3.0f, -24.0f);
    drawcandeeirodetecto(7, 11);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glTranslatef(-0.5f, 3.0f, -28.0f);
    drawcandeeirodetecto(7, 11);
	glPopMatrix();
    
    drawposters();
    
    
    
    //balcao e a partir daqui tudo desse lado
    glPushMatrix();
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glTranslatef(7.18f, 0.0f, -7.0f);
    drawBalcao();
    glPopMatrix();
    
    
    //Candeeiro lado do balcao
    glPushMatrix();
    glTranslatef(0.0f, 3.0f, 0.0f);
    drawcandeeirodetecto(7, 11);
	glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 3.0f, 0.0f);
    drawcandeeirodetecto(7, 14);
	glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 3.0f, 0.0f);
    drawcandeeirodetecto(1.5, 11);
	glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 3.0f, 0.0f);
    drawcandeeirodetecto(1.5, 14);
	glPopMatrix();
    //Candeeiro lado do balcao
    
    //Mesas lado do balcao
    glPushMatrix();
    glRotatef(-90,0.0f,1.0f,0.0f);
    glTranslatef(9.0f, 0.0f, -12.0f);
    conjuntomobiliario(5.0f, 5.0f);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90,0.0f,1.0f,0.0f);
    glTranslatef(6.0f, 0.0f, -12.0f);
    conjuntomobiliario(5.0f, 5.0f);
	glPopMatrix();
    
    
    glPushMatrix();
    glRotatef(-90,0.0f,1.0f,0.0f);
    glTranslatef(9.0f, 0.0f, -6.5f);
    conjuntomobiliario(5.0f, 5.0f);
	glPopMatrix();
    
    glPushMatrix();
    glRotatef(-90,0.0f,1.0f,0.0f);
    glTranslatef(6.0f, 0.0f, -6.5f);
    conjuntomobiliario(5.0f, 5.0f);
	glPopMatrix();
    //Mesas lado do balcao
    
    glPushMatrix();
    glTranslatef(6.3f, 0.9f, 10.8f);
    glScalef(0.1f,0.1f,0.1f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(7.3f, 0.9f, 10.8f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(6.3f, 0.9f, 13.8f);
    glScalef(0.1f,0.1f,0.1f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(7.3f, 0.9f, 13.8f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.8f, 0.9f, 10.8f);
    glScalef(0.1f,0.1f,0.1f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(1.8f, 0.9f, 10.8f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.8f, 0.9f, 13.8f);
    glScalef(0.1f,0.1f,0.1f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(1.8f, 0.9f, 13.8f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.8f, 1.3f, 17.2f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(2.8f, 1.3f, 17.2f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(3.8f, 1.3f, 17.2f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(2.3f, 1.3f, 17.2f);
    glScalef(0.13f,0.13f,0.13f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.3f, 1.3f, 17.2f);
    glScalef(0.13f,0.13f,0.13f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(3.3f, 1.3f, 17.2f);
    glScalef(0.13f,0.13f,0.13f);
    drawCup();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(4.3f, 1.3f, 17.2f);
    glScalef(0.13f,0.13f,0.13f);
    drawCup();
    glPopMatrix();
    
    //atras do balcao
    
    
    glPushMatrix();
    glTranslatef(0.0f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.1f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.2f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.3f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.4f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.5f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.6f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.7f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.8f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 0.7f, 17.6f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.1f, 0.7f, 17.7f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.2f, 0.7f, 17.7f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.3f, 0.7f, 17.7f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.4f, 0.7f, 17.7f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.5f, 0.7f, 17.7f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.6f, 0.7f, 17.7f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.7f, 0.7f, 17.7f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.8f, 0.7f, 17.7f);
    glScalef(0.13f,0.13f,0.13f);
    drawcopoalto(0, 0);
    glPopMatrix();
    
    
    

    
    
}


