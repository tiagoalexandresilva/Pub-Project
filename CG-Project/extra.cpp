//
//  extra.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 1/6/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "extra.h"

GLuint *balcaoG,*balcaoGn,*balcaoGt;
GLuint *balcaotrasG,*balcaotrasGn,*balcaotrasGt;
GLuint *palcoG,*palcoGn,*palcoGt;
GLuint *posterG,*posterGn,*posterGt;
GLuint *armarioG, *armarioGn,*armarioGt,*armTopoG,*armTopoGn,*armTopoGt;
GLuint *bookshelfG, *bookshelfGn, *bookshelfGt;


void armario()
{
	armarioG=(GLuint*)malloc(sizeof(GLuint));
	armarioGn=(GLuint*)malloc(sizeof(GLuint));
	armarioGt=(GLuint*)malloc(sizeof(GLuint));
	armTopoG=(GLuint*)malloc(sizeof(GLuint));
	armTopoGn=(GLuint*)malloc(sizeof(GLuint));
	armTopoGt=(GLuint*)malloc(sizeof(GLuint));
	float *armF=NULL,*armFt=NULL,*armFn=NULL,*armTopoF=NULL,*armTopoFt=NULL,*armTopoFn=NULL;
	res=cubo(0.6f,0.7f,5.0f,0,0,0,armFn,armFt);
	armF=res[0];
	armFn=res[1];
	armFt=res[2];
	res=plano(1.3f,5.0f,0,0,0,armTopoFn,armTopoFt);
	armTopoF=res[0];
	armTopoFn=res[1];
	armTopoFt=res[2];
	glGenBuffers(1,armarioG);
    glBindBuffer(GL_ARRAY_BUFFER,armarioG[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), armF,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    
    
    glGenBuffers(1,armarioGn);
    glBindBuffer(GL_ARRAY_BUFFER,armarioGn[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), armFn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    
    
    
    glGenBuffers(1,armarioGt);
    glBindBuffer(GL_ARRAY_BUFFER,armarioGt[0]);
    glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), armFt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    
	glGenBuffers(1,armTopoG);
    glBindBuffer(GL_ARRAY_BUFFER,armTopoG[0]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), armTopoF,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    
    
    glGenBuffers(1,armTopoGn);
    glBindBuffer(GL_ARRAY_BUFFER,armTopoGn[0]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), armTopoFn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    
    
    
    glGenBuffers(1,armTopoGt);
    glBindBuffer(GL_ARRAY_BUFFER,armTopoGt[0]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), armTopoFt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
}

void balcao()
{
   	balcaoG=(GLuint*)malloc(sizeof(GLuint));
	balcaoGn=(GLuint*)malloc(sizeof(GLuint));
	balcaoGt=(GLuint*)malloc(sizeof(GLuint));
	balcaotrasG=(GLuint*)malloc(sizeof(GLuint));
	balcaotrasGn=(GLuint*)malloc(sizeof(GLuint));
	balcaotrasGt=(GLuint*)malloc(sizeof(GLuint));
    float *mainG=NULL,*mainGn=NULL,*mainGt=NULL,*trasG=NULL,*trasGn=NULL,*trasGt=NULL;
    
    res=cubo(0.6f,1.3f,5.0f,0,0,0,mainGn,mainGt);
	mainG=res[0];
	mainGn=res[1];
	mainGt=res[2];
	res=cubo(0.6f,0.7f,5.0f,0,0,0,mainGn,mainGt);
	trasG=res[0];
	trasGn=res[1];
	trasGt=res[2];
	glGenBuffers(1,balcaoG);
    glBindBuffer(GL_ARRAY_BUFFER,balcaoG[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), mainG,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    
    
    glGenBuffers(1,balcaoGn);
    glBindBuffer(GL_ARRAY_BUFFER,balcaoGn[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), mainGn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    
    
    
    glGenBuffers(1,balcaoGt);
    glBindBuffer(GL_ARRAY_BUFFER,balcaoGt[0]);
    glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), mainGt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    
	glGenBuffers(1,balcaotrasG);
    glBindBuffer(GL_ARRAY_BUFFER,balcaotrasG[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), trasG,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    
    
    glGenBuffers(1,balcaotrasGn);
    glBindBuffer(GL_ARRAY_BUFFER,balcaotrasGn[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), trasGn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    
    
    
    glGenBuffers(1,balcaotrasGt);
    glBindBuffer(GL_ARRAY_BUFFER,balcaotrasGt[0]);
    glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), trasGt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
}



void drawBalcao()
{
	float color[] = {1.0,1.0,1.0,1.0};
    glPushMatrix();
    glTranslatef(10.0f, 0.0f, 5.0f);
    drawCubo(balcaoG[0],balcaoGn[0],balcaoGt[0],madeiraID2,color);
    
    glTranslatef(0.5f, 0.0f, 0.0f);
    drawCubo(balcaotrasG[0],balcaotrasGn[0],balcaotrasGt[0],madeiraID2,color);
    
	glTranslatef(1.5f, 0.0f, 0.0f);
	drawCubo(armarioG[0],armarioGn[0],armarioGt[0],madeiraID2,color);
	glTranslatef(0.3f, 1.3f, 0.0f);
	glRotatef(90,0,0,1);
	drawPlano(*armTopoG,*armTopoGn,*armTopoGt,madeiraID2,color);
    glPopMatrix();
}


void palco()
{
    palcoG=(GLuint*)malloc(sizeof(GLuint));
	palcoGn=(GLuint*)malloc(sizeof(GLuint));
	palcoGt=(GLuint*)malloc(sizeof(GLuint));
    float *patamarG=NULL,*patamarGn=NULL,*patamarGt=NULL;
    
    res=cubo(7.0f,0.3f,5.0f,0,0,0,patamarGn,patamarGt);
	patamarG=res[0];
	patamarGn=res[1];
	patamarGt=res[2];
    
    
    glGenBuffers(1,palcoG);
    glBindBuffer(GL_ARRAY_BUFFER,palcoG[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), patamarG,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);

    
    glGenBuffers(1,palcoGn);
    glBindBuffer(GL_ARRAY_BUFFER,palcoGn[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), patamarGn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);

    
    
    glGenBuffers(1,palcoGt);
    glBindBuffer(GL_ARRAY_BUFFER,palcoGt[0]);
    glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), patamarGt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);

}

void drawpalco()
{
    float color[] = {1.0,1.0,1.0,1.0};
    glPushMatrix();
    glTranslatef(16.0f, 0.0f, 2.0f);
    drawCubo(palcoG[0],palcoGn[0],palcoGt[0],madeiraID,color);
    glPopMatrix();

}


void posters()
{
    posterG=(GLuint*)malloc(8*sizeof(GLuint));
    posterGn=(GLuint*)malloc(8*sizeof(GLuint));
    posterGt=(GLuint*)malloc(8*sizeof(GLuint));
    
    float *poster1G=NULL,*poster1Gn=NULL,*poster1Gt=NULL;
    float *poster2G=NULL,*poster2Gn=NULL,*poster2Gt=NULL;
    float *poster3G=NULL,*poster3Gn=NULL,*poster3Gt=NULL;
    float *poster4G=NULL,*poster4Gn=NULL,*poster4Gt=NULL;
    float *poster5G=NULL,*poster5Gn=NULL,*poster5Gt=NULL;
    float *poster6G=NULL,*poster6Gn=NULL,*poster6Gt=NULL;
    float *poster7G=NULL,*poster7Gn=NULL,*poster7Gt=NULL;
    float *poster8G=NULL,*poster8Gn=NULL,*poster8Gt=NULL;
    
    res=plano(1.0f,2.0f,0,0,0,poster1Gn,poster1Gt);
    poster1G=res[0];
    poster1Gn=res[1];
    poster1Gt=res[2];
    res=plano(1.0f,2.0f,0,0,0,poster2Gn,poster2Gt);
    poster2G=res[0];
    poster2Gn=res[1];
    poster2Gt=res[2];
    res=plano(1.0f,2.0f,0,0,0,poster3Gn,poster3Gt);
    poster3G=res[0];
    poster3Gn=res[1];
    poster3Gt=res[2];
    res=plano(1.0f,2.0f,0,0,0,poster4Gn,poster4Gt);
    poster4G=res[0];
    poster4Gn=res[1];
    poster4Gt=res[2];
    res=plano(1.0f,2.0f,0,0,0,poster5Gn,poster5Gt);
    poster5G=res[0];
    poster5Gn=res[1];
    poster5Gt=res[2];
    res=plano(1.0f,2.0f,0,0,0,poster6Gn,poster6Gt);
    poster6G=res[0];
    poster6Gn=res[1];
    poster6Gt=res[2];
    res=plano(1.5f,3.3f,0,0,0,poster7Gn,poster7Gt);
    poster7G=res[0];
    poster7Gn=res[1];
    poster7Gt=res[2];
    res=plano(1.0f,0.6f,0,0,0,poster8Gn,poster8Gt);
    poster8G=res[0];
    poster8Gn=res[1];
    poster8Gt=res[2];
    
    
    glGenBuffers(8,posterG);
    glBindBuffer(GL_ARRAY_BUFFER,posterG[0]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster1G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterG[1]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster2G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterG[2]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster3G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterG[3]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster4G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterG[4]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster5G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterG[5]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster6G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterG[6]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster7G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterG[7]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster8G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    
    glGenBuffers(8,posterGn);
    glBindBuffer(GL_ARRAY_BUFFER,posterGn[0]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster1Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGn[1]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster2Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGn[2]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster3Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGn[3]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster4Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGn[4]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster5Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGn[5]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster6Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGn[6]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster7Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGn[7]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), poster8Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    
    glGenBuffers(8,posterGt);
    glBindBuffer(GL_ARRAY_BUFFER,posterGt[0]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), poster1Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGt[1]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), poster2Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGt[2]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), poster3Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGt[3]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), poster4Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGt[4]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), poster5Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGt[5]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), poster6Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGt[6]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), poster7Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,posterGt[7]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), poster8Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);

}

