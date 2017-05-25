Resultados_hw5.pdf: Resultados_hw5.tex
        pdflatex Resultados_hw5.tex
        

Resultados_hw5.tex: graf1.png graf2.png graf3.png graf4.png graf5.png

graf1.png: plots_canal_ionico.py data.txt
	python plots_canal_ionico.py
    
graf2.png: plots_canal_ionico.py data.txt
	python plots_canal_ionico.py
    
graf3.png: circuitoRC.py 
	python circuitoRC.py
    
graf4.png: circuitoRC.py 
	python circuitoRC.py
    
graf5.png: circuitoRC.py 
	python circuitoRC.py

data.txt: canal_ionico.c
	gcc canal_ionico.c -o data.out
	./data.out > data.txt