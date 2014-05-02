//
//  texturas.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "texturas.h"

unsigned int madeiraID,madeiraID2,vidroID,mesatextID,metalID,chaoID,paredeID,tetoID,posterID1,posterID2,posterID3,posterID4,posterID5,posterID6,bookID,posterID7,sinkID;


void genTextureMadeira(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"woodText.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&madeiraID);
	glBindTexture(GL_TEXTURE_2D,madeiraID);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genTextureMadeira2(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"madeira.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&madeiraID2);
	glBindTexture(GL_TEXTURE_2D,madeiraID2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genTextureVidro(){
    
	unsigned int t, tw, th;
	unsigned char *texData;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"vidro.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&vidroID);
	glBindTexture(GL_TEXTURE_2D,vidroID);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
}

void genTextureMesa(){
    
	unsigned int t, tw, th;
	unsigned char *texData;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"mesa.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&mesatextID);
	glBindTexture(GL_TEXTURE_2D,mesatextID);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
}

void genTextureMetal(){
    
	unsigned int t, tw, th;
	unsigned char *texData;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"metal.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&metalID);
	glBindTexture(GL_TEXTURE_2D,metalID);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
}

void genTextureChao(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"floor.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&chaoID);
	glBindTexture(GL_TEXTURE_2D,chaoID);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genTextureParede(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"parede.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&paredeID);
	glBindTexture(GL_TEXTURE_2D,paredeID);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genTextureTeto(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"teto.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&tetoID);
	glBindTexture(GL_TEXTURE_2D,tetoID);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genPoster1(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"poster1.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&posterID1);
	glBindTexture(GL_TEXTURE_2D,posterID1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genPoster2(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"poster2.png");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&posterID2);
	glBindTexture(GL_TEXTURE_2D,posterID2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}
void genPoster3(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"poster3.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&posterID3);
	glBindTexture(GL_TEXTURE_2D,posterID3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genPoster4(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"poster4.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&posterID4);
	glBindTexture(GL_TEXTURE_2D,posterID4);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}
void genPoster5(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"poster5.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&posterID5);
	glBindTexture(GL_TEXTURE_2D,posterID5);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genPoster6(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"poster6.png");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&posterID6);
	glBindTexture(GL_TEXTURE_2D,posterID6);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genTextureBook(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"book.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&bookID);
	glBindTexture(GL_TEXTURE_2D,bookID);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

//porta
void genPoster7(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"porta.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&posterID7);
	glBindTexture(GL_TEXTURE_2D,posterID7);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}

void genSink(){
    
	unsigned int t, tw, th;
	unsigned char *texData=NULL;
	ilGenImages(1,&t);
	ilBindImage(t);
	ilLoadImage((ILstring)"sink.jpg");
	tw = ilGetInteger(IL_IMAGE_WIDTH);
	th = ilGetInteger(IL_IMAGE_HEIGHT);
	ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	texData = ilGetData();
	glGenTextures(1,&sinkID);
	glBindTexture(GL_TEXTURE_2D,sinkID);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0,GL_RGBA, GL_UNSIGNED_BYTE, texData);
    
}