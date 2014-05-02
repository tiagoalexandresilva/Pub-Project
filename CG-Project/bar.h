//
//  bar.h
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#ifndef __Projecto_CG__bar__
#define __Projecto_CG__bar__

#include <iostream>
#include "main.h"
#include "primitivas.h"
#include "texturas.h"


#endif /* defined(__Projecto_CG__bar__) */

extern GLuint *planoG,*planoGn,*planoGt;

void chao ();
void drawchao(float x, float z);
void finalchao();
void paredes();
void drawparedes();
void drawbar();