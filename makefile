walk.png : walk.py walk.dat
	python walk.py

walk.dat : walk.x
	./walk.x > walk.dat	

walk.x : walk.cpp
	c++ walk.cpp -o walk.x

clean :
	rm walk.png walk.dat walk.x