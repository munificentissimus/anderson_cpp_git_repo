/*
 * LibCodeCount.h
 *
 *  Created on: 25/03/2014
 *      Author: Core i5
 */

#ifndef LIBCODECOUNT_H_
#define LIBCODECOUNT_H_

/**
 * Protótipo da função de contagem de linhas totais, comentarios e linhas em branco
 * */
void ccRun(char* file, int* nLines, int* nLinesComment, int*LinesEmpty, int noComment, int silent);

#endif /* LIBCODECOUNT_H_ */
