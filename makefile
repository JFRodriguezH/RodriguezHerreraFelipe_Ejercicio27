implicit.png : prueba.py implicit.dat
	python prueba.py
	
implicit.dat : implicit.out
	./implicit.out

implicit.out : prueba.cpp
	c++ prueba.cpp -o implicit.out
	
clear : 
	rm implicit.dat implicit.png implicit.out