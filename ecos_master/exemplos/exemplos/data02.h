/*
 * ECOS - Embedded Conic Solver.
 * Copyright (C) 2012-2015 A. Domahidi [domahidi@embotech.com],
 * Automatic Control Lab, ETH Zurich & embotech GmbH, Zurich, Switzerland.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

idxint n = 3; 	//n Número de variáveis primais
idxint m = 3;	//m Número de restrições conicas, ou seja, uma dimensão da matriz G e comprimento do vector h
idxint p = 2;	//p Número de restrições lineares de igualdade, ou seja, uma dimensão da matriz A e comprimento do vector b
idxint l = 3;	//l dimensao dos cones
idxint ncones = 0;      //ncones Número de cones de segunda ordem presentes no problema
idxint *q = NULL;	//q Disposição de ncones comprimento; Q [i] define a dimensão do cone i
//idxint e = 0;		//e Número de cones exponenciais presentes no problema		

//Gpr, Gjc, Gir Arrays para a matriz G na coluna comprimido de armazenamento (CCS)	
idxint Gjc[4] = {0, 0, 2, 4};
idxint Gir[4] = {0, 1, 0, 2};
pfloat Gpr[4] = {8.0, 1.0, 9.0, -1.0};

//Apr, Ajc, Air Arrays para a matriz A na coluna comprimido de armazenamento (CCS). Pode ser NULL se não há restrições de igualdade estão presentes

idxint Ajc[4] = {0, 2, 3, 4};	
idxint Air[4] = {0, 1, 1, 1};	
pfloat Apr[4] = {1.0, -1.0, 1.0, 1.0};	

pfloat c[3] = {-1.0, 0.0, 0.0};	//c matriz de comprimento n
pfloat h[3] = {25.0, 0.0, 0.0};	//h matriz de comprimento m
pfloat b[2] = {3.0, 0.0};	//b matriz de comprimento p. Pode ser NULL se não há restrições de igualdade estão presentes