void drawposters()
{
    float color[] = {1.0,1.0,1.0,1.0};
	
    //festival termometro
    glPushMatrix();
    glRotatef(90,0.0f,0.0f,0.0f);
    glTranslatef(9.50f,-0.49f,-2.0f);
    drawPlano(posterG[0],posterGn[0],posterGt[0],posterID1,color);
	glPopMatrix();
    
    //paredes 2012
    glPushMatrix();
    glRotatef(270,0.0f,0.0f,0.0f);
    glTranslatef(6.0f,-19.49f,+2.0f);
    drawPlano(posterG[1],posterGn[1],posterGt[1],posterID2,color);
	glPopMatrix();
    
    //Paredes
    glPushMatrix();
    glRotatef(270,0.0f,0.0f,0.0f);
    glTranslatef(14.50f,-9.49f,+2.0f);
    drawPlano(posterG[2],posterGn[2],posterGt[2],posterID3,color);
	glPopMatrix();
    
    //Enterro
    glPushMatrix();
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(180,1.0f,0.0f,1.0f);
    glTranslatef(9.5f,-0.49f,2.0f);
    drawPlano(posterG[3],posterGn[3],posterGt[3],posterID4,color);
	glPopMatrix();
    
    //Led Zepplin
    glPushMatrix();
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(180,1.0f,0.0f,1.0f);
    glRotatef(180,0.0f,0.0f,1.0f);
    glTranslatef(-4.5f,-19.49f,2.0f);
    drawPlano(posterG[4],posterGn[4],posterGt[4],posterID5,color);
	glPopMatrix();
    
    //Shameless
    glPushMatrix();
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(180,1.0f,0.0f,1.0f);
    glRotatef(180,0.0f,0.0f,1.0f);
    glTranslatef(-14.5f,-9.49f,2.0f);
    drawPlano(posterG[5],posterGn[5],posterGt[5],posterID6,color);
	glPopMatrix();
    
    //porta
    glPushMatrix();
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(180,1.0f,0.0f,1.0f);
    glTranslatef(7.5f,-0.49f,1.3f);
    drawPlano(posterG[6],posterGn[6],posterGt[6],posterID7,color);
	glPopMatrix();
    
    //sink
    glPushMatrix();
    glTranslatef(1.0f,0.71f,19.2f);
    drawPlano(posterG[7],posterGn[7],posterGt[7],sinkID,color);
	glPopMatrix();
    
}

