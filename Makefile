secant_method: main.c amh_secant.c
	gcc main.c amh_secant.c -O -Wall -o amh_secant
	
clean:
	rm amh_secant
