explicit.png : prueba.py explicit_1.dat explicit_01.dat explicit_001.dat explicit_15.dat
	python prueba.py
	
explicit_1.dat : prueba.out
	./prueba.out
    
explicit_15.dat : prueba.out
	./prueba.out
    
explicit_01.dat : prueba.out
	./prueba.out
	
explicit_001.dat : prueba.out
	./prueba.out
	
implicit.png : prueba.py implicit_1.dat implicit_01.dat implicit_001.dat
	python prueba.py
	
implicit_1.dat : prueba.out
	./prueba.out
    
implicit_01.dat : prueba.out
	./prueba.out
	
implicit_001.dat : prueba.out
	./prueba.out

prueba.out : prueba.cpp
	c++ prueba.cpp -o prueba.out
	
clear : 
	rm explicit_1.dat explicit_15.dat explicit_01.dat explicit_001.dat explicit.png implicit_1.dat implicit_01.dat implicit_001.dat implicit.png prueba.out
    
clean :
	rm explicit_1.dat explicit_15.dat explicit_01.dat explicit_001.dat implicit_1.dat implicit_01.dat implicit_001.dat