void bookshelf()
{
    bookshelfG=(GLuint*)malloc(2*sizeof(GLuint));
    bookshelfGn=(GLuint*)malloc(2*sizeof(GLuint));
    bookshelfGt=(GLuint*)malloc(2*sizeof(GLuint));
    
    float *book1G=NULL,*book1Gn=NULL,*book1Gt=NULL;
    float *book2G=NULL,*book2Gn=NULL,*book2Gt=NULL;
    
    res=cubo(1.5f,0.5f,2.0f,0,0,0,book1Gn,book1Gt);
    book1G=res[0];
    book1Gn=res[1];
    book1Gt=res[2];
    res=plano(1.5f,2.0f,0,0,0,book2Gn,book2Gt);
    book2G=res[0];
    book2Gn=res[1];
    book2Gt=res[2];
    
    glGenBuffers(2,bookshelfG);
    glBindBuffer(GL_ARRAY_BUFFER,bookshelfG[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), book1G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,bookshelfG[1]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), book2G,GL_STATIC_DRAW);
    glVertexPointer(3,GL_FLOAT,0,0);
    
    glGenBuffers(2,bookshelfGn);
    glBindBuffer(GL_ARRAY_BUFFER,bookshelfGn[0]);
    glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), book1Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,bookshelfGn[1]);
    glBufferData(GL_ARRAY_BUFFER,18*sizeof(float), book2Gn,GL_STATIC_DRAW);
    glNormalPointer(GL_FLOAT,0,0);
    
    glGenBuffers(2,bookshelfGt);
    glBindBuffer(GL_ARRAY_BUFFER,bookshelfGt[0]);
    glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), book1Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    glBindBuffer(GL_ARRAY_BUFFER,bookshelfGt[1]);
    glBufferData(GL_ARRAY_BUFFER,12*sizeof(float), book2Gt,GL_STATIC_DRAW);
    glTexCoordPointer(2,GL_FLOAT,0,0);
    
}

void drawbookshelf()
{
    float color[] = {1.0,1.0,1.0,1.0};
    glPushMatrix();
    glRotatef(90,1.0f,0.0f,0.0f);
    glTranslatef(9.50f,-0.49f,-1.0f);
    drawCubo(bookshelfG[0],bookshelfGn[0],bookshelfGt[0],madeiraID,color);
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(90,0.0f,0.0f,0.0f);
    glTranslatef(9.50f,0.011f,-1.0f);
    drawPlano(bookshelfG[1],bookshelfGn[1],bookshelfGt[1],bookID,color);
	glPopMatrix();
    




}
