idxint n = 4; 	//n Número de variáveis primais
idxint m = 0;	//m Número de restrições conicas, ou seja, uma dimensão da matriz G e comprimento do vector h
idxint p = 4;	//p Número de restrições lineares de igualdade, ou seja, uma dimensão da matriz A e comprimento do vector b
idxint l = 0;	//l dimensao dos cones
idxint ncones = 0;      //ncones Número de cones de segunda ordem presentes no problema
idxint *q = 0;	//q Disposição de ncones comprimento; Q [i] define a dimensão do cone i
//idxint e = 0;		//e Número de cones exponenciais presentes no problema		

//Gpr, Gjc, Gir Arrays para a matriz G na coluna comprimido de armazenamento (CCS)	
idxint *Gjc = NULL;	
idxint *Gir = NULL;
pfloat *Gpr = NULL;

//Apr, Ajc, Air Arrays para a matriz A na coluna comprimido de armazenamento (CCS). Pode ser NULL se não há restrições de igualdade estão presentes
//idxint Ajc[3] = {0, 3, 6};	
//idxint Air[6] = {0, 1, 2, 0, 1, 3};	
//pfloat Apr[6] = {1, 1, 1, 1, 3, 1};	

idxint Ajc[3] = {0, 2, 4};	
idxint Air[4] = {0, 1, 0, 1};	
pfloat Apr[4] = {1, 1, 1, 3};

pfloat c[4] = {1, 2, 0, 0};	//c matriz de comprimento n
pfloat *h = NULL;	//h matriz de comprimento m
pfloat b[4] = {5, 6, 0, 0};	//b matriz de comprimento p. Pode ser NULL se não há restrições de igualdade estão presentes
