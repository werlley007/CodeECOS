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

idxint n = 2; 	//n Número de variáveis primais
idxint m = 2;	//m Número de restrições conicas, ou seja, uma dimensão da matriz G e comprimento do vector h
idxint p = 1;	//p Número de restrições lineares de igualdade, ou seja, uma dimensão da matriz A e comprimento do vector b
idxint l = 2;	//l dimensao dos cones
idxint ncones = 0;      //ncones Número de cones de segunda ordem presentes no problema
idxint q[4] = {2, 0.5, 0.5, 1};	//q Disposição de ncones comprimento; Q [i] define a dimensão do cone i
//idxint e = 0;		//e Número de cones exponenciais presentes no problema		

//Gpr, Gjc, Gir Arrays para a matriz G na coluna comprimido de armazenamento (CCS)	
idxint Gjc[3] = {0, 1, 2};
idxint Gir[2] = {0, 1};
pfloat Gpr[2] = {-1, -1};

//Apr, Ajc, Air Arrays para a matriz A na coluna comprimido de armazenamento (CCS). Pode ser NULL se não há restrições de igualdade estão presentes

idxint Ajc[3] = {0, 1, 2};
idxint Air[2] = {0, 0};
pfloat Apr[2] = {1, 1};

pfloat c[2] = {1, 1};	//c matriz de comprimento n
pfloat h[2] = {0, 0};		//h matriz de comprimento m
pfloat b[1] = {1};			//b matriz de comprimento p. Pode ser NULL se não há restrições de igualdade estão presentes


