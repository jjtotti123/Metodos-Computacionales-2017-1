Resultados_hw4.pdf: Resultados_hw4.tex
        pdflatex Resultados_hw4.tex
        

Resultados_hw4.tex: t1c1a.png t2c1a.png t3c1a.png t1c1p.png t2c1p.png t3c1p.png t1c1c.png t2c1c.png t3c1c.png t1c2a.png t2c2a.png t3c2a.png t1c2p.png t2c2p.png t3c2p.png t1c2c.png t2c2c.png t3c2c.png

t1c1a.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t2c1a.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t3c1a.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py

t1c1p.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t2c1p.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t3c1p.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py

t1c1c.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t2c1c.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t3c1c.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py


t1c2a.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t2c2a.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t3c2a.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py

t1c2p.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t2c2p.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t3c2p.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py

t1c2c.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t2c2c.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py
t3c2c.png: Plots_Temperatura.py data.tex
	python Plots_Temperatura.py

data.txt: DifusionTemperatura.c
	gcc DifusionTemperatura.c -o data.out
	./data.out > data.txt
      